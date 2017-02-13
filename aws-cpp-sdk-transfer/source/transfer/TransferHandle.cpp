/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/transfer/TransferHandle.h>

#include <cassert>

namespace Aws
{
    namespace Transfer
    {

        PartState::PartState() :
            m_partId(0),
            m_eTag(""),
            m_currentProgressInBytes(0),
            m_bestProgressInBytes(0),
            m_sizeInBytes(0),
            m_nextAppendChain(nullptr),
            m_appendLock(),
            m_appendSignal(),
            m_canAppendProceed(false),
            m_appendValid(false),
            m_downloadPartStream(nullptr),
            m_downloadBuffer(nullptr)
        {}

        PartState::PartState(int partId, size_t bestProgressInBytes, size_t sizeInBytes) :
            m_partId(partId),
            m_eTag(""),
            m_currentProgressInBytes(0),
            m_bestProgressInBytes(bestProgressInBytes),
            m_sizeInBytes(sizeInBytes),
            m_nextAppendChain(nullptr),
            m_appendLock(),
            m_appendSignal(),
            m_canAppendProceed(false),
            m_appendValid(false),
            m_downloadPartStream(nullptr),
            m_downloadBuffer(nullptr)
        {}


        void PartState::Reset()
        {
            m_currentProgressInBytes = 0;
            m_canAppendProceed = false;
            m_appendValid = false;
        }

        void PartState::OnDataTransferred(long long amount, const std::shared_ptr<TransferHandle> &transferHandle)
        {
            m_currentProgressInBytes += amount;
            if (m_currentProgressInBytes > m_bestProgressInBytes)
            {
                transferHandle->UpdateBytesTransferred(m_currentProgressInBytes - m_bestProgressInBytes);
                m_bestProgressInBytes = m_currentProgressInBytes;
            }
        }

        void PartState::SignalNextPartForAppend(bool appendValid)
        {
            if(m_nextAppendChain)
            {
                {
                    std::lock_guard<std::mutex> locker(m_nextAppendChain->m_appendLock);
                    m_nextAppendChain->m_appendValid = appendValid;
                    m_nextAppendChain->m_canAppendProceed = true;
                }
                m_nextAppendChain->m_appendSignal.notify_one();
            }
        }

        bool PartState::WaitOnAppendSignal()
        {
            if (m_partId == 1)
            {
                return true;
            }

            std::unique_lock<std::mutex> locker(m_appendLock);
            while(!m_canAppendProceed)
            {
                m_appendSignal.wait(locker, [this](){ return m_canAppendProceed.load(); });
            }

            return m_appendValid;
        }

        PartStateMap TransferHandle::GetCompletedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_completedParts;
        }

        void TransferHandle::ChangePartToCompleted(const PartPointer& partState, const Aws::String &eTag)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            if (!m_pendingParts.erase(partState->GetPartId()))
            {                   
                m_failedParts.erase(partState->GetPartId());
            }
            
            partState->SetETag(eTag);
            m_completedParts[partState->GetPartId()] = partState;
        }

        PartStateMap TransferHandle::GetQueuedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_queuedParts;
        }

        bool TransferHandle::HasQueuedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_queuedParts.size() > 0;
        }

        void TransferHandle::AddQueuedPart(const PartPointer& partState)
        {            
            std::lock_guard<std::mutex> locker(m_partsLock);
            partState->Reset();
            m_failedParts.erase(partState->GetPartId());          
            m_queuedParts[partState->GetPartId()] = partState;
        }

        PartStateMap TransferHandle::GetPendingParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_pendingParts;
        }

        bool TransferHandle::HasPendingParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_pendingParts.size() > 0;
        }

        void TransferHandle::AddPendingPart(const PartPointer& partState)
        {            
            std::lock_guard<std::mutex> locker(m_partsLock);
            m_queuedParts.erase(partState->GetPartId());           
            m_pendingParts[partState->GetPartId()] = partState;
        }

        PartStateMap TransferHandle::GetFailedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_failedParts;
        }

        bool TransferHandle::HasFailedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_failedParts.size() > 0;
        }

        void TransferHandle::ChangePartToFailed(const PartPointer& partState)
        {
            int partId = partState->GetPartId();

            std::lock_guard<std::mutex> locker(m_partsLock);
            partState->Reset();
            m_pendingParts.erase(partId);
            m_queuedParts.erase(partId);
            m_failedParts[partId] = partState;
        }

        void TransferHandle::GetAllPartsTransactional(PartStateMap& queuedParts, PartStateMap& pendingParts,
            PartStateMap& failedParts, PartStateMap& completedParts)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            queuedParts = m_queuedParts;
            pendingParts = m_pendingParts;
            failedParts = m_failedParts;
            completedParts = m_completedParts;
        }

        bool TransferHandle::HasParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return !m_queuedParts.empty() || !m_pendingParts.empty() || !m_failedParts.empty() || !m_completedParts.empty();
        }

        static bool IsFinishedStatus(TransferStatus value)
        {
            return value == TransferStatus::ABORTED || value == TransferStatus::COMPLETED || value == TransferStatus::FAILED || 
                value == TransferStatus::CANCELED || value == TransferStatus::EXACT_OBJECT_ALREADY_EXISTS;
        }

        static bool IsTransitionAllowed(TransferStatus currentValue, TransferStatus nextState)
        {
            //we can only change from a final state to a final state if moving from canceled to aborted
            if (IsFinishedStatus(currentValue) && IsFinishedStatus(nextState))
            {
                return currentValue == TransferStatus::CANCELED && nextState == TransferStatus::ABORTED;
            }

            return true;
        }

        void TransferHandle::UpdateStatus(TransferStatus value)
        {            
            auto currentStatus = static_cast<TransferStatus>(m_status.load());

            if(IsTransitionAllowed(currentStatus, value))
            {
                m_status.store(static_cast<long>(value));

                if (IsFinishedStatus(value))
                {
                    std::unique_lock<std::mutex> semaphoreLock(m_statusLock);
                    m_waitUntilFinishedSignal.notify_all();
                }
            }
        }

        void TransferHandle::WaitUntilFinished() const
        {
            if (!IsFinishedStatus(static_cast<TransferStatus>(m_status.load())) || HasPendingParts())
            {
                std::unique_lock<std::mutex> semaphoreLock(m_statusLock);
                m_waitUntilFinishedSignal.wait(semaphoreLock, [this]()
                    { return IsFinishedStatus(static_cast<TransferStatus>(m_status.load())) && !HasPendingParts(); });
                semaphoreLock.unlock();
            }
        }

        void TransferHandle::Cancel()
        {
            m_cancel.store(true);
        }

        void TransferHandle::Restart()
        {
            m_cancel = false;
        }

        bool TransferHandle::ShouldContinue() const
        {
            return !m_cancel.load();
        }
    }
}
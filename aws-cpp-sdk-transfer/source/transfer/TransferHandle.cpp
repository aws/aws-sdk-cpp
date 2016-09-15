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

namespace Aws
{
    namespace Transfer
    {
        Aws::Set<std::pair<int, Aws::String>> TransferHandle::GetCompletedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_completedParts;
        }

        void TransferHandle::ChangePartToCompleted(int partNumber, const Aws::String& eTag)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            if (!m_pendingParts.erase(partNumber))
            {                   
                m_failedParts.erase(partNumber);
            }
            
            m_completedParts.insert(std::pair<int, Aws::String>(partNumber, eTag));
        }

        Aws::Set<int> TransferHandle::GetQueuedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_queuedParts;
        }

        void TransferHandle::AddQueuedPart(int partNumber)
        {            
            std::lock_guard<std::mutex> locker(m_partsLock);
            m_failedParts.erase(partNumber);          
            m_queuedParts.insert(partNumber);
        }

        Aws::Set<int> TransferHandle::GetPendingParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_pendingParts;
        }

        void TransferHandle::AddPendingPart(int partNumber)
        {            
            std::lock_guard<std::mutex> locker(m_partsLock);
            m_queuedParts.erase(partNumber);           
            m_pendingParts.insert(partNumber);
        }

        Aws::Set<int> TransferHandle::GetFailedParts() const
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            return m_failedParts;
        }

        void TransferHandle::ChangePartToFailed(int partNumber)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            m_pendingParts.erase(partNumber);  
            m_queuedParts.erase(partNumber);            
            m_failedParts.insert(partNumber);
        }

        void TransferHandle::GetAllPartsTransactional(Aws::Set<int>& queuedParts, Aws::Set<int>& pendingParts,
            Aws::Set<int>& failedParts, Aws::Set<std::pair<int, Aws::String>>& completedParts)
        {
            std::lock_guard<std::mutex> locker(m_partsLock);
            queuedParts = m_queuedParts;
            pendingParts = m_pendingParts;
            failedParts = m_failedParts;
            completedParts = m_completedParts;
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
            if (!IsFinishedStatus(static_cast<TransferStatus>(m_status.load())) || GetPendingParts().size() > 0)
            {
                std::unique_lock<std::mutex> semaphoreLock(m_statusLock);
                m_waitUntilFinishedSignal.wait(semaphoreLock, [this]()
                    { return IsFinishedStatus(static_cast<TransferStatus>(m_status.load())) && GetPendingParts().size() == 0; });
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
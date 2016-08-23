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
            std::lock_guard<std::recursive_mutex> locker(m_completedPartsLock);
            return m_completedParts;
        }

        void TransferHandle::ChangePartToCompleted(int partNumber, const Aws::String& eTag)
        {
            {
                std::lock_guard<std::recursive_mutex> pendingPartsLocker(m_pendingPartsLock);
                if (!m_pendingParts.erase(partNumber))
                {
                    std::lock_guard<std::recursive_mutex> failedPartsLocker(m_failedPartsLock);
                    m_failedParts.erase(partNumber);
                }
            }
            std::lock_guard<std::recursive_mutex> completedPartsLocker(m_completedPartsLock);
            m_completedParts.insert(std::pair<int, Aws::String>(partNumber, eTag));
        }

        Aws::Set<int> TransferHandle::GetPendingParts() const
        {
            std::lock_guard<std::recursive_mutex> pendingPartsLocker(m_pendingPartsLock);
            return m_pendingParts;
        }

        void TransferHandle::AddPendingPart(int partNumber)
        {
            {
                std::lock_guard<std::recursive_mutex> failedPartsLocker(m_failedPartsLock);
                m_failedParts.erase(partNumber);
            }

            std::lock_guard<std::recursive_mutex> pendingPartsLocker(m_pendingPartsLock);
            m_pendingParts.insert(partNumber);
        }

        Aws::Set<int> TransferHandle::GetFailedParts() const
        {
            std::lock_guard<std::recursive_mutex> failedPartsLocker(m_failedPartsLock);
            return m_failedParts;
        }

        void TransferHandle::ChangePartToFailed(int partNumber)
        {
            {
                std::lock_guard<std::recursive_mutex> pendingPartsLocker(m_pendingPartsLock);
                m_pendingParts.erase(partNumber);               
            }
            std::lock_guard<std::recursive_mutex> failedPartsLocker(m_failedPartsLock);
            m_failedParts.insert(partNumber);
        }

        static bool IsFinishedStatus(TransferStatus value)
        {
            return value == TransferStatus::COMPLETED || value == TransferStatus::FAILED || value == TransferStatus::EXACT_OBJECT_ALREADY_EXISTS;
        }

        void TransferHandle::UpdateStatus(TransferStatus value)
        {            
            if (IsFinishedStatus(value))
            {
                std::unique_lock<std::mutex> semaphoreLock(m_statusLock);
                m_waitUntilFinishedSignal.notify_all();
            }

            m_status = value;
        }

        void TransferHandle::WaitUntilFinished() const
        {
            if (!IsFinishedStatus(m_status.load()))
            {
                std::unique_lock<std::mutex> semaphoreLock(m_statusLock);
                m_waitUntilFinishedSignal.wait(semaphoreLock, [&](){return IsFinishedStatus(m_status.load()); });
                semaphoreLock.unlock();
            }
        }

        void TransferHandle::Cancel()
        {
            m_cancel = true;
        }

        bool TransferHandle::Continue()
        {
            return !m_cancel;
        }
    }
}
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

#pragma once

#include <atomic>
#include <aws/core/utils/memory/AWSMemory.h>

namespace Aws
{
    namespace Utils
    {
        static const char* CLASS_TAG = "LocklessQueue";

        /**
         *  A modified linked-list backed queue with lock-free atomic operations. Inspired by the work of Herb Sutter.
         */
        template<typename T>
        class LocklessQueue
        {
        public:
            LocklessQueue() : m_head(nullptr), m_tail(nullptr), m_fence(nullptr)
            {
                m_head = Aws::New<QueueNode>(CLASS_TAG, T());
                m_tail = m_head;
                m_fence = m_head;
            }

            ~LocklessQueue()
            {
                while (m_head)
                {
                    QueueNode* temp = m_head;
                    m_head = temp->next;
                    Aws::Delete(temp);
                }
            }

            /**
             * number of elements in the queue.
             */
            size_t Size() const
            {
                return m_size;
            }

            /**
             * Removes top of the queue from the queue and assigns it to outputValue.
             * Returns true if there was an item to dequeue, false otherwise
             */
            bool Pop(T& outputValue)
            {
                if (m_fence != m_tail)
                {
                    outputValue = m_fence->next->payload;
                    m_fence = m_fence->next;
                    m_size--;
                    return true;
                }

                return false;
            }

            /**
             * Queue element.
             */
            void Push(const T& toQueue)
            {
                m_tail->next = Aws::New<QueueNode>(CLASS_TAG, toQueue);
                m_tail = m_tail->next;
                m_size++;

                TrimFront();
            }

            /**
            * Queue element.
            */
            void Push(T&& toQueue)
            {
                m_tail->next = Aws::New<QueueNode>(CLASS_TAG, std::move(toQueue));
                m_tail = m_tail->next;
                m_size++;

                TrimFront();
            }

        private:
            struct QueueNode
            {
                QueueNode(const T& value) : payload(value), next(nullptr) {}
                QueueNode(T&& value) : payload(std::move(value)), next(nullptr) {}
                T payload;
                QueueNode* next;
            };

            void TrimFront()
            {
                while (m_head != m_fence)
                {
                    QueueNode* temp = m_head;
                    m_head = m_head->next;
                    Aws::Delete(temp);
                }
            }

            QueueNode* m_head;
            std::atomic<QueueNode*> m_tail;
            std::atomic<QueueNode*> m_fence;
            std::atomic<size_t> m_size;
        };
    }
}


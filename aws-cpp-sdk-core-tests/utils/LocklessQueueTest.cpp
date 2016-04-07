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

#include <aws/external/gtest.h>
#include <aws/core/utils/LocklessQueue.h>

using namespace Aws::Utils;

TEST(LocklessQueueTest, TestQueueContract)
{
    LocklessQueue<int> queue;
    int popValue = -1;
    
    ASSERT_EQ(0u, queue.Size());
    ASSERT_FALSE(queue.Pop(popValue));
    queue.Push(1);
    queue.Push(2);
    queue.Push(3);
    ASSERT_EQ(3u, queue.Size());   
    ASSERT_TRUE(queue.Pop(popValue));
    ASSERT_EQ(2u, queue.Size());
    ASSERT_EQ(1, popValue);
    queue.Push(4);
    ASSERT_EQ(3u, queue.Size());
    ASSERT_TRUE(queue.Pop(popValue));
    ASSERT_EQ(2, popValue);
    ASSERT_EQ(2u, queue.Size());
    ASSERT_TRUE(queue.Pop(popValue));
    ASSERT_EQ(3, popValue);
    ASSERT_EQ(1u, queue.Size());
    ASSERT_TRUE(queue.Pop(popValue));
    ASSERT_EQ(4, popValue);
    ASSERT_EQ(0u, queue.Size());
    ASSERT_FALSE(queue.Pop(popValue));
}
/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/AWSMemory.h>

const char ALLOCATION_TAG[] = "AWSMemoryTestTag";

struct A { virtual ~A() = default; };
struct B { virtual ~B() = default; };
struct C : A, B { };

#if !defined(_MSC_VER) || defined(_CPPRTTI)
TEST(AWSMemory, DeleteViaFirstInterface)
{
    A* a = Aws::New<C>(ALLOCATION_TAG);
    Aws::Delete(a);
}

TEST(AWSMemory, DeleteViaSecondInterface)
{
    C* c = Aws::New<C>(ALLOCATION_TAG);
    B* b = c;
    A* a = c;
    ASSERT_EQ(c, static_cast<void*>(a));
    ASSERT_NE(c, static_cast<void*>(b));
    Aws::Delete(b);
}
#endif

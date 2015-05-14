/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>

using namespace Aws::Utils;

Aws::String testEventFiresAndPassesArgsSenderName, testEventFiresAndPassesArgsTestArg,
    testEventFiresAndPassesArgsSenderName2, testEventFiresAndPassesArgsTestArg2;

void TestFunction(const Aws::String* senderName, const Aws::String& testArg)
{
    testEventFiresAndPassesArgsSenderName = *senderName;
    testEventFiresAndPassesArgsTestArg = testArg;
}

void TestFunction2(const Aws::String* senderName, const Aws::String& testArg)
{
    testEventFiresAndPassesArgsSenderName2 = *senderName;
    testEventFiresAndPassesArgsSenderName2 += "Function2";
    testEventFiresAndPassesArgsTestArg2 = testArg;
    testEventFiresAndPassesArgsTestArg2 += "Function2";
}

TEST(EventTest, TestEventFiresAndPassesArgs)
{
    Event<Aws::String, const Aws::String&> event;
    event += &TestFunction;
    event += &TestFunction2;
    Aws::String sender = "TestEventFiresAndPassesArgs";
    Aws::String arg = "boo!";
    event.Invoke(&sender, arg);
    ASSERT_EQ(sender, testEventFiresAndPassesArgsSenderName);
    ASSERT_EQ(arg, testEventFiresAndPassesArgsTestArg);
    ASSERT_EQ(sender + "Function2", testEventFiresAndPassesArgsSenderName2);
    ASSERT_EQ(arg + "Function2", testEventFiresAndPassesArgsTestArg2);
}

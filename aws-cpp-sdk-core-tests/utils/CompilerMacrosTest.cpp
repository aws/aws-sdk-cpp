/*
  * Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/Core_EXPORTS.h>
#include <aws/external/gtest.h>

AWS_DEPRECATED("Test a deprecated function")
static bool foo()
{
    return true;
}

TEST(CompilerMacrosTest, TestCompilerMacro)
{
    AWS_SUPPRESS_DEPRECATION(
        bool ret = foo();
    )
    ASSERT_TRUE(ret);

#ifdef _MSC_VER
    AWS_SUPPRESS_WARNING_PUSH(4201)
#else
    AWS_SUPPRESS_WARNING_PUSH("-Wpedantic")
#endif
    struct Test
    {
        union {
            struct //compiler will give anonymous struct warning if warning is not suppressed
            {
                int a;
                bool b;
            };
            char c[16];
        };
    };
    AWS_SUPPRESS_WARNING_POP
}

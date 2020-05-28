/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/StringUtils.h>
#include <aws/core/Version.h>

using namespace Aws::Version;

TEST(VersionTest, TestMajorMinorPatch)
{
    Aws::String major = Aws::Utils::StringUtils::to_string(GetVersionMajor());
    Aws::String minor = Aws::Utils::StringUtils::to_string(GetVersionMinor());
    Aws::String patch = Aws::Utils::StringUtils::to_string(GetVersionPatch());
    Aws::String versionString = GetVersionString();
    ASSERT_TRUE(versionString.find(major) != Aws::String::npos);
    ASSERT_TRUE(versionString.find(minor) != Aws::String::npos);
    ASSERT_TRUE(versionString.find(patch) != Aws::String::npos);
}

TEST(VersionTest, TestCompilerVersionString)
{
    Aws::String compiler = GetCompilerVersionString();
#if defined(_MSC_VER)
    const auto expected = "MSVC";
#elif defined(__clang__)
    const auto expected = "Clang";
#elif defined(__GNUC__)
    const auto expected = "GCC";
#else
    const auto expected = "Unknown";
#endif
    ASSERT_EQ(0u, compiler.find(expected));
}

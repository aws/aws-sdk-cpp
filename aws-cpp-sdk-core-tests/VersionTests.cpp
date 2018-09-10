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
    auto major = GetVersionMajor();
    auto minor = GetVersionMinor();
    auto patch = GetVersionPatch();
    Aws::String version;
    version += Aws::Utils::StringUtils::to_string(major);
    version += ".";
    version += Aws::Utils::StringUtils::to_string(minor);
    version += ".";
    version += Aws::Utils::StringUtils::to_string(patch);
    auto versionString = GetVersionString();
    ASSERT_STREQ(versionString, version.c_str());
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

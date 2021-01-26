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

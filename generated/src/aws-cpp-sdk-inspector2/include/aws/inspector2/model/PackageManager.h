/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class PackageManager
  {
    NOT_SET,
    BUNDLER,
    CARGO,
    COMPOSER,
    NPM,
    NUGET,
    PIPENV,
    POETRY,
    YARN,
    GOBINARY,
    GOMOD,
    JAR,
    OS,
    PIP,
    PYTHONPKG,
    NODEPKG,
    POM,
    GEMSPEC
  };

namespace PackageManagerMapper
{
AWS_INSPECTOR2_API PackageManager GetPackageManagerForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForPackageManager(PackageManager value);
} // namespace PackageManagerMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

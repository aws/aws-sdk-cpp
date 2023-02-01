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
  enum class PackageType
  {
    NOT_SET,
    IMAGE,
    ZIP
  };

namespace PackageTypeMapper
{
AWS_INSPECTOR2_API PackageType GetPackageTypeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForPackageType(PackageType value);
} // namespace PackageTypeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

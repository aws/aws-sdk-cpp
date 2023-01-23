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
  enum class PackageSortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL
  };

namespace PackageSortByMapper
{
AWS_INSPECTOR2_API PackageSortBy GetPackageSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForPackageSortBy(PackageSortBy value);
} // namespace PackageSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

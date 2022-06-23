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
  enum class AmiSortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL,
    AFFECTED_INSTANCES
  };

namespace AmiSortByMapper
{
AWS_INSPECTOR2_API AmiSortBy GetAmiSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForAmiSortBy(AmiSortBy value);
} // namespace AmiSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

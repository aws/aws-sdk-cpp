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
  enum class TitleSortBy
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    ALL
  };

namespace TitleSortByMapper
{
AWS_INSPECTOR2_API TitleSortBy GetTitleSortByForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForTitleSortBy(TitleSortBy value);
} // namespace TitleSortByMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws

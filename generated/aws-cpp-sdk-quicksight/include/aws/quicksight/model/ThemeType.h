/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class ThemeType
  {
    NOT_SET,
    QUICKSIGHT,
    CUSTOM,
    ALL
  };

namespace ThemeTypeMapper
{
AWS_QUICKSIGHT_API ThemeType GetThemeTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForThemeType(ThemeType value);
} // namespace ThemeTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

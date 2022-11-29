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
  enum class TooltipTitleType
  {
    NOT_SET,
    NONE,
    PRIMARY_VALUE
  };

namespace TooltipTitleTypeMapper
{
AWS_QUICKSIGHT_API TooltipTitleType GetTooltipTitleTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTooltipTitleType(TooltipTitleType value);
} // namespace TooltipTitleTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

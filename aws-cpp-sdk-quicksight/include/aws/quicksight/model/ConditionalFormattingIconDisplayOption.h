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
  enum class ConditionalFormattingIconDisplayOption
  {
    NOT_SET,
    ICON_ONLY
  };

namespace ConditionalFormattingIconDisplayOptionMapper
{
AWS_QUICKSIGHT_API ConditionalFormattingIconDisplayOption GetConditionalFormattingIconDisplayOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForConditionalFormattingIconDisplayOption(ConditionalFormattingIconDisplayOption value);
} // namespace ConditionalFormattingIconDisplayOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

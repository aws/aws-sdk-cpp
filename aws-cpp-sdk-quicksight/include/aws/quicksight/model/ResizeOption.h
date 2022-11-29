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
  enum class ResizeOption
  {
    NOT_SET,
    FIXED,
    RESPONSIVE
  };

namespace ResizeOptionMapper
{
AWS_QUICKSIGHT_API ResizeOption GetResizeOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForResizeOption(ResizeOption value);
} // namespace ResizeOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

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
  enum class VerticalTextAlignment
  {
    NOT_SET,
    TOP,
    MIDDLE,
    BOTTOM
  };

namespace VerticalTextAlignmentMapper
{
AWS_QUICKSIGHT_API VerticalTextAlignment GetVerticalTextAlignmentForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVerticalTextAlignment(VerticalTextAlignment value);
} // namespace VerticalTextAlignmentMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

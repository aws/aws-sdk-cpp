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
  enum class ColorFillType
  {
    NOT_SET,
    DISCRETE,
    GRADIENT
  };

namespace ColorFillTypeMapper
{
AWS_QUICKSIGHT_API ColorFillType GetColorFillTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColorFillType(ColorFillType value);
} // namespace ColorFillTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

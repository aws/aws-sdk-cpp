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
  enum class NumberScale
  {
    NOT_SET,
    NONE,
    AUTO,
    THOUSANDS,
    MILLIONS,
    BILLIONS,
    TRILLIONS
  };

namespace NumberScaleMapper
{
AWS_QUICKSIGHT_API NumberScale GetNumberScaleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNumberScale(NumberScale value);
} // namespace NumberScaleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

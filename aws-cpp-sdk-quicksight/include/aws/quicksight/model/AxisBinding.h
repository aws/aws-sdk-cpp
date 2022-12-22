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
  enum class AxisBinding
  {
    NOT_SET,
    PRIMARY_YAXIS,
    SECONDARY_YAXIS
  };

namespace AxisBindingMapper
{
AWS_QUICKSIGHT_API AxisBinding GetAxisBindingForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAxisBinding(AxisBinding value);
} // namespace AxisBindingMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

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
  enum class MaximumMinimumComputationType
  {
    NOT_SET,
    MAXIMUM,
    MINIMUM
  };

namespace MaximumMinimumComputationTypeMapper
{
AWS_QUICKSIGHT_API MaximumMinimumComputationType GetMaximumMinimumComputationTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForMaximumMinimumComputationType(MaximumMinimumComputationType value);
} // namespace MaximumMinimumComputationTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

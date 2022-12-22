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
  enum class TargetVisualOptions
  {
    NOT_SET,
    ALL_VISUALS
  };

namespace TargetVisualOptionsMapper
{
AWS_QUICKSIGHT_API TargetVisualOptions GetTargetVisualOptionsForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTargetVisualOptions(TargetVisualOptions value);
} // namespace TargetVisualOptionsMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws

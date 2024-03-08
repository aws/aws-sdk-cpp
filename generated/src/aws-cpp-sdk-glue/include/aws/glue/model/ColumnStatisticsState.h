/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ColumnStatisticsState
  {
    NOT_SET,
    STARTING,
    RUNNING,
    SUCCEEDED,
    FAILED,
    STOPPED
  };

namespace ColumnStatisticsStateMapper
{
AWS_GLUE_API ColumnStatisticsState GetColumnStatisticsStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForColumnStatisticsState(ColumnStatisticsState value);
} // namespace ColumnStatisticsStateMapper
} // namespace Model
} // namespace Glue
} // namespace Aws

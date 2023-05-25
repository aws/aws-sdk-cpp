/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class MonitorDimension
  {
    NOT_SET,
    SERVICE
  };

namespace MonitorDimensionMapper
{
AWS_COSTEXPLORER_API MonitorDimension GetMonitorDimensionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForMonitorDimension(MonitorDimension value);
} // namespace MonitorDimensionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws

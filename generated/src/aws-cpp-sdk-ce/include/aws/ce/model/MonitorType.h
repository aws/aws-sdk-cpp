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
  enum class MonitorType
  {
    NOT_SET,
    DIMENSIONAL,
    CUSTOM
  };

namespace MonitorTypeMapper
{
AWS_COSTEXPLORER_API MonitorType GetMonitorTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForMonitorType(MonitorType value);
} // namespace MonitorTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws

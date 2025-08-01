/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class EcsCapacityMonitoringApproach
  {
    NOT_SET,
    sampledMaxInLast24Hours,
    containerInsightsMaxInLast24Hours
  };

namespace EcsCapacityMonitoringApproachMapper
{
AWS_ARCREGIONSWITCH_API EcsCapacityMonitoringApproach GetEcsCapacityMonitoringApproachForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForEcsCapacityMonitoringApproach(EcsCapacityMonitoringApproach value);
} // namespace EcsCapacityMonitoringApproachMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

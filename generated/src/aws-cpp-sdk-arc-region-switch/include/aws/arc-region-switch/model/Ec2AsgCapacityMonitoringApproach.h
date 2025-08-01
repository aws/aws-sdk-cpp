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
  enum class Ec2AsgCapacityMonitoringApproach
  {
    NOT_SET,
    sampledMaxInLast24Hours,
    autoscalingMaxInLast24Hours
  };

namespace Ec2AsgCapacityMonitoringApproachMapper
{
AWS_ARCREGIONSWITCH_API Ec2AsgCapacityMonitoringApproach GetEc2AsgCapacityMonitoringApproachForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForEc2AsgCapacityMonitoringApproach(Ec2AsgCapacityMonitoringApproach value);
} // namespace Ec2AsgCapacityMonitoringApproachMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

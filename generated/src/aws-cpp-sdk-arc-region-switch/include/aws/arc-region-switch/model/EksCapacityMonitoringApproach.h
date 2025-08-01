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
  enum class EksCapacityMonitoringApproach
  {
    NOT_SET,
    sampledMaxInLast24Hours
  };

namespace EksCapacityMonitoringApproachMapper
{
AWS_ARCREGIONSWITCH_API EksCapacityMonitoringApproach GetEksCapacityMonitoringApproachForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForEksCapacityMonitoringApproach(EksCapacityMonitoringApproach value);
} // namespace EksCapacityMonitoringApproachMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

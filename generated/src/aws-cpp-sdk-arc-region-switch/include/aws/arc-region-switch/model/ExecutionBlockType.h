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
  enum class ExecutionBlockType
  {
    NOT_SET,
    CustomActionLambda,
    ManualApproval,
    AuroraGlobalDatabase,
    EC2AutoScaling,
    ARCRoutingControl,
    ARCRegionSwitchPlan,
    Parallel,
    ECSServiceScaling,
    EKSResourceScaling,
    Route53HealthCheck
  };

namespace ExecutionBlockTypeMapper
{
AWS_ARCREGIONSWITCH_API ExecutionBlockType GetExecutionBlockTypeForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForExecutionBlockType(ExecutionBlockType value);
} // namespace ExecutionBlockTypeMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

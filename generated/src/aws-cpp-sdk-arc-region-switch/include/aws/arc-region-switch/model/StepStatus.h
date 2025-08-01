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
  enum class StepStatus
  {
    NOT_SET,
    notStarted,
    running,
    failed,
    completed,
    canceled,
    skipped,
    pendingApproval
  };

namespace StepStatusMapper
{
AWS_ARCREGIONSWITCH_API StepStatus GetStepStatusForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForStepStatus(StepStatus value);
} // namespace StepStatusMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

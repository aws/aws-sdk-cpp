/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
enum class WaitELBTargetGroupHealthy { NOT_SET, enabled, disabled };

namespace WaitELBTargetGroupHealthyMapper {
AWS_ARCREGIONSWITCH_API WaitELBTargetGroupHealthy GetWaitELBTargetGroupHealthyForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForWaitELBTargetGroupHealthy(WaitELBTargetGroupHealthy value);
}  // namespace WaitELBTargetGroupHealthyMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws

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
enum class Route53HealthCheckStatus { NOT_SET, healthy, unhealthy, unknown };

namespace Route53HealthCheckStatusMapper {
AWS_ARCREGIONSWITCH_API Route53HealthCheckStatus GetRoute53HealthCheckStatusForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForRoute53HealthCheckStatus(Route53HealthCheckStatus value);
}  // namespace Route53HealthCheckStatusMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws

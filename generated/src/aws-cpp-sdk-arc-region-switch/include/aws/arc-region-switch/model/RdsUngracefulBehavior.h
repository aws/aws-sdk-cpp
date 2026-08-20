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
enum class RdsUngracefulBehavior { NOT_SET, promoteReadReplica };

namespace RdsUngracefulBehaviorMapper {
AWS_ARCREGIONSWITCH_API RdsUngracefulBehavior GetRdsUngracefulBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForRdsUngracefulBehavior(RdsUngracefulBehavior value);
}  // namespace RdsUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws

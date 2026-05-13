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
enum class LambdaEventSourceMappingUngracefulBehavior { NOT_SET, skip };

namespace LambdaEventSourceMappingUngracefulBehaviorMapper {
AWS_ARCREGIONSWITCH_API LambdaEventSourceMappingUngracefulBehavior
GetLambdaEventSourceMappingUngracefulBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForLambdaEventSourceMappingUngracefulBehavior(LambdaEventSourceMappingUngracefulBehavior value);
}  // namespace LambdaEventSourceMappingUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws

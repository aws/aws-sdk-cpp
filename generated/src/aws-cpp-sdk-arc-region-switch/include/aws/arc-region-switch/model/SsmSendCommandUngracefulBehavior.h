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
enum class SsmSendCommandUngracefulBehavior { NOT_SET, skip };

namespace SsmSendCommandUngracefulBehaviorMapper {
AWS_ARCREGIONSWITCH_API SsmSendCommandUngracefulBehavior GetSsmSendCommandUngracefulBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForSsmSendCommandUngracefulBehavior(SsmSendCommandUngracefulBehavior value);
}  // namespace SsmSendCommandUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws

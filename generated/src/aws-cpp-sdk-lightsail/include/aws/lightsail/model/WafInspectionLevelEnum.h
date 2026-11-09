/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class WafInspectionLevelEnum { NOT_SET, COMMON, TARGETED };

namespace WafInspectionLevelEnumMapper {
AWS_LIGHTSAIL_API WafInspectionLevelEnum GetWafInspectionLevelEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForWafInspectionLevelEnum(WafInspectionLevelEnum value);
}  // namespace WafInspectionLevelEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

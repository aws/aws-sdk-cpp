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
enum class WafPayloadTypeEnum { NOT_SET, JSON, FORM_ENCODED };

namespace WafPayloadTypeEnumMapper {
AWS_LIGHTSAIL_API WafPayloadTypeEnum GetWafPayloadTypeEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForWafPayloadTypeEnum(WafPayloadTypeEnum value);
}  // namespace WafPayloadTypeEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

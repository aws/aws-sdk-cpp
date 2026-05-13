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
enum class OriginIpAddressTypeEnum { NOT_SET, ipv4, ipv6, dualstack };

namespace OriginIpAddressTypeEnumMapper {
AWS_LIGHTSAIL_API OriginIpAddressTypeEnum GetOriginIpAddressTypeEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForOriginIpAddressTypeEnum(OriginIpAddressTypeEnum value);
}  // namespace OriginIpAddressTypeEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

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
enum class LightsailDistributionSubdomainStateEnum { NOT_SET, Creating, Attaching, Attached, Error };

namespace LightsailDistributionSubdomainStateEnumMapper {
AWS_LIGHTSAIL_API LightsailDistributionSubdomainStateEnum GetLightsailDistributionSubdomainStateEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLightsailDistributionSubdomainStateEnum(LightsailDistributionSubdomainStateEnum value);
}  // namespace LightsailDistributionSubdomainStateEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

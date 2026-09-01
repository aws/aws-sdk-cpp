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
enum class ProfileType { NOT_SET, Lightsailor, LightsailPartner };

namespace ProfileTypeMapper {
AWS_LIGHTSAIL_API ProfileType GetProfileTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForProfileType(ProfileType value);
}  // namespace ProfileTypeMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class EphemerisType { NOT_SET, TLE, OEM, AZ_EL, SERVICE_MANAGED };

namespace EphemerisTypeMapper {
AWS_GROUNDSTATION_API EphemerisType GetEphemerisTypeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForEphemerisType(EphemerisType value);
}  // namespace EphemerisTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws

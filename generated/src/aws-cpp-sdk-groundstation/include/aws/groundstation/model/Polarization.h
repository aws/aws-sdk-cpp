﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class Polarization { NOT_SET, RIGHT_HAND, LEFT_HAND, NONE };

namespace PolarizationMapper {
AWS_GROUNDSTATION_API Polarization GetPolarizationForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForPolarization(Polarization value);
}  // namespace PolarizationMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws

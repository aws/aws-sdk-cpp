/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class CapacityReservationPreference { NOT_SET, RESERVATIONS_ONLY, RESERVATIONS_FIRST, RESERVATIONS_EXCLUDED };

namespace CapacityReservationPreferenceMapper {
AWS_ECS_API CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference value);
}  // namespace CapacityReservationPreferenceMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

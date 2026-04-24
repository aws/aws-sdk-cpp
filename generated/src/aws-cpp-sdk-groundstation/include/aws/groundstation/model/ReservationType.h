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
enum class ReservationType { NOT_SET, MAINTENANCE, CONTACT };

namespace ReservationTypeMapper {
AWS_GROUNDSTATION_API ReservationType GetReservationTypeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForReservationType(ReservationType value);
}  // namespace ReservationTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/CapacityReservationPreference.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace CapacityReservationPreferenceMapper {

static const int RESERVATIONS_ONLY_HASH = HashingUtils::HashString("RESERVATIONS_ONLY");
static const int RESERVATIONS_FIRST_HASH = HashingUtils::HashString("RESERVATIONS_FIRST");
static const int RESERVATIONS_EXCLUDED_HASH = HashingUtils::HashString("RESERVATIONS_EXCLUDED");

CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESERVATIONS_ONLY_HASH) {
    return CapacityReservationPreference::RESERVATIONS_ONLY;
  } else if (hashCode == RESERVATIONS_FIRST_HASH) {
    return CapacityReservationPreference::RESERVATIONS_FIRST;
  } else if (hashCode == RESERVATIONS_EXCLUDED_HASH) {
    return CapacityReservationPreference::RESERVATIONS_EXCLUDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationPreference>(hashCode);
  }

  return CapacityReservationPreference::NOT_SET;
}

Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference enumValue) {
  switch (enumValue) {
    case CapacityReservationPreference::NOT_SET:
      return {};
    case CapacityReservationPreference::RESERVATIONS_ONLY:
      return "RESERVATIONS_ONLY";
    case CapacityReservationPreference::RESERVATIONS_FIRST:
      return "RESERVATIONS_FIRST";
    case CapacityReservationPreference::RESERVATIONS_EXCLUDED:
      return "RESERVATIONS_EXCLUDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationPreferenceMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

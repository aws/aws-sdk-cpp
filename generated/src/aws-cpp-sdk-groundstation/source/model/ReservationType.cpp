/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/ReservationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace ReservationTypeMapper {

static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");
static const int CONTACT_HASH = HashingUtils::HashString("CONTACT");

ReservationType GetReservationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAINTENANCE_HASH) {
    return ReservationType::MAINTENANCE;
  } else if (hashCode == CONTACT_HASH) {
    return ReservationType::CONTACT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReservationType>(hashCode);
  }

  return ReservationType::NOT_SET;
}

Aws::String GetNameForReservationType(ReservationType enumValue) {
  switch (enumValue) {
    case ReservationType::NOT_SET:
      return {};
    case ReservationType::MAINTENANCE:
      return "MAINTENANCE";
    case ReservationType::CONTACT:
      return "CONTACT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReservationTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws

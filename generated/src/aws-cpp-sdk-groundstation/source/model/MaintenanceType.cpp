/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/MaintenanceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace MaintenanceTypeMapper {

static const int PLANNED_HASH = HashingUtils::HashString("PLANNED");
static const int UNPLANNED_HASH = HashingUtils::HashString("UNPLANNED");

MaintenanceType GetMaintenanceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PLANNED_HASH) {
    return MaintenanceType::PLANNED;
  } else if (hashCode == UNPLANNED_HASH) {
    return MaintenanceType::UNPLANNED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaintenanceType>(hashCode);
  }

  return MaintenanceType::NOT_SET;
}

Aws::String GetNameForMaintenanceType(MaintenanceType enumValue) {
  switch (enumValue) {
    case MaintenanceType::NOT_SET:
      return {};
    case MaintenanceType::PLANNED:
      return "PLANNED";
    case MaintenanceType::UNPLANNED:
      return "UNPLANNED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaintenanceTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws

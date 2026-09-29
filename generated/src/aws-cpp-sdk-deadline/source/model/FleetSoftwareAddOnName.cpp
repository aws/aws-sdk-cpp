/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/FleetSoftwareAddOnName.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace FleetSoftwareAddOnNameMapper {

static const int docker_HASH = HashingUtils::HashString("docker");

FleetSoftwareAddOnName GetFleetSoftwareAddOnNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == docker_HASH) {
    return FleetSoftwareAddOnName::docker;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FleetSoftwareAddOnName>(hashCode);
  }

  return FleetSoftwareAddOnName::NOT_SET;
}

Aws::String GetNameForFleetSoftwareAddOnName(FleetSoftwareAddOnName enumValue) {
  switch (enumValue) {
    case FleetSoftwareAddOnName::NOT_SET:
      return {};
    case FleetSoftwareAddOnName::docker:
      return "docker";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FleetSoftwareAddOnNameMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws

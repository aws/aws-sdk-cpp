/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ManagedInstancesMonitoringOptions.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ManagedInstancesMonitoringOptionsMapper {

static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int DETAILED_HASH = HashingUtils::HashString("DETAILED");

ManagedInstancesMonitoringOptions GetManagedInstancesMonitoringOptionsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASIC_HASH) {
    return ManagedInstancesMonitoringOptions::BASIC;
  } else if (hashCode == DETAILED_HASH) {
    return ManagedInstancesMonitoringOptions::DETAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedInstancesMonitoringOptions>(hashCode);
  }

  return ManagedInstancesMonitoringOptions::NOT_SET;
}

Aws::String GetNameForManagedInstancesMonitoringOptions(ManagedInstancesMonitoringOptions enumValue) {
  switch (enumValue) {
    case ManagedInstancesMonitoringOptions::NOT_SET:
      return {};
    case ManagedInstancesMonitoringOptions::BASIC:
      return "BASIC";
    case ManagedInstancesMonitoringOptions::DETAILED:
      return "DETAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedInstancesMonitoringOptionsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

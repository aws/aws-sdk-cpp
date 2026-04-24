/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/DaemonTaskDefinitionRevisionFilter.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace DaemonTaskDefinitionRevisionFilterMapper {

static const int LAST_REGISTERED_HASH = HashingUtils::HashString("LAST_REGISTERED");

DaemonTaskDefinitionRevisionFilter GetDaemonTaskDefinitionRevisionFilterForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LAST_REGISTERED_HASH) {
    return DaemonTaskDefinitionRevisionFilter::LAST_REGISTERED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DaemonTaskDefinitionRevisionFilter>(hashCode);
  }

  return DaemonTaskDefinitionRevisionFilter::NOT_SET;
}

Aws::String GetNameForDaemonTaskDefinitionRevisionFilter(DaemonTaskDefinitionRevisionFilter enumValue) {
  switch (enumValue) {
    case DaemonTaskDefinitionRevisionFilter::NOT_SET:
      return {};
    case DaemonTaskDefinitionRevisionFilter::LAST_REGISTERED:
      return "LAST_REGISTERED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DaemonTaskDefinitionRevisionFilterMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

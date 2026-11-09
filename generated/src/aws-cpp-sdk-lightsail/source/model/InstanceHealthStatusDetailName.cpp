/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/InstanceHealthStatusDetailName.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace InstanceHealthStatusDetailNameMapper {

static const int reachability_HASH = HashingUtils::HashString("reachability");

InstanceHealthStatusDetailName GetInstanceHealthStatusDetailNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == reachability_HASH) {
    return InstanceHealthStatusDetailName::reachability;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceHealthStatusDetailName>(hashCode);
  }

  return InstanceHealthStatusDetailName::NOT_SET;
}

Aws::String GetNameForInstanceHealthStatusDetailName(InstanceHealthStatusDetailName enumValue) {
  switch (enumValue) {
    case InstanceHealthStatusDetailName::NOT_SET:
      return {};
    case InstanceHealthStatusDetailName::reachability:
      return "reachability";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceHealthStatusDetailNameMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/InstanceHealthStatusDetailValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace InstanceHealthStatusDetailValueMapper {

static const int passed_HASH = HashingUtils::HashString("passed");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
static const int initializing_HASH = HashingUtils::HashString("initializing");

InstanceHealthStatusDetailValue GetInstanceHealthStatusDetailValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == passed_HASH) {
    return InstanceHealthStatusDetailValue::passed;
  } else if (hashCode == failed_HASH) {
    return InstanceHealthStatusDetailValue::failed;
  } else if (hashCode == insufficient_data_HASH) {
    return InstanceHealthStatusDetailValue::insufficient_data;
  } else if (hashCode == initializing_HASH) {
    return InstanceHealthStatusDetailValue::initializing;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceHealthStatusDetailValue>(hashCode);
  }

  return InstanceHealthStatusDetailValue::NOT_SET;
}

Aws::String GetNameForInstanceHealthStatusDetailValue(InstanceHealthStatusDetailValue enumValue) {
  switch (enumValue) {
    case InstanceHealthStatusDetailValue::NOT_SET:
      return {};
    case InstanceHealthStatusDetailValue::passed:
      return "passed";
    case InstanceHealthStatusDetailValue::failed:
      return "failed";
    case InstanceHealthStatusDetailValue::insufficient_data:
      return "insufficient-data";
    case InstanceHealthStatusDetailValue::initializing:
      return "initializing";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceHealthStatusDetailValueMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

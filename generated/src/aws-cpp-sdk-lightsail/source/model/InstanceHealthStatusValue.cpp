/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/InstanceHealthStatusValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace InstanceHealthStatusValueMapper {

static const int ok_HASH = HashingUtils::HashString("ok");
static const int impaired_HASH = HashingUtils::HashString("impaired");
static const int initializing_HASH = HashingUtils::HashString("initializing");
static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
static const int not_applicable_HASH = HashingUtils::HashString("not-applicable");

InstanceHealthStatusValue GetInstanceHealthStatusValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ok_HASH) {
    return InstanceHealthStatusValue::ok;
  } else if (hashCode == impaired_HASH) {
    return InstanceHealthStatusValue::impaired;
  } else if (hashCode == initializing_HASH) {
    return InstanceHealthStatusValue::initializing;
  } else if (hashCode == insufficient_data_HASH) {
    return InstanceHealthStatusValue::insufficient_data;
  } else if (hashCode == not_applicable_HASH) {
    return InstanceHealthStatusValue::not_applicable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstanceHealthStatusValue>(hashCode);
  }

  return InstanceHealthStatusValue::NOT_SET;
}

Aws::String GetNameForInstanceHealthStatusValue(InstanceHealthStatusValue enumValue) {
  switch (enumValue) {
    case InstanceHealthStatusValue::NOT_SET:
      return {};
    case InstanceHealthStatusValue::ok:
      return "ok";
    case InstanceHealthStatusValue::impaired:
      return "impaired";
    case InstanceHealthStatusValue::initializing:
      return "initializing";
    case InstanceHealthStatusValue::insufficient_data:
      return "insufficient-data";
    case InstanceHealthStatusValue::not_applicable:
      return "not-applicable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstanceHealthStatusValueMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/CapacityUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace CapacityUnitMapper {

static const int vcpus_HASH = HashingUtils::HashString("vcpus");
static const int instances_HASH = HashingUtils::HashString("instances");

CapacityUnit GetCapacityUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == vcpus_HASH) {
    return CapacityUnit::vcpus;
  } else if (hashCode == instances_HASH) {
    return CapacityUnit::instances;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityUnit>(hashCode);
  }

  return CapacityUnit::NOT_SET;
}

Aws::String GetNameForCapacityUnit(CapacityUnit enumValue) {
  switch (enumValue) {
    case CapacityUnit::NOT_SET:
      return {};
    case CapacityUnit::vcpus:
      return "vcpus";
    case CapacityUnit::instances:
      return "instances";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityUnitMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws

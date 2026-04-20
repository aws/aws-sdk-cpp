/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/model/CheckType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {
namespace CheckTypeMapper {

static const int KEY_REUSE_HASH = HashingUtils::HashString("KEY_REUSE");
static const int KEY_COVERAGE_HASH = HashingUtils::HashString("KEY_COVERAGE");
static const int REACHABILITY_HASH = HashingUtils::HashString("REACHABILITY");
static const int HOST_COUNT_HASH = HashingUtils::HashString("HOST_COUNT");
static const int VCENTER_REACHABILITY_HASH = HashingUtils::HashString("VCENTER_REACHABILITY");
static const int VCENTER_VM_SYNC_HASH = HashingUtils::HashString("VCENTER_VM_SYNC");
static const int VCENTER_VM_EVENT_HASH = HashingUtils::HashString("VCENTER_VM_EVENT");

CheckType GetCheckTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KEY_REUSE_HASH) {
    return CheckType::KEY_REUSE;
  } else if (hashCode == KEY_COVERAGE_HASH) {
    return CheckType::KEY_COVERAGE;
  } else if (hashCode == REACHABILITY_HASH) {
    return CheckType::REACHABILITY;
  } else if (hashCode == HOST_COUNT_HASH) {
    return CheckType::HOST_COUNT;
  } else if (hashCode == VCENTER_REACHABILITY_HASH) {
    return CheckType::VCENTER_REACHABILITY;
  } else if (hashCode == VCENTER_VM_SYNC_HASH) {
    return CheckType::VCENTER_VM_SYNC;
  } else if (hashCode == VCENTER_VM_EVENT_HASH) {
    return CheckType::VCENTER_VM_EVENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CheckType>(hashCode);
  }

  return CheckType::NOT_SET;
}

Aws::String GetNameForCheckType(CheckType enumValue) {
  switch (enumValue) {
    case CheckType::NOT_SET:
      return {};
    case CheckType::KEY_REUSE:
      return "KEY_REUSE";
    case CheckType::KEY_COVERAGE:
      return "KEY_COVERAGE";
    case CheckType::REACHABILITY:
      return "REACHABILITY";
    case CheckType::HOST_COUNT:
      return "HOST_COUNT";
    case CheckType::VCENTER_REACHABILITY:
      return "VCENTER_REACHABILITY";
    case CheckType::VCENTER_VM_SYNC:
      return "VCENTER_VM_SYNC";
    case CheckType::VCENTER_VM_EVENT:
      return "VCENTER_VM_EVENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CheckTypeMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws

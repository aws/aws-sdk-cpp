/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/VmInstanceSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace VmInstanceSortByMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int HIGH_HASH = HashingUtils::HashString("HIGH");
static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int NETWORK_FINDINGS_HASH = HashingUtils::HashString("NETWORK_FINDINGS");

VmInstanceSortBy GetVmInstanceSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return VmInstanceSortBy::CRITICAL;
  } else if (hashCode == HIGH_HASH) {
    return VmInstanceSortBy::HIGH;
  } else if (hashCode == ALL_HASH) {
    return VmInstanceSortBy::ALL;
  } else if (hashCode == NETWORK_FINDINGS_HASH) {
    return VmInstanceSortBy::NETWORK_FINDINGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VmInstanceSortBy>(hashCode);
  }

  return VmInstanceSortBy::NOT_SET;
}

Aws::String GetNameForVmInstanceSortBy(VmInstanceSortBy enumValue) {
  switch (enumValue) {
    case VmInstanceSortBy::NOT_SET:
      return {};
    case VmInstanceSortBy::CRITICAL:
      return "CRITICAL";
    case VmInstanceSortBy::HIGH:
      return "HIGH";
    case VmInstanceSortBy::ALL:
      return "ALL";
    case VmInstanceSortBy::NETWORK_FINDINGS:
      return "NETWORK_FINDINGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VmInstanceSortByMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws

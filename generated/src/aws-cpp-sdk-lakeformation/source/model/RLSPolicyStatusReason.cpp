/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/model/RLSPolicyStatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {
namespace RLSPolicyStatusReasonMapper {

static const int REFERENCED_UDF_DELETED_HASH = HashingUtils::HashString("REFERENCED_UDF_DELETED");
static const int REFERENCED_LOOKUP_TABLE_DELETED_HASH = HashingUtils::HashString("REFERENCED_LOOKUP_TABLE_DELETED");

RLSPolicyStatusReason GetRLSPolicyStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REFERENCED_UDF_DELETED_HASH) {
    return RLSPolicyStatusReason::REFERENCED_UDF_DELETED;
  } else if (hashCode == REFERENCED_LOOKUP_TABLE_DELETED_HASH) {
    return RLSPolicyStatusReason::REFERENCED_LOOKUP_TABLE_DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RLSPolicyStatusReason>(hashCode);
  }

  return RLSPolicyStatusReason::NOT_SET;
}

Aws::String GetNameForRLSPolicyStatusReason(RLSPolicyStatusReason enumValue) {
  switch (enumValue) {
    case RLSPolicyStatusReason::NOT_SET:
      return {};
    case RLSPolicyStatusReason::REFERENCED_UDF_DELETED:
      return "REFERENCED_UDF_DELETED";
    case RLSPolicyStatusReason::REFERENCED_LOOKUP_TABLE_DELETED:
      return "REFERENCED_LOOKUP_TABLE_DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RLSPolicyStatusReasonMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws

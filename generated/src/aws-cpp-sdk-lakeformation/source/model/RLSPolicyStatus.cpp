/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/model/RLSPolicyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {
namespace RLSPolicyStatusMapper {

static const int VALID_HASH = HashingUtils::HashString("VALID");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");

RLSPolicyStatus GetRLSPolicyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALID_HASH) {
    return RLSPolicyStatus::VALID;
  } else if (hashCode == INVALID_HASH) {
    return RLSPolicyStatus::INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RLSPolicyStatus>(hashCode);
  }

  return RLSPolicyStatus::NOT_SET;
}

Aws::String GetNameForRLSPolicyStatus(RLSPolicyStatus enumValue) {
  switch (enumValue) {
    case RLSPolicyStatus::NOT_SET:
      return {};
    case RLSPolicyStatus::VALID:
      return "VALID";
    case RLSPolicyStatus::INVALID:
      return "INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RLSPolicyStatusMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws

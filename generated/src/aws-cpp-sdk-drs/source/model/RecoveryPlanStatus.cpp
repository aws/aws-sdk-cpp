/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/RecoveryPlanStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace RecoveryPlanStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INVALID_HASH = HashingUtils::HashString("INVALID");

RecoveryPlanStatus GetRecoveryPlanStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return RecoveryPlanStatus::ACTIVE;
  } else if (hashCode == INVALID_HASH) {
    return RecoveryPlanStatus::INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecoveryPlanStatus>(hashCode);
  }

  return RecoveryPlanStatus::NOT_SET;
}

Aws::String GetNameForRecoveryPlanStatus(RecoveryPlanStatus enumValue) {
  switch (enumValue) {
    case RecoveryPlanStatus::NOT_SET:
      return {};
    case RecoveryPlanStatus::ACTIVE:
      return "ACTIVE";
    case RecoveryPlanStatus::INVALID:
      return "INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecoveryPlanStatusMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws

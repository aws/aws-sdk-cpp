/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/RecoveryPlanServerImpactLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace RecoveryPlanServerImpactLevelMapper {

static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");

RecoveryPlanServerImpactLevel GetRecoveryPlanServerImpactLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CRITICAL_HASH) {
    return RecoveryPlanServerImpactLevel::CRITICAL;
  } else if (hashCode == OPTIONAL_HASH) {
    return RecoveryPlanServerImpactLevel::OPTIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecoveryPlanServerImpactLevel>(hashCode);
  }

  return RecoveryPlanServerImpactLevel::NOT_SET;
}

Aws::String GetNameForRecoveryPlanServerImpactLevel(RecoveryPlanServerImpactLevel enumValue) {
  switch (enumValue) {
    case RecoveryPlanServerImpactLevel::NOT_SET:
      return {};
    case RecoveryPlanServerImpactLevel::CRITICAL:
      return "CRITICAL";
    case RecoveryPlanServerImpactLevel::OPTIONAL:
      return "OPTIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecoveryPlanServerImpactLevelMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws

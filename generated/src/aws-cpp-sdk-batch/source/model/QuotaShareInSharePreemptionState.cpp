/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/QuotaShareInSharePreemptionState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace QuotaShareInSharePreemptionStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

QuotaShareInSharePreemptionState GetQuotaShareInSharePreemptionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return QuotaShareInSharePreemptionState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return QuotaShareInSharePreemptionState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuotaShareInSharePreemptionState>(hashCode);
  }

  return QuotaShareInSharePreemptionState::NOT_SET;
}

Aws::String GetNameForQuotaShareInSharePreemptionState(QuotaShareInSharePreemptionState enumValue) {
  switch (enumValue) {
    case QuotaShareInSharePreemptionState::NOT_SET:
      return {};
    case QuotaShareInSharePreemptionState::ENABLED:
      return "ENABLED";
    case QuotaShareInSharePreemptionState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuotaShareInSharePreemptionStateMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentOutputStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace MinimumThroughputBillingCommitmentOutputStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_UNTIL_EARLIEST_ALLOWED_END_HASH = HashingUtils::HashString("ENABLED_UNTIL_EARLIEST_ALLOWED_END");

MinimumThroughputBillingCommitmentOutputStatus GetMinimumThroughputBillingCommitmentOutputStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return MinimumThroughputBillingCommitmentOutputStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return MinimumThroughputBillingCommitmentOutputStatus::DISABLED;
  } else if (hashCode == ENABLED_UNTIL_EARLIEST_ALLOWED_END_HASH) {
    return MinimumThroughputBillingCommitmentOutputStatus::ENABLED_UNTIL_EARLIEST_ALLOWED_END;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MinimumThroughputBillingCommitmentOutputStatus>(hashCode);
  }

  return MinimumThroughputBillingCommitmentOutputStatus::NOT_SET;
}

Aws::String GetNameForMinimumThroughputBillingCommitmentOutputStatus(MinimumThroughputBillingCommitmentOutputStatus enumValue) {
  switch (enumValue) {
    case MinimumThroughputBillingCommitmentOutputStatus::NOT_SET:
      return {};
    case MinimumThroughputBillingCommitmentOutputStatus::ENABLED:
      return "ENABLED";
    case MinimumThroughputBillingCommitmentOutputStatus::DISABLED:
      return "DISABLED";
    case MinimumThroughputBillingCommitmentOutputStatus::ENABLED_UNTIL_EARLIEST_ALLOWED_END:
      return "ENABLED_UNTIL_EARLIEST_ALLOWED_END";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MinimumThroughputBillingCommitmentOutputStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

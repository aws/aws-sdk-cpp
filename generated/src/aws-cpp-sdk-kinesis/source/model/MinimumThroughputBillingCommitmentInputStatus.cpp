/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/MinimumThroughputBillingCommitmentInputStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace MinimumThroughputBillingCommitmentInputStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

MinimumThroughputBillingCommitmentInputStatus GetMinimumThroughputBillingCommitmentInputStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return MinimumThroughputBillingCommitmentInputStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return MinimumThroughputBillingCommitmentInputStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MinimumThroughputBillingCommitmentInputStatus>(hashCode);
  }

  return MinimumThroughputBillingCommitmentInputStatus::NOT_SET;
}

Aws::String GetNameForMinimumThroughputBillingCommitmentInputStatus(MinimumThroughputBillingCommitmentInputStatus enumValue) {
  switch (enumValue) {
    case MinimumThroughputBillingCommitmentInputStatus::NOT_SET:
      return {};
    case MinimumThroughputBillingCommitmentInputStatus::ENABLED:
      return "ENABLED";
    case MinimumThroughputBillingCommitmentInputStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MinimumThroughputBillingCommitmentInputStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/RecordDistributionStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace RecordDistributionStrategyMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int USER_PARTITION_KEY_HASH = HashingUtils::HashString("USER_PARTITION_KEY");

RecordDistributionStrategy GetRecordDistributionStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return RecordDistributionStrategy::AUTO;
  } else if (hashCode == USER_PARTITION_KEY_HASH) {
    return RecordDistributionStrategy::USER_PARTITION_KEY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecordDistributionStrategy>(hashCode);
  }

  return RecordDistributionStrategy::NOT_SET;
}

Aws::String GetNameForRecordDistributionStrategy(RecordDistributionStrategy enumValue) {
  switch (enumValue) {
    case RecordDistributionStrategy::NOT_SET:
      return {};
    case RecordDistributionStrategy::AUTO:
      return "AUTO";
    case RecordDistributionStrategy::USER_PARTITION_KEY:
      return "USER_PARTITION_KEY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecordDistributionStrategyMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

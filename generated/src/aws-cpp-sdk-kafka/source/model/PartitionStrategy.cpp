/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/PartitionStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace PartitionStrategyMapper {

static const int TIME_HOUR_HASH = HashingUtils::HashString("TIME_HOUR");

PartitionStrategy GetPartitionStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TIME_HOUR_HASH) {
    return PartitionStrategy::TIME_HOUR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PartitionStrategy>(hashCode);
  }

  return PartitionStrategy::NOT_SET;
}

Aws::String GetNameForPartitionStrategy(PartitionStrategy enumValue) {
  switch (enumValue) {
    case PartitionStrategy::NOT_SET:
      return {};
    case PartitionStrategy::TIME_HOUR:
      return "TIME_HOUR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PartitionStrategyMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

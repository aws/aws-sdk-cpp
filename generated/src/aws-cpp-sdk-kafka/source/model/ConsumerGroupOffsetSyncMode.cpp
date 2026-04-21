/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/ConsumerGroupOffsetSyncMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace ConsumerGroupOffsetSyncModeMapper {

static const int LEGACY_HASH = HashingUtils::HashString("LEGACY");
static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");

ConsumerGroupOffsetSyncMode GetConsumerGroupOffsetSyncModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LEGACY_HASH) {
    return ConsumerGroupOffsetSyncMode::LEGACY;
  } else if (hashCode == ENHANCED_HASH) {
    return ConsumerGroupOffsetSyncMode::ENHANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConsumerGroupOffsetSyncMode>(hashCode);
  }

  return ConsumerGroupOffsetSyncMode::NOT_SET;
}

Aws::String GetNameForConsumerGroupOffsetSyncMode(ConsumerGroupOffsetSyncMode enumValue) {
  switch (enumValue) {
    case ConsumerGroupOffsetSyncMode::NOT_SET:
      return {};
    case ConsumerGroupOffsetSyncMode::LEGACY:
      return "LEGACY";
    case ConsumerGroupOffsetSyncMode::ENHANCED:
      return "ENHANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConsumerGroupOffsetSyncModeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

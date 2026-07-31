/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/ChannelStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace ChannelStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SUSPENDING_HASH = HashingUtils::HashString("SUSPENDING");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");

ChannelStatus GetChannelStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ChannelStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ChannelStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return ChannelStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return ChannelStatus::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return ChannelStatus::FAILED;
  } else if (hashCode == SUSPENDING_HASH) {
    return ChannelStatus::SUSPENDING;
  } else if (hashCode == SUSPENDED_HASH) {
    return ChannelStatus::SUSPENDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelStatus>(hashCode);
  }

  return ChannelStatus::NOT_SET;
}

Aws::String GetNameForChannelStatus(ChannelStatus enumValue) {
  switch (enumValue) {
    case ChannelStatus::NOT_SET:
      return {};
    case ChannelStatus::CREATING:
      return "CREATING";
    case ChannelStatus::ACTIVE:
      return "ACTIVE";
    case ChannelStatus::UPDATING:
      return "UPDATING";
    case ChannelStatus::DELETING:
      return "DELETING";
    case ChannelStatus::FAILED:
      return "FAILED";
    case ChannelStatus::SUSPENDING:
      return "SUSPENDING";
    case ChannelStatus::SUSPENDED:
      return "SUSPENDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

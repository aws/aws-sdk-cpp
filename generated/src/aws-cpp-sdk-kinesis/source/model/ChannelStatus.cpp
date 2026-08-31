/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/ChannelStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace ChannelStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

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
}  // namespace Kinesis
}  // namespace Aws

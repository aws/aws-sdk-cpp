/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/FeedStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace FeedStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");

FeedStatus GetFeedStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return FeedStatus::CREATING;
  } else if (hashCode == AVAILABLE_HASH) {
    return FeedStatus::AVAILABLE;
  } else if (hashCode == ACTIVE_HASH) {
    return FeedStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return FeedStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return FeedStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return FeedStatus::DELETED;
  } else if (hashCode == ARCHIVED_HASH) {
    return FeedStatus::ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FeedStatus>(hashCode);
  }

  return FeedStatus::NOT_SET;
}

Aws::String GetNameForFeedStatus(FeedStatus enumValue) {
  switch (enumValue) {
    case FeedStatus::NOT_SET:
      return {};
    case FeedStatus::CREATING:
      return "CREATING";
    case FeedStatus::AVAILABLE:
      return "AVAILABLE";
    case FeedStatus::ACTIVE:
      return "ACTIVE";
    case FeedStatus::UPDATING:
      return "UPDATING";
    case FeedStatus::DELETING:
      return "DELETING";
    case FeedStatus::DELETED:
      return "DELETED";
    case FeedStatus::ARCHIVED:
      return "ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FeedStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws

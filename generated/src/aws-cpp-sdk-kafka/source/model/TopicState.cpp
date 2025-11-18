/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/TopicState.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace TopicStateMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

TopicState GetTopicStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return TopicState::CREATING;
  } else if (hashCode == UPDATING_HASH) {
    return TopicState::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return TopicState::DELETING;
  } else if (hashCode == ACTIVE_HASH) {
    return TopicState::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TopicState>(hashCode);
  }

  return TopicState::NOT_SET;
}

Aws::String GetNameForTopicState(TopicState enumValue) {
  switch (enumValue) {
    case TopicState::NOT_SET:
      return {};
    case TopicState::CREATING:
      return "CREATING";
    case TopicState::UPDATING:
      return "UPDATING";
    case TopicState::DELETING:
      return "DELETING";
    case TopicState::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TopicStateMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

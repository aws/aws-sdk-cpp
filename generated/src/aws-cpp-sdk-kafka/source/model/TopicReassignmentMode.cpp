/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/TopicReassignmentMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace TopicReassignmentModeMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");

TopicReassignmentMode GetTopicReassignmentModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return TopicReassignmentMode::AUTO;
  } else if (hashCode == MANUAL_HASH) {
    return TopicReassignmentMode::MANUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TopicReassignmentMode>(hashCode);
  }

  return TopicReassignmentMode::NOT_SET;
}

Aws::String GetNameForTopicReassignmentMode(TopicReassignmentMode enumValue) {
  switch (enumValue) {
    case TopicReassignmentMode::NOT_SET:
      return {};
    case TopicReassignmentMode::AUTO:
      return "AUTO";
    case TopicReassignmentMode::MANUAL:
      return "MANUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TopicReassignmentModeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

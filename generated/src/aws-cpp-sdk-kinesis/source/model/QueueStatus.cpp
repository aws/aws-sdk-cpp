/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesis/model/QueueStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {
namespace QueueStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

QueueStatus GetQueueStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return QueueStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return QueueStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return QueueStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return QueueStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QueueStatus>(hashCode);
  }

  return QueueStatus::NOT_SET;
}

Aws::String GetNameForQueueStatus(QueueStatus enumValue) {
  switch (enumValue) {
    case QueueStatus::NOT_SET:
      return {};
    case QueueStatus::CREATING:
      return "CREATING";
    case QueueStatus::ACTIVE:
      return "ACTIVE";
    case QueueStatus::UPDATING:
      return "UPDATING";
    case QueueStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QueueStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/dsql/model/StreamStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {
namespace StreamStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");

StreamStatus GetStreamStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return StreamStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return StreamStatus::ACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return StreamStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return StreamStatus::DELETED;
  } else if (hashCode == FAILED_HASH) {
    return StreamStatus::FAILED;
  } else if (hashCode == IMPAIRED_HASH) {
    return StreamStatus::IMPAIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamStatus>(hashCode);
  }

  return StreamStatus::NOT_SET;
}

Aws::String GetNameForStreamStatus(StreamStatus enumValue) {
  switch (enumValue) {
    case StreamStatus::NOT_SET:
      return {};
    case StreamStatus::CREATING:
      return "CREATING";
    case StreamStatus::ACTIVE:
      return "ACTIVE";
    case StreamStatus::DELETING:
      return "DELETING";
    case StreamStatus::DELETED:
      return "DELETED";
    case StreamStatus::FAILED:
      return "FAILED";
    case StreamStatus::IMPAIRED:
      return "IMPAIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamStatusMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws

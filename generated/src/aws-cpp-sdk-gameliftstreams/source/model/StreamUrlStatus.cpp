/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gameliftstreams/model/StreamUrlStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {
namespace StreamUrlStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
static const int LIMIT_REACHED_HASH = HashingUtils::HashString("LIMIT_REACHED");

StreamUrlStatus GetStreamUrlStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return StreamUrlStatus::ACTIVE;
  } else if (hashCode == EXPIRED_HASH) {
    return StreamUrlStatus::EXPIRED;
  } else if (hashCode == REVOKED_HASH) {
    return StreamUrlStatus::REVOKED;
  } else if (hashCode == LIMIT_REACHED_HASH) {
    return StreamUrlStatus::LIMIT_REACHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamUrlStatus>(hashCode);
  }

  return StreamUrlStatus::NOT_SET;
}

Aws::String GetNameForStreamUrlStatus(StreamUrlStatus enumValue) {
  switch (enumValue) {
    case StreamUrlStatus::NOT_SET:
      return {};
    case StreamUrlStatus::ACTIVE:
      return "ACTIVE";
    case StreamUrlStatus::EXPIRED:
      return "EXPIRED";
    case StreamUrlStatus::REVOKED:
      return "REVOKED";
    case StreamUrlStatus::LIMIT_REACHED:
      return "LIMIT_REACHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamUrlStatusMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws

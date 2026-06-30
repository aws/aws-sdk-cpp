/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableVersionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace IntermediateTableVersionStatusMapper {

static const int POPULATE_STARTED_HASH = HashingUtils::HashString("POPULATE_STARTED");
static const int POPULATE_SUCCESS_HASH = HashingUtils::HashString("POPULATE_SUCCESS");
static const int POPULATE_FAILED_HASH = HashingUtils::HashString("POPULATE_FAILED");
static const int RETENTION_PERIOD_EXPIRED_HASH = HashingUtils::HashString("RETENTION_PERIOD_EXPIRED");

IntermediateTableVersionStatus GetIntermediateTableVersionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == POPULATE_STARTED_HASH) {
    return IntermediateTableVersionStatus::POPULATE_STARTED;
  } else if (hashCode == POPULATE_SUCCESS_HASH) {
    return IntermediateTableVersionStatus::POPULATE_SUCCESS;
  } else if (hashCode == POPULATE_FAILED_HASH) {
    return IntermediateTableVersionStatus::POPULATE_FAILED;
  } else if (hashCode == RETENTION_PERIOD_EXPIRED_HASH) {
    return IntermediateTableVersionStatus::RETENTION_PERIOD_EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IntermediateTableVersionStatus>(hashCode);
  }

  return IntermediateTableVersionStatus::NOT_SET;
}

Aws::String GetNameForIntermediateTableVersionStatus(IntermediateTableVersionStatus enumValue) {
  switch (enumValue) {
    case IntermediateTableVersionStatus::NOT_SET:
      return {};
    case IntermediateTableVersionStatus::POPULATE_STARTED:
      return "POPULATE_STARTED";
    case IntermediateTableVersionStatus::POPULATE_SUCCESS:
      return "POPULATE_SUCCESS";
    case IntermediateTableVersionStatus::POPULATE_FAILED:
      return "POPULATE_FAILED";
    case IntermediateTableVersionStatus::RETENTION_PERIOD_EXPIRED:
      return "RETENTION_PERIOD_EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntermediateTableVersionStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

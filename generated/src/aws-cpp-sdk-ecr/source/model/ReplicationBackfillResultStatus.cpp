/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/ReplicationBackfillResultStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace ReplicationBackfillResultStatusMapper {

static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ReplicationBackfillResultStatus GetReplicationBackfillResultStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETE_HASH) {
    return ReplicationBackfillResultStatus::COMPLETE;
  } else if (hashCode == FAILED_HASH) {
    return ReplicationBackfillResultStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicationBackfillResultStatus>(hashCode);
  }

  return ReplicationBackfillResultStatus::NOT_SET;
}

Aws::String GetNameForReplicationBackfillResultStatus(ReplicationBackfillResultStatus enumValue) {
  switch (enumValue) {
    case ReplicationBackfillResultStatus::NOT_SET:
      return {};
    case ReplicationBackfillResultStatus::COMPLETE:
      return "COMPLETE";
    case ReplicationBackfillResultStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicationBackfillResultStatusMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws

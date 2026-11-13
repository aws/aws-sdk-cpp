/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/MergeStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {
namespace MergeStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");

MergeStatus GetMergeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return MergeStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return MergeStatus::COMPLETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MergeStatus>(hashCode);
  }

  return MergeStatus::NOT_SET;
}

Aws::String GetNameForMergeStatus(MergeStatus enumValue) {
  switch (enumValue) {
    case MergeStatus::NOT_SET:
      return {};
    case MergeStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case MergeStatus::COMPLETED:
      return "COMPLETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MergeStatusMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws

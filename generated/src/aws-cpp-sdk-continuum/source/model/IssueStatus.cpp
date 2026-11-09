/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssueStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

IssueStatus GetIssueStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return IssueStatus::CREATED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return IssueStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return IssueStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return IssueStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssueStatus>(hashCode);
  }

  return IssueStatus::NOT_SET;
}

Aws::String GetNameForIssueStatus(IssueStatus enumValue) {
  switch (enumValue) {
    case IssueStatus::NOT_SET:
      return {};
    case IssueStatus::CREATED:
      return "CREATED";
    case IssueStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case IssueStatus::COMPLETED:
      return "COMPLETED";
    case IssueStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssueStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws

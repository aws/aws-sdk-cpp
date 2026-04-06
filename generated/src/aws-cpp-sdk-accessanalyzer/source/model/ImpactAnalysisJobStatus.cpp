/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ImpactAnalysisJobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
namespace ImpactAnalysisJobStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");

ImpactAnalysisJobStatus GetImpactAnalysisJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return ImpactAnalysisJobStatus::SUBMITTED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return ImpactAnalysisJobStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return ImpactAnalysisJobStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return ImpactAnalysisJobStatus::FAILED;
  } else if (hashCode == CANCELED_HASH) {
    return ImpactAnalysisJobStatus::CANCELED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImpactAnalysisJobStatus>(hashCode);
  }

  return ImpactAnalysisJobStatus::NOT_SET;
}

Aws::String GetNameForImpactAnalysisJobStatus(ImpactAnalysisJobStatus enumValue) {
  switch (enumValue) {
    case ImpactAnalysisJobStatus::NOT_SET:
      return {};
    case ImpactAnalysisJobStatus::SUBMITTED:
      return "SUBMITTED";
    case ImpactAnalysisJobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case ImpactAnalysisJobStatus::COMPLETED:
      return "COMPLETED";
    case ImpactAnalysisJobStatus::FAILED:
      return "FAILED";
    case ImpactAnalysisJobStatus::CANCELED:
      return "CANCELED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImpactAnalysisJobStatusMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws

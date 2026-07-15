/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/TransformationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace TransformationJobStatusMapper {

static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

TransformationJobStatus GetTransformationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SUBMITTED_HASH) {
    return TransformationJobStatus::SUBMITTED;
  } else if (hashCode == QUEUED_HASH) {
    return TransformationJobStatus::QUEUED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return TransformationJobStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return TransformationJobStatus::COMPLETED;
  } else if (hashCode == COMPLETED_WITH_ERRORS_HASH) {
    return TransformationJobStatus::COMPLETED_WITH_ERRORS;
  } else if (hashCode == FAILED_HASH) {
    return TransformationJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransformationJobStatus>(hashCode);
  }

  return TransformationJobStatus::NOT_SET;
}

Aws::String GetNameForTransformationJobStatus(TransformationJobStatus enumValue) {
  switch (enumValue) {
    case TransformationJobStatus::NOT_SET:
      return {};
    case TransformationJobStatus::SUBMITTED:
      return "SUBMITTED";
    case TransformationJobStatus::QUEUED:
      return "QUEUED";
    case TransformationJobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case TransformationJobStatus::COMPLETED:
      return "COMPLETED";
    case TransformationJobStatus::COMPLETED_WITH_ERRORS:
      return "COMPLETED_WITH_ERRORS";
    case TransformationJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransformationJobStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws

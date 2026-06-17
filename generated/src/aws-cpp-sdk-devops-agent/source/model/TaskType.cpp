/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/TaskType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace TaskTypeMapper {

static const int INVESTIGATION_HASH = HashingUtils::HashString("INVESTIGATION");
static const int EVALUATION_HASH = HashingUtils::HashString("EVALUATION");
static const int RELEASE_READINESS_REVIEW_HASH = HashingUtils::HashString("RELEASE_READINESS_REVIEW");
static const int RELEASE_TESTING_HASH = HashingUtils::HashString("RELEASE_TESTING");

TaskType GetTaskTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVESTIGATION_HASH) {
    return TaskType::INVESTIGATION;
  } else if (hashCode == EVALUATION_HASH) {
    return TaskType::EVALUATION;
  } else if (hashCode == RELEASE_READINESS_REVIEW_HASH) {
    return TaskType::RELEASE_READINESS_REVIEW;
  } else if (hashCode == RELEASE_TESTING_HASH) {
    return TaskType::RELEASE_TESTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaskType>(hashCode);
  }

  return TaskType::NOT_SET;
}

Aws::String GetNameForTaskType(TaskType enumValue) {
  switch (enumValue) {
    case TaskType::NOT_SET:
      return {};
    case TaskType::INVESTIGATION:
      return "INVESTIGATION";
    case TaskType::EVALUATION:
      return "EVALUATION";
    case TaskType::RELEASE_READINESS_REVIEW:
      return "RELEASE_READINESS_REVIEW";
    case TaskType::RELEASE_TESTING:
      return "RELEASE_TESTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaskTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

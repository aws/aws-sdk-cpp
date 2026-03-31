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

TaskType GetTaskTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVESTIGATION_HASH) {
    return TaskType::INVESTIGATION;
  } else if (hashCode == EVALUATION_HASH) {
    return TaskType::EVALUATION;
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

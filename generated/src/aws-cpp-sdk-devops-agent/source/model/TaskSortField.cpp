/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/TaskSortField.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace TaskSortFieldMapper {

static const int CREATED_AT_HASH = HashingUtils::HashString("CREATED_AT");
static const int PRIORITY_HASH = HashingUtils::HashString("PRIORITY");

TaskSortField GetTaskSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_AT_HASH) {
    return TaskSortField::CREATED_AT;
  } else if (hashCode == PRIORITY_HASH) {
    return TaskSortField::PRIORITY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaskSortField>(hashCode);
  }

  return TaskSortField::NOT_SET;
}

Aws::String GetNameForTaskSortField(TaskSortField enumValue) {
  switch (enumValue) {
    case TaskSortField::NOT_SET:
      return {};
    case TaskSortField::CREATED_AT:
      return "CREATED_AT";
    case TaskSortField::PRIORITY:
      return "PRIORITY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaskSortFieldMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/TaskSortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace TaskSortOrderMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

TaskSortOrder GetTaskSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return TaskSortOrder::ASC;
  } else if (hashCode == DESC_HASH) {
    return TaskSortOrder::DESC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaskSortOrder>(hashCode);
  }

  return TaskSortOrder::NOT_SET;
}

Aws::String GetNameForTaskSortOrder(TaskSortOrder enumValue) {
  switch (enumValue) {
    case TaskSortOrder::NOT_SET:
      return {};
    case TaskSortOrder::ASC:
      return "ASC";
    case TaskSortOrder::DESC:
      return "DESC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaskSortOrderMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

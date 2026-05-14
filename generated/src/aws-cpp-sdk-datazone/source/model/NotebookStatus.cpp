/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/NotebookStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace NotebookStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");

NotebookStatus GetNotebookStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return NotebookStatus::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return NotebookStatus::ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotebookStatus>(hashCode);
  }

  return NotebookStatus::NOT_SET;
}

Aws::String GetNameForNotebookStatus(NotebookStatus enumValue) {
  switch (enumValue) {
    case NotebookStatus::NOT_SET:
      return {};
    case NotebookStatus::ACTIVE:
      return "ACTIVE";
    case NotebookStatus::ARCHIVED:
      return "ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotebookStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

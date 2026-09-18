/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/NotebookType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace NotebookTypeMapper {

static const int DATA_HASH = HashingUtils::HashString("DATA");
static const int SQL_HASH = HashingUtils::HashString("SQL");

NotebookType GetNotebookTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DATA_HASH) {
    return NotebookType::DATA;
  } else if (hashCode == SQL_HASH) {
    return NotebookType::SQL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotebookType>(hashCode);
  }

  return NotebookType::NOT_SET;
}

Aws::String GetNameForNotebookType(NotebookType enumValue) {
  switch (enumValue) {
    case NotebookType::NOT_SET:
      return {};
    case NotebookType::DATA:
      return "DATA";
    case NotebookType::SQL:
      return "SQL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotebookTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

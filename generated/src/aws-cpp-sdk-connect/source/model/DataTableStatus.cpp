/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace DataTableStatusMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");

DataTableStatus GetDataTableStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return DataTableStatus::PUBLISHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataTableStatus>(hashCode);
  }

  return DataTableStatus::NOT_SET;
}

Aws::String GetNameForDataTableStatus(DataTableStatus enumValue) {
  switch (enumValue) {
    case DataTableStatus::NOT_SET:
      return {};
    case DataTableStatus::PUBLISHED:
      return "PUBLISHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataTableStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws

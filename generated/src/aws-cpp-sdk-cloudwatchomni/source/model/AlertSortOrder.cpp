/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AlertSortOrder.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AlertSortOrderMapper {

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

AlertSortOrder GetAlertSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH) {
    return AlertSortOrder::ASC;
  } else if (hashCode == DESC_HASH) {
    return AlertSortOrder::DESC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AlertSortOrder>(hashCode);
  }

  return AlertSortOrder::NOT_SET;
}

Aws::String GetNameForAlertSortOrder(AlertSortOrder enumValue) {
  switch (enumValue) {
    case AlertSortOrder::NOT_SET:
      return {};
    case AlertSortOrder::ASC:
      return "ASC";
    case AlertSortOrder::DESC:
      return "DESC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AlertSortOrderMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws

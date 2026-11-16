/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ChecklistItemStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace ChecklistItemStatusMapper {

static const int DISCUSSED_HASH = HashingUtils::HashString("DISCUSSED");
static const int PARTIALLY_DISCUSSED_HASH = HashingUtils::HashString("PARTIALLY_DISCUSSED");
static const int NOT_DISCUSSED_HASH = HashingUtils::HashString("NOT_DISCUSSED");

ChecklistItemStatus GetChecklistItemStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISCUSSED_HASH) {
    return ChecklistItemStatus::DISCUSSED;
  } else if (hashCode == PARTIALLY_DISCUSSED_HASH) {
    return ChecklistItemStatus::PARTIALLY_DISCUSSED;
  } else if (hashCode == NOT_DISCUSSED_HASH) {
    return ChecklistItemStatus::NOT_DISCUSSED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChecklistItemStatus>(hashCode);
  }

  return ChecklistItemStatus::NOT_SET;
}

Aws::String GetNameForChecklistItemStatus(ChecklistItemStatus enumValue) {
  switch (enumValue) {
    case ChecklistItemStatus::NOT_SET:
      return {};
    case ChecklistItemStatus::DISCUSSED:
      return "DISCUSSED";
    case ChecklistItemStatus::PARTIALLY_DISCUSSED:
      return "PARTIALLY_DISCUSSED";
    case ChecklistItemStatus::NOT_DISCUSSED:
      return "NOT_DISCUSSED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChecklistItemStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

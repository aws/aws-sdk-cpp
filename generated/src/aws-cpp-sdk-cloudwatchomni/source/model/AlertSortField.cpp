/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AlertSortField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AlertSortFieldMapper {

static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int STATE_HASH = HashingUtils::HashString("STATE");

AlertSortField GetAlertSortFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NAME_HASH) {
    return AlertSortField::NAME;
  } else if (hashCode == STATE_HASH) {
    return AlertSortField::STATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AlertSortField>(hashCode);
  }

  return AlertSortField::NOT_SET;
}

Aws::String GetNameForAlertSortField(AlertSortField enumValue) {
  switch (enumValue) {
    case AlertSortField::NOT_SET:
      return {};
    case AlertSortField::NAME:
      return "NAME";
    case AlertSortField::STATE:
      return "STATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AlertSortFieldMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws

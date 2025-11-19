/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/MonitorDimension.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CostExplorer {
namespace Model {
namespace MonitorDimensionMapper {

static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
static const int LINKED_ACCOUNT_HASH = HashingUtils::HashString("LINKED_ACCOUNT");
static const int TAG_HASH = HashingUtils::HashString("TAG");
static const int COST_CATEGORY_HASH = HashingUtils::HashString("COST_CATEGORY");

MonitorDimension GetMonitorDimensionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_HASH) {
    return MonitorDimension::SERVICE;
  } else if (hashCode == LINKED_ACCOUNT_HASH) {
    return MonitorDimension::LINKED_ACCOUNT;
  } else if (hashCode == TAG_HASH) {
    return MonitorDimension::TAG;
  } else if (hashCode == COST_CATEGORY_HASH) {
    return MonitorDimension::COST_CATEGORY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MonitorDimension>(hashCode);
  }

  return MonitorDimension::NOT_SET;
}

Aws::String GetNameForMonitorDimension(MonitorDimension enumValue) {
  switch (enumValue) {
    case MonitorDimension::NOT_SET:
      return {};
    case MonitorDimension::SERVICE:
      return "SERVICE";
    case MonitorDimension::LINKED_ACCOUNT:
      return "LINKED_ACCOUNT";
    case MonitorDimension::TAG:
      return "TAG";
    case MonitorDimension::COST_CATEGORY:
      return "COST_CATEGORY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MonitorDimensionMapper
}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AvailableFilterType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AvailableFilterTypeMapper {

static const int METRIC_LEVEL_HASH = HashingUtils::HashString("METRIC_LEVEL");
static const int RESOURCE_LEVEL_HASH = HashingUtils::HashString("RESOURCE_LEVEL");

AvailableFilterType GetAvailableFilterTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == METRIC_LEVEL_HASH) {
    return AvailableFilterType::METRIC_LEVEL;
  } else if (hashCode == RESOURCE_LEVEL_HASH) {
    return AvailableFilterType::RESOURCE_LEVEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AvailableFilterType>(hashCode);
  }

  return AvailableFilterType::NOT_SET;
}

Aws::String GetNameForAvailableFilterType(AvailableFilterType enumValue) {
  switch (enumValue) {
    case AvailableFilterType::NOT_SET:
      return {};
    case AvailableFilterType::METRIC_LEVEL:
      return "METRIC_LEVEL";
    case AvailableFilterType::RESOURCE_LEVEL:
      return "RESOURCE_LEVEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AvailableFilterTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws

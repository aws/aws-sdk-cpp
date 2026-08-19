/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ContainerInsights.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace ContainerInsightsMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ContainerInsights GetContainerInsightsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ContainerInsights::ENABLED;
  } else if (hashCode == ENHANCED_HASH) {
    return ContainerInsights::ENHANCED;
  } else if (hashCode == DISABLED_HASH) {
    return ContainerInsights::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerInsights>(hashCode);
  }

  return ContainerInsights::NOT_SET;
}

Aws::String GetNameForContainerInsights(ContainerInsights enumValue) {
  switch (enumValue) {
    case ContainerInsights::NOT_SET:
      return {};
    case ContainerInsights::ENABLED:
      return "ENABLED";
    case ContainerInsights::ENHANCED:
      return "ENHANCED";
    case ContainerInsights::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerInsightsMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws

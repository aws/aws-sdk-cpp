/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/NewRelicRegion.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace NewRelicRegionMapper {

static const int US_HASH = HashingUtils::HashString("US");
static const int EU_HASH = HashingUtils::HashString("EU");

NewRelicRegion GetNewRelicRegionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == US_HASH) {
    return NewRelicRegion::US;
  } else if (hashCode == EU_HASH) {
    return NewRelicRegion::EU;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NewRelicRegion>(hashCode);
  }

  return NewRelicRegion::NOT_SET;
}

Aws::String GetNameForNewRelicRegion(NewRelicRegion enumValue) {
  switch (enumValue) {
    case NewRelicRegion::NOT_SET:
      return {};
    case NewRelicRegion::US:
      return "US";
    case NewRelicRegion::EU:
      return "EU";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NewRelicRegionMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

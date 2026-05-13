/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/LocalTimeZoneDetectionScope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {
namespace LocalTimeZoneDetectionScopeMapper {

static const int PRIMARY_ONLY_HASH = HashingUtils::HashString("PRIMARY_ONLY");
static const int ALL_AVAILABLE_HASH = HashingUtils::HashString("ALL_AVAILABLE");

LocalTimeZoneDetectionScope GetLocalTimeZoneDetectionScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_ONLY_HASH) {
    return LocalTimeZoneDetectionScope::PRIMARY_ONLY;
  } else if (hashCode == ALL_AVAILABLE_HASH) {
    return LocalTimeZoneDetectionScope::ALL_AVAILABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LocalTimeZoneDetectionScope>(hashCode);
  }

  return LocalTimeZoneDetectionScope::NOT_SET;
}

Aws::String GetNameForLocalTimeZoneDetectionScope(LocalTimeZoneDetectionScope enumValue) {
  switch (enumValue) {
    case LocalTimeZoneDetectionScope::NOT_SET:
      return {};
    case LocalTimeZoneDetectionScope::PRIMARY_ONLY:
      return "PRIMARY_ONLY";
    case LocalTimeZoneDetectionScope::ALL_AVAILABLE:
      return "ALL_AVAILABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LocalTimeZoneDetectionScopeMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws

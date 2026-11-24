/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryFeature.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace DiscoveryFeatureMapper {

static const int AI_DISCOVERY_HASH = HashingUtils::HashString("AI_DISCOVERY");

DiscoveryFeature GetDiscoveryFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AI_DISCOVERY_HASH) {
    return DiscoveryFeature::AI_DISCOVERY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiscoveryFeature>(hashCode);
  }

  return DiscoveryFeature::NOT_SET;
}

Aws::String GetNameForDiscoveryFeature(DiscoveryFeature enumValue) {
  switch (enumValue) {
    case DiscoveryFeature::NOT_SET:
      return {};
    case DiscoveryFeature::AI_DISCOVERY:
      return "AI_DISCOVERY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiscoveryFeatureMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws

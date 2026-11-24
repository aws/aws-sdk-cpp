/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace DiscoverySourceMapper {

static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");
static const int ELB_HASH = HashingUtils::HashString("ELB");
static const int CLOUDFRONT_HASH = HashingUtils::HashString("CLOUDFRONT");

DiscoverySource GetDiscoverySourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_GATEWAY_HASH) {
    return DiscoverySource::API_GATEWAY;
  } else if (hashCode == ELB_HASH) {
    return DiscoverySource::ELB;
  } else if (hashCode == CLOUDFRONT_HASH) {
    return DiscoverySource::CLOUDFRONT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiscoverySource>(hashCode);
  }

  return DiscoverySource::NOT_SET;
}

Aws::String GetNameForDiscoverySource(DiscoverySource enumValue) {
  switch (enumValue) {
    case DiscoverySource::NOT_SET:
      return {};
    case DiscoverySource::API_GATEWAY:
      return "API_GATEWAY";
    case DiscoverySource::ELB:
      return "ELB";
    case DiscoverySource::CLOUDFRONT:
      return "CLOUDFRONT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiscoverySourceMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws

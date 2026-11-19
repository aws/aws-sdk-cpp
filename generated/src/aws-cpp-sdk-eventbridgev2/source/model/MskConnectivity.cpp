/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/MskConnectivity.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace MskConnectivityMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");

MskConnectivity GetMskConnectivityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return MskConnectivity::PUBLIC_;
  } else if (hashCode == PRIVATE__HASH) {
    return MskConnectivity::PRIVATE_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MskConnectivity>(hashCode);
  }

  return MskConnectivity::NOT_SET;
}

Aws::String GetNameForMskConnectivity(MskConnectivity enumValue) {
  switch (enumValue) {
    case MskConnectivity::NOT_SET:
      return {};
    case MskConnectivity::PUBLIC_:
      return "PUBLIC";
    case MskConnectivity::PRIVATE_:
      return "PRIVATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MskConnectivityMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws

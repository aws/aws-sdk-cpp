/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ExpressGatewayServiceStatusCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ExpressGatewayServiceStatusCodeMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

ExpressGatewayServiceStatusCode GetExpressGatewayServiceStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ExpressGatewayServiceStatusCode::ACTIVE;
  } else if (hashCode == DRAINING_HASH) {
    return ExpressGatewayServiceStatusCode::DRAINING;
  } else if (hashCode == INACTIVE_HASH) {
    return ExpressGatewayServiceStatusCode::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExpressGatewayServiceStatusCode>(hashCode);
  }

  return ExpressGatewayServiceStatusCode::NOT_SET;
}

Aws::String GetNameForExpressGatewayServiceStatusCode(ExpressGatewayServiceStatusCode enumValue) {
  switch (enumValue) {
    case ExpressGatewayServiceStatusCode::NOT_SET:
      return {};
    case ExpressGatewayServiceStatusCode::ACTIVE:
      return "ACTIVE";
    case ExpressGatewayServiceStatusCode::DRAINING:
      return "DRAINING";
    case ExpressGatewayServiceStatusCode::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExpressGatewayServiceStatusCodeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

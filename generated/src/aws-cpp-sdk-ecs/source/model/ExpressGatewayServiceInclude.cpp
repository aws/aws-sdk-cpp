/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ExpressGatewayServiceInclude.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ExpressGatewayServiceIncludeMapper {

static const int TAGS_HASH = HashingUtils::HashString("TAGS");

ExpressGatewayServiceInclude GetExpressGatewayServiceIncludeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TAGS_HASH) {
    return ExpressGatewayServiceInclude::TAGS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExpressGatewayServiceInclude>(hashCode);
  }

  return ExpressGatewayServiceInclude::NOT_SET;
}

Aws::String GetNameForExpressGatewayServiceInclude(ExpressGatewayServiceInclude enumValue) {
  switch (enumValue) {
    case ExpressGatewayServiceInclude::NOT_SET:
      return {};
    case ExpressGatewayServiceInclude::TAGS:
      return "TAGS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExpressGatewayServiceIncludeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

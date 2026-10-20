/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayElbScheme.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayElbSchemeMapper {

static const int internet_facing_HASH = HashingUtils::HashString("internet-facing");
static const int internal_HASH = HashingUtils::HashString("internal");

GatewayElbScheme GetGatewayElbSchemeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == internet_facing_HASH) {
    return GatewayElbScheme::internet_facing;
  } else if (hashCode == internal_HASH) {
    return GatewayElbScheme::internal;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayElbScheme>(hashCode);
  }

  return GatewayElbScheme::NOT_SET;
}

Aws::String GetNameForGatewayElbScheme(GatewayElbScheme enumValue) {
  switch (enumValue) {
    case GatewayElbScheme::NOT_SET:
      return {};
    case GatewayElbScheme::internet_facing:
      return "internet-facing";
    case GatewayElbScheme::internal:
      return "internal";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayElbSchemeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

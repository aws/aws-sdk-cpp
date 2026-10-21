/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/PropagateGatewayTags.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace PropagateGatewayTagsMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int GATEWAY_HASH = HashingUtils::HashString("GATEWAY");

PropagateGatewayTags GetPropagateGatewayTagsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return PropagateGatewayTags::NONE;
  } else if (hashCode == GATEWAY_HASH) {
    return PropagateGatewayTags::GATEWAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PropagateGatewayTags>(hashCode);
  }

  return PropagateGatewayTags::NOT_SET;
}

Aws::String GetNameForPropagateGatewayTags(PropagateGatewayTags enumValue) {
  switch (enumValue) {
    case PropagateGatewayTags::NOT_SET:
      return {};
    case PropagateGatewayTags::NONE:
      return "NONE";
    case PropagateGatewayTags::GATEWAY:
      return "GATEWAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PropagateGatewayTagsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws

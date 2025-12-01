/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EntityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EntityTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int AI_AGENT_HASH = HashingUtils::HashString("AI_AGENT");

EntityType GetEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return EntityType::USER;
  } else if (hashCode == AI_AGENT_HASH) {
    return EntityType::AI_AGENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EntityType>(hashCode);
  }

  return EntityType::NOT_SET;
}

Aws::String GetNameForEntityType(EntityType enumValue) {
  switch (enumValue) {
    case EntityType::NOT_SET:
      return {};
    case EntityType::USER:
      return "USER";
    case EntityType::AI_AGENT:
      return "AI_AGENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EntityTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws

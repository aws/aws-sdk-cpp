/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AIAgentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AIAgentTypeMapper {

static const int THIRD_PARTY_HASH = HashingUtils::HashString("THIRD_PARTY");

AIAgentType GetAIAgentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THIRD_PARTY_HASH) {
    return AIAgentType::THIRD_PARTY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AIAgentType>(hashCode);
  }

  return AIAgentType::NOT_SET;
}

Aws::String GetNameForAIAgentType(AIAgentType enumValue) {
  switch (enumValue) {
    case AIAgentType::NOT_SET:
      return {};
    case AIAgentType::THIRD_PARTY:
      return "THIRD_PARTY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AIAgentTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws

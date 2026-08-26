/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/AgentSpacePreferenceKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace AgentSpacePreferenceKeyMapper {

static const int elevatedActionsEnabled_HASH = HashingUtils::HashString("elevatedActionsEnabled");

AgentSpacePreferenceKey GetAgentSpacePreferenceKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == elevatedActionsEnabled_HASH) {
    return AgentSpacePreferenceKey::elevatedActionsEnabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentSpacePreferenceKey>(hashCode);
  }

  return AgentSpacePreferenceKey::NOT_SET;
}

Aws::String GetNameForAgentSpacePreferenceKey(AgentSpacePreferenceKey enumValue) {
  switch (enumValue) {
    case AgentSpacePreferenceKey::NOT_SET:
      return {};
    case AgentSpacePreferenceKey::elevatedActionsEnabled:
      return "elevatedActionsEnabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentSpacePreferenceKeyMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

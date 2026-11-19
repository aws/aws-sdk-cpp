/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentSkillsRepositoryProvider.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AgentSkillsRepositoryProviderMapper {

static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");

AgentSkillsRepositoryProvider GetAgentSkillsRepositoryProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GITHUB_HASH) {
    return AgentSkillsRepositoryProvider::GITHUB;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentSkillsRepositoryProvider>(hashCode);
  }

  return AgentSkillsRepositoryProvider::NOT_SET;
}

Aws::String GetNameForAgentSkillsRepositoryProvider(AgentSkillsRepositoryProvider enumValue) {
  switch (enumValue) {
    case AgentSkillsRepositoryProvider::NOT_SET:
      return {};
    case AgentSkillsRepositoryProvider::GITHUB:
      return "GITHUB";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentSkillsRepositoryProviderMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws

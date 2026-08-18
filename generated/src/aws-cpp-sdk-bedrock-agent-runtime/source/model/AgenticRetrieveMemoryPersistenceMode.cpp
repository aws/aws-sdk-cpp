/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryPersistenceMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace AgenticRetrieveMemoryPersistenceModeMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int NONE_HASH = HashingUtils::HashString("NONE");

AgenticRetrieveMemoryPersistenceMode GetAgenticRetrieveMemoryPersistenceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return AgenticRetrieveMemoryPersistenceMode::DEFAULT;
  } else if (hashCode == NONE_HASH) {
    return AgenticRetrieveMemoryPersistenceMode::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgenticRetrieveMemoryPersistenceMode>(hashCode);
  }

  return AgenticRetrieveMemoryPersistenceMode::NOT_SET;
}

Aws::String GetNameForAgenticRetrieveMemoryPersistenceMode(AgenticRetrieveMemoryPersistenceMode enumValue) {
  switch (enumValue) {
    case AgenticRetrieveMemoryPersistenceMode::NOT_SET:
      return {};
    case AgenticRetrieveMemoryPersistenceMode::DEFAULT:
      return "DEFAULT";
    case AgenticRetrieveMemoryPersistenceMode::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgenticRetrieveMemoryPersistenceModeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws

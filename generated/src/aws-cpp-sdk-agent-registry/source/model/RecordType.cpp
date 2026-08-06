/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/RecordType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {
namespace RecordTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");
static const int AGENT_HASH = HashingUtils::HashString("AGENT");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int SKILL_HASH = HashingUtils::HashString("SKILL");

RecordType GetRecordTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return RecordType::MCP;
  } else if (hashCode == AGENT_HASH) {
    return RecordType::AGENT;
  } else if (hashCode == CUSTOM_HASH) {
    return RecordType::CUSTOM;
  } else if (hashCode == SKILL_HASH) {
    return RecordType::SKILL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecordType>(hashCode);
  }

  return RecordType::NOT_SET;
}

Aws::String GetNameForRecordType(RecordType enumValue) {
  switch (enumValue) {
    case RecordType::NOT_SET:
      return {};
    case RecordType::MCP:
      return "MCP";
    case RecordType::AGENT:
      return "AGENT";
    case RecordType::CUSTOM:
      return "CUSTOM";
    case RecordType::SKILL:
      return "SKILL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecordTypeMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws

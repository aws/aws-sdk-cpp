/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/RecordType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {
namespace RecordTypeMapper {

static const int AGENT_HASH = HashingUtils::HashString("AGENT");
static const int TOOL_HASH = HashingUtils::HashString("TOOL");
static const int SKILL_HASH = HashingUtils::HashString("SKILL");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int GATEWAY_HASH = HashingUtils::HashString("GATEWAY");
static const int WEB_BOT_HASH = HashingUtils::HashString("WEB_BOT");

RecordType GetRecordTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AGENT_HASH) {
    return RecordType::AGENT;
  } else if (hashCode == TOOL_HASH) {
    return RecordType::TOOL;
  } else if (hashCode == SKILL_HASH) {
    return RecordType::SKILL;
  } else if (hashCode == CUSTOM_HASH) {
    return RecordType::CUSTOM;
  } else if (hashCode == GATEWAY_HASH) {
    return RecordType::GATEWAY;
  } else if (hashCode == WEB_BOT_HASH) {
    return RecordType::WEB_BOT;
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
    case RecordType::AGENT:
      return "AGENT";
    case RecordType::TOOL:
      return "TOOL";
    case RecordType::SKILL:
      return "SKILL";
    case RecordType::CUSTOM:
      return "CUSTOM";
    case RecordType::GATEWAY:
      return "GATEWAY";
    case RecordType::WEB_BOT:
      return "WEB_BOT";
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
}  // namespace AgentDiscovery
}  // namespace Aws

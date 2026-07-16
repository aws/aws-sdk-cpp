/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/AgentInputMessageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace AgentInputMessageTypeMapper {

static const int normal_HASH = HashingUtils::HashString("normal");
static const int confirmation_response_HASH = HashingUtils::HashString("confirmation_response");

AgentInputMessageType GetAgentInputMessageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == normal_HASH) {
    return AgentInputMessageType::normal;
  } else if (hashCode == confirmation_response_HASH) {
    return AgentInputMessageType::confirmation_response;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentInputMessageType>(hashCode);
  }

  return AgentInputMessageType::NOT_SET;
}

Aws::String GetNameForAgentInputMessageType(AgentInputMessageType enumValue) {
  switch (enumValue) {
    case AgentInputMessageType::NOT_SET:
      return {};
    case AgentInputMessageType::normal:
      return "normal";
    case AgentInputMessageType::confirmation_response:
      return "confirmation_response";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentInputMessageTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws

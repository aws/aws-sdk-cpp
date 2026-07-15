/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/AgentOutputMessageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace AgentOutputMessageTypeMapper {

static const int INITIAL_GREETING_HASH = HashingUtils::HashString("INITIAL_GREETING");
static const int normal_HASH = HashingUtils::HashString("normal");
static const int confirmation_HASH = HashingUtils::HashString("confirmation");
static const int complete_HASH = HashingUtils::HashString("complete");
static const int error_HASH = HashingUtils::HashString("error");
static const int options_HASH = HashingUtils::HashString("options");
static const int choices_HASH = HashingUtils::HashString("choices");

AgentOutputMessageType GetAgentOutputMessageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INITIAL_GREETING_HASH) {
    return AgentOutputMessageType::INITIAL_GREETING;
  } else if (hashCode == normal_HASH) {
    return AgentOutputMessageType::normal;
  } else if (hashCode == confirmation_HASH) {
    return AgentOutputMessageType::confirmation;
  } else if (hashCode == complete_HASH) {
    return AgentOutputMessageType::complete;
  } else if (hashCode == error_HASH) {
    return AgentOutputMessageType::error;
  } else if (hashCode == options_HASH) {
    return AgentOutputMessageType::options;
  } else if (hashCode == choices_HASH) {
    return AgentOutputMessageType::choices;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentOutputMessageType>(hashCode);
  }

  return AgentOutputMessageType::NOT_SET;
}

Aws::String GetNameForAgentOutputMessageType(AgentOutputMessageType enumValue) {
  switch (enumValue) {
    case AgentOutputMessageType::NOT_SET:
      return {};
    case AgentOutputMessageType::INITIAL_GREETING:
      return "INITIAL_GREETING";
    case AgentOutputMessageType::normal:
      return "normal";
    case AgentOutputMessageType::confirmation:
      return "confirmation";
    case AgentOutputMessageType::complete:
      return "complete";
    case AgentOutputMessageType::error:
      return "error";
    case AgentOutputMessageType::options:
      return "options";
    case AgentOutputMessageType::choices:
      return "choices";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentOutputMessageTypeMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws

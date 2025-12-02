/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EvaluatorLevel.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace EvaluatorLevelMapper {

static const int TOOL_CALL_HASH = HashingUtils::HashString("TOOL_CALL");
static const int TRACE_HASH = HashingUtils::HashString("TRACE");
static const int SESSION_HASH = HashingUtils::HashString("SESSION");

EvaluatorLevel GetEvaluatorLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOOL_CALL_HASH) {
    return EvaluatorLevel::TOOL_CALL;
  } else if (hashCode == TRACE_HASH) {
    return EvaluatorLevel::TRACE;
  } else if (hashCode == SESSION_HASH) {
    return EvaluatorLevel::SESSION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluatorLevel>(hashCode);
  }

  return EvaluatorLevel::NOT_SET;
}

Aws::String GetNameForEvaluatorLevel(EvaluatorLevel enumValue) {
  switch (enumValue) {
    case EvaluatorLevel::NOT_SET:
      return {};
    case EvaluatorLevel::TOOL_CALL:
      return "TOOL_CALL";
    case EvaluatorLevel::TRACE:
      return "TRACE";
    case EvaluatorLevel::SESSION:
      return "SESSION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluatorLevelMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

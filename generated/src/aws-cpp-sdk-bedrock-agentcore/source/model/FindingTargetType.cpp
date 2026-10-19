/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FindingTargetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace FindingTargetTypeMapper {

static const int SPAN_ID_HASH = HashingUtils::HashString("SPAN_ID");
static const int TRACE_ID_HASH = HashingUtils::HashString("TRACE_ID");
static const int SPAN_NAME_HASH = HashingUtils::HashString("SPAN_NAME");

FindingTargetType GetFindingTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPAN_ID_HASH) {
    return FindingTargetType::SPAN_ID;
  } else if (hashCode == TRACE_ID_HASH) {
    return FindingTargetType::TRACE_ID;
  } else if (hashCode == SPAN_NAME_HASH) {
    return FindingTargetType::SPAN_NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingTargetType>(hashCode);
  }

  return FindingTargetType::NOT_SET;
}

Aws::String GetNameForFindingTargetType(FindingTargetType enumValue) {
  switch (enumValue) {
    case FindingTargetType::NOT_SET:
      return {};
    case FindingTargetType::SPAN_ID:
      return "SPAN_ID";
    case FindingTargetType::TRACE_ID:
      return "TRACE_ID";
    case FindingTargetType::SPAN_NAME:
      return "SPAN_NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingTargetTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

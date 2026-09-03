/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ResultDestination.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ResultDestinationMapper {

static const int DEDICATED_LOG_GROUP_HASH = HashingUtils::HashString("DEDICATED_LOG_GROUP");
static const int SOURCE_LOG_GROUP_HASH = HashingUtils::HashString("SOURCE_LOG_GROUP");

ResultDestination GetResultDestinationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEDICATED_LOG_GROUP_HASH) {
    return ResultDestination::DEDICATED_LOG_GROUP;
  } else if (hashCode == SOURCE_LOG_GROUP_HASH) {
    return ResultDestination::SOURCE_LOG_GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResultDestination>(hashCode);
  }

  return ResultDestination::NOT_SET;
}

Aws::String GetNameForResultDestination(ResultDestination enumValue) {
  switch (enumValue) {
    case ResultDestination::NOT_SET:
      return {};
    case ResultDestination::DEDICATED_LOG_GROUP:
      return "DEDICATED_LOG_GROUP";
    case ResultDestination::SOURCE_LOG_GROUP:
      return "SOURCE_LOG_GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResultDestinationMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

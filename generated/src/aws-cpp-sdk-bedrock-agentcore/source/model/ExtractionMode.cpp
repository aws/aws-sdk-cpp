/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ExtractionModeMapper {

static const int SKIP_HASH = HashingUtils::HashString("SKIP");

ExtractionMode GetExtractionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SKIP_HASH) {
    return ExtractionMode::SKIP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtractionMode>(hashCode);
  }

  return ExtractionMode::NOT_SET;
}

Aws::String GetNameForExtractionMode(ExtractionMode enumValue) {
  switch (enumValue) {
    case ExtractionMode::NOT_SET:
      return {};
    case ExtractionMode::SKIP:
      return "SKIP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtractionModeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

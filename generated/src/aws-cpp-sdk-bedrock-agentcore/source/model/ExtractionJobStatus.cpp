/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExtractionJobStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ExtractionJobStatusMapper {

static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ExtractionJobStatus GetExtractionJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILED_HASH) {
    return ExtractionJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtractionJobStatus>(hashCode);
  }

  return ExtractionJobStatus::NOT_SET;
}

Aws::String GetNameForExtractionJobStatus(ExtractionJobStatus enumValue) {
  switch (enumValue) {
    case ExtractionJobStatus::NOT_SET:
      return {};
    case ExtractionJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtractionJobStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

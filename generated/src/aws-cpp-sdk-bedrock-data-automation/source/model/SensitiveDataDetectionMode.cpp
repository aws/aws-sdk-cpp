/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/SensitiveDataDetectionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace SensitiveDataDetectionModeMapper {

static const int DETECTION_HASH = HashingUtils::HashString("DETECTION");
static const int DETECTION_AND_REDACTION_HASH = HashingUtils::HashString("DETECTION_AND_REDACTION");

SensitiveDataDetectionMode GetSensitiveDataDetectionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DETECTION_HASH) {
    return SensitiveDataDetectionMode::DETECTION;
  } else if (hashCode == DETECTION_AND_REDACTION_HASH) {
    return SensitiveDataDetectionMode::DETECTION_AND_REDACTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SensitiveDataDetectionMode>(hashCode);
  }

  return SensitiveDataDetectionMode::NOT_SET;
}

Aws::String GetNameForSensitiveDataDetectionMode(SensitiveDataDetectionMode enumValue) {
  switch (enumValue) {
    case SensitiveDataDetectionMode::NOT_SET:
      return {};
    case SensitiveDataDetectionMode::DETECTION:
      return "DETECTION";
    case SensitiveDataDetectionMode::DETECTION_AND_REDACTION:
      return "DETECTION_AND_REDACTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SensitiveDataDetectionModeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws

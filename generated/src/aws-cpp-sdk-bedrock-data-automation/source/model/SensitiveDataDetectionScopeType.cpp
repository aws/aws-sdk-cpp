/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/SensitiveDataDetectionScopeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace SensitiveDataDetectionScopeTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");

SensitiveDataDetectionScopeType GetSensitiveDataDetectionScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return SensitiveDataDetectionScopeType::STANDARD;
  } else if (hashCode == CUSTOM_HASH) {
    return SensitiveDataDetectionScopeType::CUSTOM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SensitiveDataDetectionScopeType>(hashCode);
  }

  return SensitiveDataDetectionScopeType::NOT_SET;
}

Aws::String GetNameForSensitiveDataDetectionScopeType(SensitiveDataDetectionScopeType enumValue) {
  switch (enumValue) {
    case SensitiveDataDetectionScopeType::NOT_SET:
      return {};
    case SensitiveDataDetectionScopeType::STANDARD:
      return "STANDARD";
    case SensitiveDataDetectionScopeType::CUSTOM:
      return "CUSTOM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SensitiveDataDetectionScopeTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws

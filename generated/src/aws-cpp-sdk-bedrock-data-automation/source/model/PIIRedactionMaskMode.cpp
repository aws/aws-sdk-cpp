/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/PIIRedactionMaskMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace PIIRedactionMaskModeMapper {

static const int PII_HASH = HashingUtils::HashString("PII");
static const int ENTITY_TYPE_HASH = HashingUtils::HashString("ENTITY_TYPE");

PIIRedactionMaskMode GetPIIRedactionMaskModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PII_HASH) {
    return PIIRedactionMaskMode::PII;
  } else if (hashCode == ENTITY_TYPE_HASH) {
    return PIIRedactionMaskMode::ENTITY_TYPE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PIIRedactionMaskMode>(hashCode);
  }

  return PIIRedactionMaskMode::NOT_SET;
}

Aws::String GetNameForPIIRedactionMaskMode(PIIRedactionMaskMode enumValue) {
  switch (enumValue) {
    case PIIRedactionMaskMode::NOT_SET:
      return {};
    case PIIRedactionMaskMode::PII:
      return "PII";
    case PIIRedactionMaskMode::ENTITY_TYPE:
      return "ENTITY_TYPE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PIIRedactionMaskModeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws

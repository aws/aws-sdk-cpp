/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContextualGroundingTierName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace GuardrailContextualGroundingTierNameMapper {

static const int CLASSIC_HASH = HashingUtils::HashString("CLASSIC");
static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");

GuardrailContextualGroundingTierName GetGuardrailContextualGroundingTierNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLASSIC_HASH) {
    return GuardrailContextualGroundingTierName::CLASSIC;
  } else if (hashCode == STANDARD_HASH) {
    return GuardrailContextualGroundingTierName::STANDARD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailContextualGroundingTierName>(hashCode);
  }

  return GuardrailContextualGroundingTierName::NOT_SET;
}

Aws::String GetNameForGuardrailContextualGroundingTierName(GuardrailContextualGroundingTierName enumValue) {
  switch (enumValue) {
    case GuardrailContextualGroundingTierName::NOT_SET:
      return {};
    case GuardrailContextualGroundingTierName::CLASSIC:
      return "CLASSIC";
    case GuardrailContextualGroundingTierName::STANDARD:
      return "STANDARD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailContextualGroundingTierNameMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

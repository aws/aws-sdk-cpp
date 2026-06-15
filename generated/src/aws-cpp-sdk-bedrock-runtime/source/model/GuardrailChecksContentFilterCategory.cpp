/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterCategory.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace GuardrailChecksContentFilterCategoryMapper {

static const int VIOLENCE_HASH = HashingUtils::HashString("VIOLENCE");
static const int HATE_HASH = HashingUtils::HashString("HATE");
static const int SEXUAL_HASH = HashingUtils::HashString("SEXUAL");
static const int MISCONDUCT_HASH = HashingUtils::HashString("MISCONDUCT");
static const int INSULTS_HASH = HashingUtils::HashString("INSULTS");

GuardrailChecksContentFilterCategory GetGuardrailChecksContentFilterCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VIOLENCE_HASH) {
    return GuardrailChecksContentFilterCategory::VIOLENCE;
  } else if (hashCode == HATE_HASH) {
    return GuardrailChecksContentFilterCategory::HATE;
  } else if (hashCode == SEXUAL_HASH) {
    return GuardrailChecksContentFilterCategory::SEXUAL;
  } else if (hashCode == MISCONDUCT_HASH) {
    return GuardrailChecksContentFilterCategory::MISCONDUCT;
  } else if (hashCode == INSULTS_HASH) {
    return GuardrailChecksContentFilterCategory::INSULTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailChecksContentFilterCategory>(hashCode);
  }

  return GuardrailChecksContentFilterCategory::NOT_SET;
}

Aws::String GetNameForGuardrailChecksContentFilterCategory(GuardrailChecksContentFilterCategory enumValue) {
  switch (enumValue) {
    case GuardrailChecksContentFilterCategory::NOT_SET:
      return {};
    case GuardrailChecksContentFilterCategory::VIOLENCE:
      return "VIOLENCE";
    case GuardrailChecksContentFilterCategory::HATE:
      return "HATE";
    case GuardrailChecksContentFilterCategory::SEXUAL:
      return "SEXUAL";
    case GuardrailChecksContentFilterCategory::MISCONDUCT:
      return "MISCONDUCT";
    case GuardrailChecksContentFilterCategory::INSULTS:
      return "INSULTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailChecksContentFilterCategoryMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

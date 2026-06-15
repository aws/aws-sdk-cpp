/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackCategory.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace GuardrailChecksPromptAttackCategoryMapper {

static const int JAILBREAK_HASH = HashingUtils::HashString("JAILBREAK");
static const int PROMPT_INJECTION_HASH = HashingUtils::HashString("PROMPT_INJECTION");
static const int PROMPT_LEAKAGE_HASH = HashingUtils::HashString("PROMPT_LEAKAGE");

GuardrailChecksPromptAttackCategory GetGuardrailChecksPromptAttackCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JAILBREAK_HASH) {
    return GuardrailChecksPromptAttackCategory::JAILBREAK;
  } else if (hashCode == PROMPT_INJECTION_HASH) {
    return GuardrailChecksPromptAttackCategory::PROMPT_INJECTION;
  } else if (hashCode == PROMPT_LEAKAGE_HASH) {
    return GuardrailChecksPromptAttackCategory::PROMPT_LEAKAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailChecksPromptAttackCategory>(hashCode);
  }

  return GuardrailChecksPromptAttackCategory::NOT_SET;
}

Aws::String GetNameForGuardrailChecksPromptAttackCategory(GuardrailChecksPromptAttackCategory enumValue) {
  switch (enumValue) {
    case GuardrailChecksPromptAttackCategory::NOT_SET:
      return {};
    case GuardrailChecksPromptAttackCategory::JAILBREAK:
      return "JAILBREAK";
    case GuardrailChecksPromptAttackCategory::PROMPT_INJECTION:
      return "PROMPT_INJECTION";
    case GuardrailChecksPromptAttackCategory::PROMPT_LEAKAGE:
      return "PROMPT_LEAKAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailChecksPromptAttackCategoryMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

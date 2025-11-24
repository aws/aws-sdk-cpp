/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailOwnership.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace GuardrailOwnershipMapper {

static const int SELF_HASH = HashingUtils::HashString("SELF");
static const int CROSS_ACCOUNT_HASH = HashingUtils::HashString("CROSS_ACCOUNT");

GuardrailOwnership GetGuardrailOwnershipForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELF_HASH) {
    return GuardrailOwnership::SELF;
  } else if (hashCode == CROSS_ACCOUNT_HASH) {
    return GuardrailOwnership::CROSS_ACCOUNT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailOwnership>(hashCode);
  }

  return GuardrailOwnership::NOT_SET;
}

Aws::String GetNameForGuardrailOwnership(GuardrailOwnership enumValue) {
  switch (enumValue) {
    case GuardrailOwnership::NOT_SET:
      return {};
    case GuardrailOwnership::SELF:
      return "SELF";
    case GuardrailOwnership::CROSS_ACCOUNT:
      return "CROSS_ACCOUNT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailOwnershipMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

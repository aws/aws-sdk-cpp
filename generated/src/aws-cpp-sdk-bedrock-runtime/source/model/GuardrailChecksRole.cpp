/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksRole.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace GuardrailChecksRoleMapper {

static const int user_HASH = HashingUtils::HashString("user");
static const int assistant_HASH = HashingUtils::HashString("assistant");
static const int system_HASH = HashingUtils::HashString("system");

GuardrailChecksRole GetGuardrailChecksRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == user_HASH) {
    return GuardrailChecksRole::user;
  } else if (hashCode == assistant_HASH) {
    return GuardrailChecksRole::assistant;
  } else if (hashCode == system_HASH) {
    return GuardrailChecksRole::system;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailChecksRole>(hashCode);
  }

  return GuardrailChecksRole::NOT_SET;
}

Aws::String GetNameForGuardrailChecksRole(GuardrailChecksRole enumValue) {
  switch (enumValue) {
    case GuardrailChecksRole::NOT_SET:
      return {};
    case GuardrailChecksRole::user:
      return "user";
    case GuardrailChecksRole::assistant:
      return "assistant";
    case GuardrailChecksRole::system:
      return "system";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailChecksRoleMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailOrigin.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace GuardrailOriginMapper {

static const int REQUEST_HASH = HashingUtils::HashString("REQUEST");
static const int ACCOUNT_ENFORCED_HASH = HashingUtils::HashString("ACCOUNT_ENFORCED");
static const int ORGANIZATION_ENFORCED_HASH = HashingUtils::HashString("ORGANIZATION_ENFORCED");

GuardrailOrigin GetGuardrailOriginForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUEST_HASH) {
    return GuardrailOrigin::REQUEST;
  } else if (hashCode == ACCOUNT_ENFORCED_HASH) {
    return GuardrailOrigin::ACCOUNT_ENFORCED;
  } else if (hashCode == ORGANIZATION_ENFORCED_HASH) {
    return GuardrailOrigin::ORGANIZATION_ENFORCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailOrigin>(hashCode);
  }

  return GuardrailOrigin::NOT_SET;
}

Aws::String GetNameForGuardrailOrigin(GuardrailOrigin enumValue) {
  switch (enumValue) {
    case GuardrailOrigin::NOT_SET:
      return {};
    case GuardrailOrigin::REQUEST:
      return "REQUEST";
    case GuardrailOrigin::ACCOUNT_ENFORCED:
      return "ACCOUNT_ENFORCED";
    case GuardrailOrigin::ORGANIZATION_ENFORCED:
      return "ORGANIZATION_ENFORCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailOriginMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

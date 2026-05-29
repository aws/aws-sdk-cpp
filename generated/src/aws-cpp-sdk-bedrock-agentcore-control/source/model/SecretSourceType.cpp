/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SecretSourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace SecretSourceTypeMapper {

static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");

SecretSourceType GetSecretSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_HASH) {
    return SecretSourceType::MANAGED;
  } else if (hashCode == EXTERNAL_HASH) {
    return SecretSourceType::EXTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecretSourceType>(hashCode);
  }

  return SecretSourceType::NOT_SET;
}

Aws::String GetNameForSecretSourceType(SecretSourceType enumValue) {
  switch (enumValue) {
    case SecretSourceType::NOT_SET:
      return {};
    case SecretSourceType::MANAGED:
      return "MANAGED";
    case SecretSourceType::EXTERNAL:
      return "EXTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecretSourceTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

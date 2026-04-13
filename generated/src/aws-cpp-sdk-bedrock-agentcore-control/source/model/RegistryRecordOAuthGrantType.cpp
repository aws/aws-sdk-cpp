/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryRecordOAuthGrantType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace RegistryRecordOAuthGrantTypeMapper {

static const int CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("CLIENT_CREDENTIALS");

RegistryRecordOAuthGrantType GetRegistryRecordOAuthGrantTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_CREDENTIALS_HASH) {
    return RegistryRecordOAuthGrantType::CLIENT_CREDENTIALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegistryRecordOAuthGrantType>(hashCode);
  }

  return RegistryRecordOAuthGrantType::NOT_SET;
}

Aws::String GetNameForRegistryRecordOAuthGrantType(RegistryRecordOAuthGrantType enumValue) {
  switch (enumValue) {
    case RegistryRecordOAuthGrantType::NOT_SET:
      return {};
    case RegistryRecordOAuthGrantType::CLIENT_CREDENTIALS:
      return "CLIENT_CREDENTIALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegistryRecordOAuthGrantTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

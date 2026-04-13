/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryRecordCredentialProviderType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace RegistryRecordCredentialProviderTypeMapper {

static const int OAUTH_HASH = HashingUtils::HashString("OAUTH");
static const int IAM_HASH = HashingUtils::HashString("IAM");

RegistryRecordCredentialProviderType GetRegistryRecordCredentialProviderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OAUTH_HASH) {
    return RegistryRecordCredentialProviderType::OAUTH;
  } else if (hashCode == IAM_HASH) {
    return RegistryRecordCredentialProviderType::IAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegistryRecordCredentialProviderType>(hashCode);
  }

  return RegistryRecordCredentialProviderType::NOT_SET;
}

Aws::String GetNameForRegistryRecordCredentialProviderType(RegistryRecordCredentialProviderType enumValue) {
  switch (enumValue) {
    case RegistryRecordCredentialProviderType::NOT_SET:
      return {};
    case RegistryRecordCredentialProviderType::OAUTH:
      return "OAUTH";
    case RegistryRecordCredentialProviderType::IAM:
      return "IAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegistryRecordCredentialProviderTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

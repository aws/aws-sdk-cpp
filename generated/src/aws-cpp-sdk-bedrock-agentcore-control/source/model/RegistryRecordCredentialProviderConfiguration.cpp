/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryRecordCredentialProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RegistryRecordCredentialProviderConfiguration::RegistryRecordCredentialProviderConfiguration(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordCredentialProviderConfiguration& RegistryRecordCredentialProviderConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("credentialProviderType")) {
    m_credentialProviderType = RegistryRecordCredentialProviderTypeMapper::GetRegistryRecordCredentialProviderTypeForName(
        jsonValue.GetString("credentialProviderType"));
    m_credentialProviderTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProvider")) {
    m_credentialProvider = jsonValue.GetObject("credentialProvider");
    m_credentialProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordCredentialProviderConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_credentialProviderTypeHasBeenSet) {
    payload.WithString("credentialProviderType", RegistryRecordCredentialProviderTypeMapper::GetNameForRegistryRecordCredentialProviderType(
                                                     m_credentialProviderType));
  }

  if (m_credentialProviderHasBeenSet) {
    payload.WithObject("credentialProvider", m_credentialProvider.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

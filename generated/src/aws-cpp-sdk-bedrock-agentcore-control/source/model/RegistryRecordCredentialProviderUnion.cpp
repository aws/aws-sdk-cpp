/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RegistryRecordCredentialProviderUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RegistryRecordCredentialProviderUnion::RegistryRecordCredentialProviderUnion(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordCredentialProviderUnion& RegistryRecordCredentialProviderUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oauthCredentialProvider")) {
    m_oauthCredentialProvider = jsonValue.GetObject("oauthCredentialProvider");
    m_oauthCredentialProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamCredentialProvider")) {
    m_iamCredentialProvider = jsonValue.GetObject("iamCredentialProvider");
    m_iamCredentialProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordCredentialProviderUnion::Jsonize() const {
  JsonValue payload;

  if (m_oauthCredentialProviderHasBeenSet) {
    payload.WithObject("oauthCredentialProvider", m_oauthCredentialProvider.Jsonize());
  }

  if (m_iamCredentialProviderHasBeenSet) {
    payload.WithObject("iamCredentialProvider", m_iamCredentialProvider.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

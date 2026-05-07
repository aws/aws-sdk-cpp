/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PaymentCredentialProviderConfiguration::PaymentCredentialProviderConfiguration(JsonView jsonValue) { *this = jsonValue; }

PaymentCredentialProviderConfiguration& PaymentCredentialProviderConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("credentialProviderArn")) {
    m_credentialProviderArn = jsonValue.GetString("credentialProviderArn");
    m_credentialProviderArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentCredentialProviderConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_credentialProviderArnHasBeenSet) {
    payload.WithString("credentialProviderArn", m_credentialProviderArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

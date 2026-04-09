/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FromUrlSynchronizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

FromUrlSynchronizationConfiguration::FromUrlSynchronizationConfiguration(JsonView jsonValue) { *this = jsonValue; }

FromUrlSynchronizationConfiguration& FromUrlSynchronizationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialProviderConfigurations")) {
    Aws::Utils::Array<JsonView> credentialProviderConfigurationsJsonList = jsonValue.GetArray("credentialProviderConfigurations");
    for (unsigned credentialProviderConfigurationsIndex = 0;
         credentialProviderConfigurationsIndex < credentialProviderConfigurationsJsonList.GetLength();
         ++credentialProviderConfigurationsIndex) {
      m_credentialProviderConfigurations.push_back(
          credentialProviderConfigurationsJsonList[credentialProviderConfigurationsIndex].AsObject());
    }
    m_credentialProviderConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue FromUrlSynchronizationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_credentialProviderConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> credentialProviderConfigurationsJsonList(m_credentialProviderConfigurations.size());
    for (unsigned credentialProviderConfigurationsIndex = 0;
         credentialProviderConfigurationsIndex < credentialProviderConfigurationsJsonList.GetLength();
         ++credentialProviderConfigurationsIndex) {
      credentialProviderConfigurationsJsonList[credentialProviderConfigurationsIndex].AsObject(
          m_credentialProviderConfigurations[credentialProviderConfigurationsIndex].Jsonize());
    }
    payload.WithArray("credentialProviderConfigurations", std::move(credentialProviderConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

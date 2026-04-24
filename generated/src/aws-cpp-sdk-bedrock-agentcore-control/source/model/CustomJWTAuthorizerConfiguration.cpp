/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomJWTAuthorizerConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CustomJWTAuthorizerConfiguration::CustomJWTAuthorizerConfiguration(JsonView jsonValue) { *this = jsonValue; }

CustomJWTAuthorizerConfiguration& CustomJWTAuthorizerConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("discoveryUrl")) {
    m_discoveryUrl = jsonValue.GetString("discoveryUrl");
    m_discoveryUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedAudience")) {
    Aws::Utils::Array<JsonView> allowedAudienceJsonList = jsonValue.GetArray("allowedAudience");
    for (unsigned allowedAudienceIndex = 0; allowedAudienceIndex < allowedAudienceJsonList.GetLength(); ++allowedAudienceIndex) {
      m_allowedAudience.push_back(allowedAudienceJsonList[allowedAudienceIndex].AsString());
    }
    m_allowedAudienceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedClients")) {
    Aws::Utils::Array<JsonView> allowedClientsJsonList = jsonValue.GetArray("allowedClients");
    for (unsigned allowedClientsIndex = 0; allowedClientsIndex < allowedClientsJsonList.GetLength(); ++allowedClientsIndex) {
      m_allowedClients.push_back(allowedClientsJsonList[allowedClientsIndex].AsString());
    }
    m_allowedClientsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedScopes")) {
    Aws::Utils::Array<JsonView> allowedScopesJsonList = jsonValue.GetArray("allowedScopes");
    for (unsigned allowedScopesIndex = 0; allowedScopesIndex < allowedScopesJsonList.GetLength(); ++allowedScopesIndex) {
      m_allowedScopes.push_back(allowedScopesJsonList[allowedScopesIndex].AsString());
    }
    m_allowedScopesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customClaims")) {
    Aws::Utils::Array<JsonView> customClaimsJsonList = jsonValue.GetArray("customClaims");
    for (unsigned customClaimsIndex = 0; customClaimsIndex < customClaimsJsonList.GetLength(); ++customClaimsIndex) {
      m_customClaims.push_back(customClaimsJsonList[customClaimsIndex].AsObject());
    }
    m_customClaimsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpoint")) {
    m_privateEndpoint = jsonValue.GetObject("privateEndpoint");
    m_privateEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateEndpointOverrides")) {
    Aws::Utils::Array<JsonView> privateEndpointOverridesJsonList = jsonValue.GetArray("privateEndpointOverrides");
    for (unsigned privateEndpointOverridesIndex = 0; privateEndpointOverridesIndex < privateEndpointOverridesJsonList.GetLength();
         ++privateEndpointOverridesIndex) {
      m_privateEndpointOverrides.push_back(privateEndpointOverridesJsonList[privateEndpointOverridesIndex].AsObject());
    }
    m_privateEndpointOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomJWTAuthorizerConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_discoveryUrlHasBeenSet) {
    payload.WithString("discoveryUrl", m_discoveryUrl);
  }

  if (m_allowedAudienceHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedAudienceJsonList(m_allowedAudience.size());
    for (unsigned allowedAudienceIndex = 0; allowedAudienceIndex < allowedAudienceJsonList.GetLength(); ++allowedAudienceIndex) {
      allowedAudienceJsonList[allowedAudienceIndex].AsString(m_allowedAudience[allowedAudienceIndex]);
    }
    payload.WithArray("allowedAudience", std::move(allowedAudienceJsonList));
  }

  if (m_allowedClientsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedClientsJsonList(m_allowedClients.size());
    for (unsigned allowedClientsIndex = 0; allowedClientsIndex < allowedClientsJsonList.GetLength(); ++allowedClientsIndex) {
      allowedClientsJsonList[allowedClientsIndex].AsString(m_allowedClients[allowedClientsIndex]);
    }
    payload.WithArray("allowedClients", std::move(allowedClientsJsonList));
  }

  if (m_allowedScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedScopesJsonList(m_allowedScopes.size());
    for (unsigned allowedScopesIndex = 0; allowedScopesIndex < allowedScopesJsonList.GetLength(); ++allowedScopesIndex) {
      allowedScopesJsonList[allowedScopesIndex].AsString(m_allowedScopes[allowedScopesIndex]);
    }
    payload.WithArray("allowedScopes", std::move(allowedScopesJsonList));
  }

  if (m_customClaimsHasBeenSet) {
    Aws::Utils::Array<JsonValue> customClaimsJsonList(m_customClaims.size());
    for (unsigned customClaimsIndex = 0; customClaimsIndex < customClaimsJsonList.GetLength(); ++customClaimsIndex) {
      customClaimsJsonList[customClaimsIndex].AsObject(m_customClaims[customClaimsIndex].Jsonize());
    }
    payload.WithArray("customClaims", std::move(customClaimsJsonList));
  }

  if (m_privateEndpointHasBeenSet) {
    payload.WithObject("privateEndpoint", m_privateEndpoint.Jsonize());
  }

  if (m_privateEndpointOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> privateEndpointOverridesJsonList(m_privateEndpointOverrides.size());
    for (unsigned privateEndpointOverridesIndex = 0; privateEndpointOverridesIndex < privateEndpointOverridesJsonList.GetLength();
         ++privateEndpointOverridesIndex) {
      privateEndpointOverridesJsonList[privateEndpointOverridesIndex].AsObject(
          m_privateEndpointOverrides[privateEndpointOverridesIndex].Jsonize());
    }
    payload.WithArray("privateEndpointOverrides", std::move(privateEndpointOverridesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

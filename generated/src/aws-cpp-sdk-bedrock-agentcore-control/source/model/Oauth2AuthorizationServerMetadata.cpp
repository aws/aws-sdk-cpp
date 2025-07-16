/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Oauth2AuthorizationServerMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

Oauth2AuthorizationServerMetadata::Oauth2AuthorizationServerMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

Oauth2AuthorizationServerMetadata& Oauth2AuthorizationServerMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("authorizationEndpoint");
    m_authorizationEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenEndpoint"))
  {
    m_tokenEndpoint = jsonValue.GetString("tokenEndpoint");
    m_tokenEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseTypes"))
  {
    Aws::Utils::Array<JsonView> responseTypesJsonList = jsonValue.GetArray("responseTypes");
    for(unsigned responseTypesIndex = 0; responseTypesIndex < responseTypesJsonList.GetLength(); ++responseTypesIndex)
    {
      m_responseTypes.push_back(responseTypesJsonList[responseTypesIndex].AsString());
    }
    m_responseTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Oauth2AuthorizationServerMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_authorizationEndpointHasBeenSet)
  {
   payload.WithString("authorizationEndpoint", m_authorizationEndpoint);

  }

  if(m_tokenEndpointHasBeenSet)
  {
   payload.WithString("tokenEndpoint", m_tokenEndpoint);

  }

  if(m_responseTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> responseTypesJsonList(m_responseTypes.size());
   for(unsigned responseTypesIndex = 0; responseTypesIndex < responseTypesJsonList.GetLength(); ++responseTypesIndex)
   {
     responseTypesJsonList[responseTypesIndex].AsString(m_responseTypes[responseTypesIndex]);
   }
   payload.WithArray("responseTypes", std::move(responseTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws

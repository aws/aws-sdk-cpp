/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OAuthCredentialProvider.h>
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

OAuthCredentialProvider::OAuthCredentialProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuthCredentialProvider& OAuthCredentialProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerArn"))
  {
    m_providerArn = jsonValue.GetString("providerArn");
    m_providerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scopes"))
  {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("scopes");
    for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
    {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customParameters"))
  {
    Aws::Map<Aws::String, JsonView> customParametersJsonMap = jsonValue.GetObject("customParameters").GetAllObjects();
    for(auto& customParametersItem : customParametersJsonMap)
    {
      m_customParameters[customParametersItem.first] = customParametersItem.second.AsString();
    }
    m_customParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthCredentialProvider::Jsonize() const
{
  JsonValue payload;

  if(m_providerArnHasBeenSet)
  {
   payload.WithString("providerArn", m_providerArn);

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("scopes", std::move(scopesJsonList));

  }

  if(m_customParametersHasBeenSet)
  {
   JsonValue customParametersJsonMap;
   for(auto& customParametersItem : m_customParameters)
   {
     customParametersJsonMap.WithString(customParametersItem.first, customParametersItem.second);
   }
   payload.WithObject("customParameters", std::move(customParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws

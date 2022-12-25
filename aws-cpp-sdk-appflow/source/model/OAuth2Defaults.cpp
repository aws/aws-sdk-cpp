/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuth2Defaults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

OAuth2Defaults::OAuth2Defaults() : 
    m_oauthScopesHasBeenSet(false),
    m_tokenUrlsHasBeenSet(false),
    m_authCodeUrlsHasBeenSet(false),
    m_oauth2GrantTypesSupportedHasBeenSet(false),
    m_oauth2CustomPropertiesHasBeenSet(false)
{
}

OAuth2Defaults::OAuth2Defaults(JsonView jsonValue) : 
    m_oauthScopesHasBeenSet(false),
    m_tokenUrlsHasBeenSet(false),
    m_authCodeUrlsHasBeenSet(false),
    m_oauth2GrantTypesSupportedHasBeenSet(false),
    m_oauth2CustomPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

OAuth2Defaults& OAuth2Defaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oauthScopes"))
  {
    Aws::Utils::Array<JsonView> oauthScopesJsonList = jsonValue.GetArray("oauthScopes");
    for(unsigned oauthScopesIndex = 0; oauthScopesIndex < oauthScopesJsonList.GetLength(); ++oauthScopesIndex)
    {
      m_oauthScopes.push_back(oauthScopesJsonList[oauthScopesIndex].AsString());
    }
    m_oauthScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenUrls"))
  {
    Aws::Utils::Array<JsonView> tokenUrlsJsonList = jsonValue.GetArray("tokenUrls");
    for(unsigned tokenUrlsIndex = 0; tokenUrlsIndex < tokenUrlsJsonList.GetLength(); ++tokenUrlsIndex)
    {
      m_tokenUrls.push_back(tokenUrlsJsonList[tokenUrlsIndex].AsString());
    }
    m_tokenUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authCodeUrls"))
  {
    Aws::Utils::Array<JsonView> authCodeUrlsJsonList = jsonValue.GetArray("authCodeUrls");
    for(unsigned authCodeUrlsIndex = 0; authCodeUrlsIndex < authCodeUrlsJsonList.GetLength(); ++authCodeUrlsIndex)
    {
      m_authCodeUrls.push_back(authCodeUrlsJsonList[authCodeUrlsIndex].AsString());
    }
    m_authCodeUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oauth2GrantTypesSupported"))
  {
    Aws::Utils::Array<JsonView> oauth2GrantTypesSupportedJsonList = jsonValue.GetArray("oauth2GrantTypesSupported");
    for(unsigned oauth2GrantTypesSupportedIndex = 0; oauth2GrantTypesSupportedIndex < oauth2GrantTypesSupportedJsonList.GetLength(); ++oauth2GrantTypesSupportedIndex)
    {
      m_oauth2GrantTypesSupported.push_back(OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(oauth2GrantTypesSupportedJsonList[oauth2GrantTypesSupportedIndex].AsString()));
    }
    m_oauth2GrantTypesSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oauth2CustomProperties"))
  {
    Aws::Utils::Array<JsonView> oauth2CustomPropertiesJsonList = jsonValue.GetArray("oauth2CustomProperties");
    for(unsigned oauth2CustomPropertiesIndex = 0; oauth2CustomPropertiesIndex < oauth2CustomPropertiesJsonList.GetLength(); ++oauth2CustomPropertiesIndex)
    {
      m_oauth2CustomProperties.push_back(oauth2CustomPropertiesJsonList[oauth2CustomPropertiesIndex].AsObject());
    }
    m_oauth2CustomPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue OAuth2Defaults::Jsonize() const
{
  JsonValue payload;

  if(m_oauthScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oauthScopesJsonList(m_oauthScopes.size());
   for(unsigned oauthScopesIndex = 0; oauthScopesIndex < oauthScopesJsonList.GetLength(); ++oauthScopesIndex)
   {
     oauthScopesJsonList[oauthScopesIndex].AsString(m_oauthScopes[oauthScopesIndex]);
   }
   payload.WithArray("oauthScopes", std::move(oauthScopesJsonList));

  }

  if(m_tokenUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenUrlsJsonList(m_tokenUrls.size());
   for(unsigned tokenUrlsIndex = 0; tokenUrlsIndex < tokenUrlsJsonList.GetLength(); ++tokenUrlsIndex)
   {
     tokenUrlsJsonList[tokenUrlsIndex].AsString(m_tokenUrls[tokenUrlsIndex]);
   }
   payload.WithArray("tokenUrls", std::move(tokenUrlsJsonList));

  }

  if(m_authCodeUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authCodeUrlsJsonList(m_authCodeUrls.size());
   for(unsigned authCodeUrlsIndex = 0; authCodeUrlsIndex < authCodeUrlsJsonList.GetLength(); ++authCodeUrlsIndex)
   {
     authCodeUrlsJsonList[authCodeUrlsIndex].AsString(m_authCodeUrls[authCodeUrlsIndex]);
   }
   payload.WithArray("authCodeUrls", std::move(authCodeUrlsJsonList));

  }

  if(m_oauth2GrantTypesSupportedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oauth2GrantTypesSupportedJsonList(m_oauth2GrantTypesSupported.size());
   for(unsigned oauth2GrantTypesSupportedIndex = 0; oauth2GrantTypesSupportedIndex < oauth2GrantTypesSupportedJsonList.GetLength(); ++oauth2GrantTypesSupportedIndex)
   {
     oauth2GrantTypesSupportedJsonList[oauth2GrantTypesSupportedIndex].AsString(OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oauth2GrantTypesSupported[oauth2GrantTypesSupportedIndex]));
   }
   payload.WithArray("oauth2GrantTypesSupported", std::move(oauth2GrantTypesSupportedJsonList));

  }

  if(m_oauth2CustomPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oauth2CustomPropertiesJsonList(m_oauth2CustomProperties.size());
   for(unsigned oauth2CustomPropertiesIndex = 0; oauth2CustomPropertiesIndex < oauth2CustomPropertiesJsonList.GetLength(); ++oauth2CustomPropertiesIndex)
   {
     oauth2CustomPropertiesJsonList[oauth2CustomPropertiesIndex].AsObject(m_oauth2CustomProperties[oauth2CustomPropertiesIndex].Jsonize());
   }
   payload.WithArray("oauth2CustomProperties", std::move(oauth2CustomPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

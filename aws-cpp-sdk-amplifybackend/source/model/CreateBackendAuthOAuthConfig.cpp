/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendAuthOAuthConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

CreateBackendAuthOAuthConfig::CreateBackendAuthOAuthConfig() : 
    m_domainPrefixHasBeenSet(false),
    m_oAuthGrantType(OAuthGrantType::NOT_SET),
    m_oAuthGrantTypeHasBeenSet(false),
    m_oAuthScopesHasBeenSet(false),
    m_redirectSignInURIsHasBeenSet(false),
    m_redirectSignOutURIsHasBeenSet(false),
    m_socialProviderSettingsHasBeenSet(false)
{
}

CreateBackendAuthOAuthConfig::CreateBackendAuthOAuthConfig(JsonView jsonValue) : 
    m_domainPrefixHasBeenSet(false),
    m_oAuthGrantType(OAuthGrantType::NOT_SET),
    m_oAuthGrantTypeHasBeenSet(false),
    m_oAuthScopesHasBeenSet(false),
    m_redirectSignInURIsHasBeenSet(false),
    m_redirectSignOutURIsHasBeenSet(false),
    m_socialProviderSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateBackendAuthOAuthConfig& CreateBackendAuthOAuthConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainPrefix"))
  {
    m_domainPrefix = jsonValue.GetString("domainPrefix");

    m_domainPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuthGrantType"))
  {
    m_oAuthGrantType = OAuthGrantTypeMapper::GetOAuthGrantTypeForName(jsonValue.GetString("oAuthGrantType"));

    m_oAuthGrantTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuthScopes"))
  {
    Aws::Utils::Array<JsonView> oAuthScopesJsonList = jsonValue.GetArray("oAuthScopes");
    for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
    {
      m_oAuthScopes.push_back(OAuthScopesElementMapper::GetOAuthScopesElementForName(oAuthScopesJsonList[oAuthScopesIndex].AsString()));
    }
    m_oAuthScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redirectSignInURIs"))
  {
    Aws::Utils::Array<JsonView> redirectSignInURIsJsonList = jsonValue.GetArray("redirectSignInURIs");
    for(unsigned redirectSignInURIsIndex = 0; redirectSignInURIsIndex < redirectSignInURIsJsonList.GetLength(); ++redirectSignInURIsIndex)
    {
      m_redirectSignInURIs.push_back(redirectSignInURIsJsonList[redirectSignInURIsIndex].AsString());
    }
    m_redirectSignInURIsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redirectSignOutURIs"))
  {
    Aws::Utils::Array<JsonView> redirectSignOutURIsJsonList = jsonValue.GetArray("redirectSignOutURIs");
    for(unsigned redirectSignOutURIsIndex = 0; redirectSignOutURIsIndex < redirectSignOutURIsJsonList.GetLength(); ++redirectSignOutURIsIndex)
    {
      m_redirectSignOutURIs.push_back(redirectSignOutURIsJsonList[redirectSignOutURIsIndex].AsString());
    }
    m_redirectSignOutURIsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("socialProviderSettings"))
  {
    m_socialProviderSettings = jsonValue.GetObject("socialProviderSettings");

    m_socialProviderSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateBackendAuthOAuthConfig::Jsonize() const
{
  JsonValue payload;

  if(m_domainPrefixHasBeenSet)
  {
   payload.WithString("domainPrefix", m_domainPrefix);

  }

  if(m_oAuthGrantTypeHasBeenSet)
  {
   payload.WithString("oAuthGrantType", OAuthGrantTypeMapper::GetNameForOAuthGrantType(m_oAuthGrantType));
  }

  if(m_oAuthScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> oAuthScopesJsonList(m_oAuthScopes.size());
   for(unsigned oAuthScopesIndex = 0; oAuthScopesIndex < oAuthScopesJsonList.GetLength(); ++oAuthScopesIndex)
   {
     oAuthScopesJsonList[oAuthScopesIndex].AsString(OAuthScopesElementMapper::GetNameForOAuthScopesElement(m_oAuthScopes[oAuthScopesIndex]));
   }
   payload.WithArray("oAuthScopes", std::move(oAuthScopesJsonList));

  }

  if(m_redirectSignInURIsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> redirectSignInURIsJsonList(m_redirectSignInURIs.size());
   for(unsigned redirectSignInURIsIndex = 0; redirectSignInURIsIndex < redirectSignInURIsJsonList.GetLength(); ++redirectSignInURIsIndex)
   {
     redirectSignInURIsJsonList[redirectSignInURIsIndex].AsString(m_redirectSignInURIs[redirectSignInURIsIndex]);
   }
   payload.WithArray("redirectSignInURIs", std::move(redirectSignInURIsJsonList));

  }

  if(m_redirectSignOutURIsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> redirectSignOutURIsJsonList(m_redirectSignOutURIs.size());
   for(unsigned redirectSignOutURIsIndex = 0; redirectSignOutURIsIndex < redirectSignOutURIsJsonList.GetLength(); ++redirectSignOutURIsIndex)
   {
     redirectSignOutURIsJsonList[redirectSignOutURIsIndex].AsString(m_redirectSignOutURIs[redirectSignOutURIsIndex]);
   }
   payload.WithArray("redirectSignOutURIs", std::move(redirectSignOutURIsJsonList));

  }

  if(m_socialProviderSettingsHasBeenSet)
  {
   payload.WithObject("socialProviderSettings", m_socialProviderSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws

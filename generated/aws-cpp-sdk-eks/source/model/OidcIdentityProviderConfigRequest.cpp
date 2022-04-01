/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/OidcIdentityProviderConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

OidcIdentityProviderConfigRequest::OidcIdentityProviderConfigRequest() : 
    m_identityProviderConfigNameHasBeenSet(false),
    m_issuerUrlHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_usernameClaimHasBeenSet(false),
    m_usernamePrefixHasBeenSet(false),
    m_groupsClaimHasBeenSet(false),
    m_groupsPrefixHasBeenSet(false),
    m_requiredClaimsHasBeenSet(false)
{
}

OidcIdentityProviderConfigRequest::OidcIdentityProviderConfigRequest(JsonView jsonValue) : 
    m_identityProviderConfigNameHasBeenSet(false),
    m_issuerUrlHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_usernameClaimHasBeenSet(false),
    m_usernamePrefixHasBeenSet(false),
    m_groupsClaimHasBeenSet(false),
    m_groupsPrefixHasBeenSet(false),
    m_requiredClaimsHasBeenSet(false)
{
  *this = jsonValue;
}

OidcIdentityProviderConfigRequest& OidcIdentityProviderConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityProviderConfigName"))
  {
    m_identityProviderConfigName = jsonValue.GetString("identityProviderConfigName");

    m_identityProviderConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuerUrl"))
  {
    m_issuerUrl = jsonValue.GetString("issuerUrl");

    m_issuerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usernameClaim"))
  {
    m_usernameClaim = jsonValue.GetString("usernameClaim");

    m_usernameClaimHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usernamePrefix"))
  {
    m_usernamePrefix = jsonValue.GetString("usernamePrefix");

    m_usernamePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupsClaim"))
  {
    m_groupsClaim = jsonValue.GetString("groupsClaim");

    m_groupsClaimHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupsPrefix"))
  {
    m_groupsPrefix = jsonValue.GetString("groupsPrefix");

    m_groupsPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requiredClaims"))
  {
    Aws::Map<Aws::String, JsonView> requiredClaimsJsonMap = jsonValue.GetObject("requiredClaims").GetAllObjects();
    for(auto& requiredClaimsItem : requiredClaimsJsonMap)
    {
      m_requiredClaims[requiredClaimsItem.first] = requiredClaimsItem.second.AsString();
    }
    m_requiredClaimsHasBeenSet = true;
  }

  return *this;
}

JsonValue OidcIdentityProviderConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_identityProviderConfigNameHasBeenSet)
  {
   payload.WithString("identityProviderConfigName", m_identityProviderConfigName);

  }

  if(m_issuerUrlHasBeenSet)
  {
   payload.WithString("issuerUrl", m_issuerUrl);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_usernameClaimHasBeenSet)
  {
   payload.WithString("usernameClaim", m_usernameClaim);

  }

  if(m_usernamePrefixHasBeenSet)
  {
   payload.WithString("usernamePrefix", m_usernamePrefix);

  }

  if(m_groupsClaimHasBeenSet)
  {
   payload.WithString("groupsClaim", m_groupsClaim);

  }

  if(m_groupsPrefixHasBeenSet)
  {
   payload.WithString("groupsPrefix", m_groupsPrefix);

  }

  if(m_requiredClaimsHasBeenSet)
  {
   JsonValue requiredClaimsJsonMap;
   for(auto& requiredClaimsItem : m_requiredClaims)
   {
     requiredClaimsJsonMap.WithString(requiredClaimsItem.first, requiredClaimsItem.second);
   }
   payload.WithObject("requiredClaims", std::move(requiredClaimsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/WebsiteAuthorizationProviderSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkLink
{
namespace Model
{

WebsiteAuthorizationProviderSummary::WebsiteAuthorizationProviderSummary() : 
    m_authorizationProviderIdHasBeenSet(false),
    m_authorizationProviderType(AuthorizationProviderType::NOT_SET),
    m_authorizationProviderTypeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

WebsiteAuthorizationProviderSummary::WebsiteAuthorizationProviderSummary(JsonView jsonValue) : 
    m_authorizationProviderIdHasBeenSet(false),
    m_authorizationProviderType(AuthorizationProviderType::NOT_SET),
    m_authorizationProviderTypeHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WebsiteAuthorizationProviderSummary& WebsiteAuthorizationProviderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationProviderId"))
  {
    m_authorizationProviderId = jsonValue.GetString("AuthorizationProviderId");

    m_authorizationProviderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizationProviderType"))
  {
    m_authorizationProviderType = AuthorizationProviderTypeMapper::GetAuthorizationProviderTypeForName(jsonValue.GetString("AuthorizationProviderType"));

    m_authorizationProviderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WebsiteAuthorizationProviderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationProviderIdHasBeenSet)
  {
   payload.WithString("AuthorizationProviderId", m_authorizationProviderId);

  }

  if(m_authorizationProviderTypeHasBeenSet)
  {
   payload.WithString("AuthorizationProviderType", AuthorizationProviderTypeMapper::GetNameForAuthorizationProviderType(m_authorizationProviderType));
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkLink
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TermsType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

TermsType::TermsType(JsonView jsonValue)
{
  *this = jsonValue;
}

TermsType& TermsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TermsId"))
  {
    m_termsId = jsonValue.GetString("TermsId");
    m_termsIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");
    m_userPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TermsName"))
  {
    m_termsName = jsonValue.GetString("TermsName");
    m_termsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TermsSource"))
  {
    m_termsSource = TermsSourceTypeMapper::GetTermsSourceTypeForName(jsonValue.GetString("TermsSource"));
    m_termsSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enforcement"))
  {
    m_enforcement = TermsEnforcementTypeMapper::GetTermsEnforcementTypeForName(jsonValue.GetString("Enforcement"));
    m_enforcementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Links"))
  {
    Aws::Map<Aws::String, JsonView> linksJsonMap = jsonValue.GetObject("Links").GetAllObjects();
    for(auto& linksItem : linksJsonMap)
    {
      m_links[linksItem.first] = linksItem.second.AsString();
    }
    m_linksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue TermsType::Jsonize() const
{
  JsonValue payload;

  if(m_termsIdHasBeenSet)
  {
   payload.WithString("TermsId", m_termsId);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_termsNameHasBeenSet)
  {
   payload.WithString("TermsName", m_termsName);

  }

  if(m_termsSourceHasBeenSet)
  {
   payload.WithString("TermsSource", TermsSourceTypeMapper::GetNameForTermsSourceType(m_termsSource));
  }

  if(m_enforcementHasBeenSet)
  {
   payload.WithString("Enforcement", TermsEnforcementTypeMapper::GetNameForTermsEnforcementType(m_enforcement));
  }

  if(m_linksHasBeenSet)
  {
   JsonValue linksJsonMap;
   for(auto& linksItem : m_links)
   {
     linksJsonMap.WithString(linksItem.first, linksItem.second);
   }
   payload.WithObject("Links", std::move(linksJsonMap));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

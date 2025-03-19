/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/OAuth2Properties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

OAuth2Properties::OAuth2Properties(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuth2Properties& OAuth2Properties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationCodeProperties"))
  {
    m_authorizationCodeProperties = jsonValue.GetObject("authorizationCodeProperties");
    m_authorizationCodePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuth2ClientApplication"))
  {
    m_oAuth2ClientApplication = jsonValue.GetObject("oAuth2ClientApplication");
    m_oAuth2ClientApplicationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuth2Credentials"))
  {
    m_oAuth2Credentials = jsonValue.GetObject("oAuth2Credentials");
    m_oAuth2CredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuth2GrantType"))
  {
    m_oAuth2GrantType = OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(jsonValue.GetString("oAuth2GrantType"));
    m_oAuth2GrantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenUrl"))
  {
    m_tokenUrl = jsonValue.GetString("tokenUrl");
    m_tokenUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenUrlParametersMap"))
  {
    Aws::Map<Aws::String, JsonView> tokenUrlParametersMapJsonMap = jsonValue.GetObject("tokenUrlParametersMap").GetAllObjects();
    for(auto& tokenUrlParametersMapItem : tokenUrlParametersMapJsonMap)
    {
      m_tokenUrlParametersMap[tokenUrlParametersMapItem.first] = tokenUrlParametersMapItem.second.AsString();
    }
    m_tokenUrlParametersMapHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuth2Properties::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationCodePropertiesHasBeenSet)
  {
   payload.WithObject("authorizationCodeProperties", m_authorizationCodeProperties.Jsonize());

  }

  if(m_oAuth2ClientApplicationHasBeenSet)
  {
   payload.WithObject("oAuth2ClientApplication", m_oAuth2ClientApplication.Jsonize());

  }

  if(m_oAuth2CredentialsHasBeenSet)
  {
   payload.WithObject("oAuth2Credentials", m_oAuth2Credentials.Jsonize());

  }

  if(m_oAuth2GrantTypeHasBeenSet)
  {
   payload.WithString("oAuth2GrantType", OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oAuth2GrantType));
  }

  if(m_tokenUrlHasBeenSet)
  {
   payload.WithString("tokenUrl", m_tokenUrl);

  }

  if(m_tokenUrlParametersMapHasBeenSet)
  {
   JsonValue tokenUrlParametersMapJsonMap;
   for(auto& tokenUrlParametersMapItem : m_tokenUrlParametersMap)
   {
     tokenUrlParametersMapJsonMap.WithString(tokenUrlParametersMapItem.first, tokenUrlParametersMapItem.second);
   }
   payload.WithObject("tokenUrlParametersMap", std::move(tokenUrlParametersMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

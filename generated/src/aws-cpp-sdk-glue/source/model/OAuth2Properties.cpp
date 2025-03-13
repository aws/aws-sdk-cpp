/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/OAuth2Properties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

OAuth2Properties::OAuth2Properties(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuth2Properties& OAuth2Properties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OAuth2GrantType"))
  {
    m_oAuth2GrantType = OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(jsonValue.GetString("OAuth2GrantType"));
    m_oAuth2GrantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuth2ClientApplication"))
  {
    m_oAuth2ClientApplication = jsonValue.GetObject("OAuth2ClientApplication");
    m_oAuth2ClientApplicationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TokenUrl"))
  {
    m_tokenUrl = jsonValue.GetString("TokenUrl");
    m_tokenUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TokenUrlParametersMap"))
  {
    Aws::Map<Aws::String, JsonView> tokenUrlParametersMapJsonMap = jsonValue.GetObject("TokenUrlParametersMap").GetAllObjects();
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

  if(m_oAuth2GrantTypeHasBeenSet)
  {
   payload.WithString("OAuth2GrantType", OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oAuth2GrantType));
  }

  if(m_oAuth2ClientApplicationHasBeenSet)
  {
   payload.WithObject("OAuth2ClientApplication", m_oAuth2ClientApplication.Jsonize());

  }

  if(m_tokenUrlHasBeenSet)
  {
   payload.WithString("TokenUrl", m_tokenUrl);

  }

  if(m_tokenUrlParametersMapHasBeenSet)
  {
   JsonValue tokenUrlParametersMapJsonMap;
   for(auto& tokenUrlParametersMapItem : m_tokenUrlParametersMap)
   {
     tokenUrlParametersMapJsonMap.WithString(tokenUrlParametersMapItem.first, tokenUrlParametersMapItem.second);
   }
   payload.WithObject("TokenUrlParametersMap", std::move(tokenUrlParametersMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

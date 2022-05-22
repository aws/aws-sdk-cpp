/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuth2Properties.h>
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

OAuth2Properties::OAuth2Properties() : 
    m_tokenUrlHasBeenSet(false),
    m_oAuth2GrantType(OAuth2GrantType::NOT_SET),
    m_oAuth2GrantTypeHasBeenSet(false),
    m_tokenUrlCustomPropertiesHasBeenSet(false)
{
}

OAuth2Properties::OAuth2Properties(JsonView jsonValue) : 
    m_tokenUrlHasBeenSet(false),
    m_oAuth2GrantType(OAuth2GrantType::NOT_SET),
    m_oAuth2GrantTypeHasBeenSet(false),
    m_tokenUrlCustomPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

OAuth2Properties& OAuth2Properties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tokenUrl"))
  {
    m_tokenUrl = jsonValue.GetString("tokenUrl");

    m_tokenUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuth2GrantType"))
  {
    m_oAuth2GrantType = OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(jsonValue.GetString("oAuth2GrantType"));

    m_oAuth2GrantTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenUrlCustomProperties"))
  {
    Aws::Map<Aws::String, JsonView> tokenUrlCustomPropertiesJsonMap = jsonValue.GetObject("tokenUrlCustomProperties").GetAllObjects();
    for(auto& tokenUrlCustomPropertiesItem : tokenUrlCustomPropertiesJsonMap)
    {
      m_tokenUrlCustomProperties[tokenUrlCustomPropertiesItem.first] = tokenUrlCustomPropertiesItem.second.AsString();
    }
    m_tokenUrlCustomPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue OAuth2Properties::Jsonize() const
{
  JsonValue payload;

  if(m_tokenUrlHasBeenSet)
  {
   payload.WithString("tokenUrl", m_tokenUrl);

  }

  if(m_oAuth2GrantTypeHasBeenSet)
  {
   payload.WithString("oAuth2GrantType", OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oAuth2GrantType));
  }

  if(m_tokenUrlCustomPropertiesHasBeenSet)
  {
   JsonValue tokenUrlCustomPropertiesJsonMap;
   for(auto& tokenUrlCustomPropertiesItem : m_tokenUrlCustomProperties)
   {
     tokenUrlCustomPropertiesJsonMap.WithString(tokenUrlCustomPropertiesItem.first, tokenUrlCustomPropertiesItem.second);
   }
   payload.WithObject("tokenUrlCustomProperties", std::move(tokenUrlCustomPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

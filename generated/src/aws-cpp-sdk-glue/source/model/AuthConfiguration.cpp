/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AuthConfiguration.h>
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

AuthConfiguration::AuthConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthConfiguration& AuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = jsonValue.GetObject("AuthenticationType");
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetObject("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuth2Properties"))
  {
    Aws::Map<Aws::String, JsonView> oAuth2PropertiesJsonMap = jsonValue.GetObject("OAuth2Properties").GetAllObjects();
    for(auto& oAuth2PropertiesItem : oAuth2PropertiesJsonMap)
    {
      m_oAuth2Properties[oAuth2PropertiesItem.first] = oAuth2PropertiesItem.second.AsObject();
    }
    m_oAuth2PropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BasicAuthenticationProperties"))
  {
    Aws::Map<Aws::String, JsonView> basicAuthenticationPropertiesJsonMap = jsonValue.GetObject("BasicAuthenticationProperties").GetAllObjects();
    for(auto& basicAuthenticationPropertiesItem : basicAuthenticationPropertiesJsonMap)
    {
      m_basicAuthenticationProperties[basicAuthenticationPropertiesItem.first] = basicAuthenticationPropertiesItem.second.AsObject();
    }
    m_basicAuthenticationPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomAuthenticationProperties"))
  {
    Aws::Map<Aws::String, JsonView> customAuthenticationPropertiesJsonMap = jsonValue.GetObject("CustomAuthenticationProperties").GetAllObjects();
    for(auto& customAuthenticationPropertiesItem : customAuthenticationPropertiesJsonMap)
    {
      m_customAuthenticationProperties[customAuthenticationPropertiesItem.first] = customAuthenticationPropertiesItem.second.AsObject();
    }
    m_customAuthenticationPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithObject("AuthenticationType", m_authenticationType.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithObject("SecretArn", m_secretArn.Jsonize());

  }

  if(m_oAuth2PropertiesHasBeenSet)
  {
   JsonValue oAuth2PropertiesJsonMap;
   for(auto& oAuth2PropertiesItem : m_oAuth2Properties)
   {
     oAuth2PropertiesJsonMap.WithObject(oAuth2PropertiesItem.first, oAuth2PropertiesItem.second.Jsonize());
   }
   payload.WithObject("OAuth2Properties", std::move(oAuth2PropertiesJsonMap));

  }

  if(m_basicAuthenticationPropertiesHasBeenSet)
  {
   JsonValue basicAuthenticationPropertiesJsonMap;
   for(auto& basicAuthenticationPropertiesItem : m_basicAuthenticationProperties)
   {
     basicAuthenticationPropertiesJsonMap.WithObject(basicAuthenticationPropertiesItem.first, basicAuthenticationPropertiesItem.second.Jsonize());
   }
   payload.WithObject("BasicAuthenticationProperties", std::move(basicAuthenticationPropertiesJsonMap));

  }

  if(m_customAuthenticationPropertiesHasBeenSet)
  {
   JsonValue customAuthenticationPropertiesJsonMap;
   for(auto& customAuthenticationPropertiesItem : m_customAuthenticationProperties)
   {
     customAuthenticationPropertiesJsonMap.WithObject(customAuthenticationPropertiesItem.first, customAuthenticationPropertiesItem.second.Jsonize());
   }
   payload.WithObject("CustomAuthenticationProperties", std::move(customAuthenticationPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

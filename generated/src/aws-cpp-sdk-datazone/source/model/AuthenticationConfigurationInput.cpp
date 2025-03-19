/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AuthenticationConfigurationInput.h>
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

AuthenticationConfigurationInput::AuthenticationConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationConfigurationInput& AuthenticationConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("basicAuthenticationCredentials"))
  {
    m_basicAuthenticationCredentials = jsonValue.GetObject("basicAuthenticationCredentials");
    m_basicAuthenticationCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customAuthenticationCredentials"))
  {
    Aws::Map<Aws::String, JsonView> customAuthenticationCredentialsJsonMap = jsonValue.GetObject("customAuthenticationCredentials").GetAllObjects();
    for(auto& customAuthenticationCredentialsItem : customAuthenticationCredentialsJsonMap)
    {
      m_customAuthenticationCredentials[customAuthenticationCredentialsItem.first] = customAuthenticationCredentialsItem.second.AsString();
    }
    m_customAuthenticationCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oAuth2Properties"))
  {
    m_oAuth2Properties = jsonValue.GetObject("oAuth2Properties");
    m_oAuth2PropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_basicAuthenticationCredentialsHasBeenSet)
  {
   payload.WithObject("basicAuthenticationCredentials", m_basicAuthenticationCredentials.Jsonize());

  }

  if(m_customAuthenticationCredentialsHasBeenSet)
  {
   JsonValue customAuthenticationCredentialsJsonMap;
   for(auto& customAuthenticationCredentialsItem : m_customAuthenticationCredentials)
   {
     customAuthenticationCredentialsJsonMap.WithString(customAuthenticationCredentialsItem.first, customAuthenticationCredentialsItem.second);
   }
   payload.WithObject("customAuthenticationCredentials", std::move(customAuthenticationCredentialsJsonMap));

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_oAuth2PropertiesHasBeenSet)
  {
   payload.WithObject("oAuth2Properties", m_oAuth2Properties.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

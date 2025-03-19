/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AuthenticationConfigurationInput.h>
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

AuthenticationConfigurationInput::AuthenticationConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationConfigurationInput& AuthenticationConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuth2Properties"))
  {
    m_oAuth2Properties = jsonValue.GetObject("OAuth2Properties");
    m_oAuth2PropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BasicAuthenticationCredentials"))
  {
    m_basicAuthenticationCredentials = jsonValue.GetObject("BasicAuthenticationCredentials");
    m_basicAuthenticationCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomAuthenticationCredentials"))
  {
    Aws::Map<Aws::String, JsonView> customAuthenticationCredentialsJsonMap = jsonValue.GetObject("CustomAuthenticationCredentials").GetAllObjects();
    for(auto& customAuthenticationCredentialsItem : customAuthenticationCredentialsJsonMap)
    {
      m_customAuthenticationCredentials[customAuthenticationCredentialsItem.first] = customAuthenticationCredentialsItem.second.AsString();
    }
    m_customAuthenticationCredentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_oAuth2PropertiesHasBeenSet)
  {
   payload.WithObject("OAuth2Properties", m_oAuth2Properties.Jsonize());

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_basicAuthenticationCredentialsHasBeenSet)
  {
   payload.WithObject("BasicAuthenticationCredentials", m_basicAuthenticationCredentials.Jsonize());

  }

  if(m_customAuthenticationCredentialsHasBeenSet)
  {
   JsonValue customAuthenticationCredentialsJsonMap;
   for(auto& customAuthenticationCredentialsItem : m_customAuthenticationCredentials)
   {
     customAuthenticationCredentialsJsonMap.WithString(customAuthenticationCredentialsItem.first, customAuthenticationCredentialsItem.second);
   }
   payload.WithObject("CustomAuthenticationCredentials", std::move(customAuthenticationCredentialsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

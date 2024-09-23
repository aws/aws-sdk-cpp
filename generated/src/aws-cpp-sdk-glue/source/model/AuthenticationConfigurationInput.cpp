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

AuthenticationConfigurationInput::AuthenticationConfigurationInput() : 
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_oAuth2PropertiesHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

AuthenticationConfigurationInput::AuthenticationConfigurationInput(JsonView jsonValue)
  : AuthenticationConfigurationInput()
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

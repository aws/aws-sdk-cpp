/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AuthenticationConfiguration.h>
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

AuthenticationConfiguration::AuthenticationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationConfiguration& AuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
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
  if(jsonValue.ValueExists("OAuth2Properties"))
  {
    m_oAuth2Properties = jsonValue.GetObject("OAuth2Properties");
    m_oAuth2PropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_oAuth2PropertiesHasBeenSet)
  {
   payload.WithObject("OAuth2Properties", m_oAuth2Properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

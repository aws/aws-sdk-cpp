/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ConnectorOAuth2Properties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ConnectorOAuth2Properties::ConnectorOAuth2Properties(JsonView jsonValue) { *this = jsonValue; }

ConnectorOAuth2Properties& ConnectorOAuth2Properties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OAuth2GrantType")) {
    m_oAuth2GrantType = ConnectorOAuth2GrantTypeMapper::GetConnectorOAuth2GrantTypeForName(jsonValue.GetString("OAuth2GrantType"));
    m_oAuth2GrantTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientCredentialsProperties")) {
    m_clientCredentialsProperties = jsonValue.GetObject("ClientCredentialsProperties");
    m_clientCredentialsPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JWTBearerProperties")) {
    m_jWTBearerProperties = jsonValue.GetObject("JWTBearerProperties");
    m_jWTBearerPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthorizationCodeProperties")) {
    m_authorizationCodeProperties = jsonValue.GetObject("AuthorizationCodeProperties");
    m_authorizationCodePropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorOAuth2Properties::Jsonize() const {
  JsonValue payload;

  if (m_oAuth2GrantTypeHasBeenSet) {
    payload.WithString("OAuth2GrantType", ConnectorOAuth2GrantTypeMapper::GetNameForConnectorOAuth2GrantType(m_oAuth2GrantType));
  }

  if (m_clientCredentialsPropertiesHasBeenSet) {
    payload.WithObject("ClientCredentialsProperties", m_clientCredentialsProperties.Jsonize());
  }

  if (m_jWTBearerPropertiesHasBeenSet) {
    payload.WithObject("JWTBearerProperties", m_jWTBearerProperties.Jsonize());
  }

  if (m_authorizationCodePropertiesHasBeenSet) {
    payload.WithObject("AuthorizationCodeProperties", m_authorizationCodeProperties.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

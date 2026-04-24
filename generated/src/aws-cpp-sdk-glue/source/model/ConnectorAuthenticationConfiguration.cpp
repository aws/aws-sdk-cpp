/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ConnectorAuthenticationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ConnectorAuthenticationConfiguration::ConnectorAuthenticationConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorAuthenticationConfiguration& ConnectorAuthenticationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthenticationTypes")) {
    Aws::Utils::Array<JsonView> authenticationTypesJsonList = jsonValue.GetArray("AuthenticationTypes");
    for (unsigned authenticationTypesIndex = 0; authenticationTypesIndex < authenticationTypesJsonList.GetLength();
         ++authenticationTypesIndex) {
      m_authenticationTypes.push_back(
          AuthenticationTypeMapper::GetAuthenticationTypeForName(authenticationTypesJsonList[authenticationTypesIndex].AsString()));
    }
    m_authenticationTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OAuth2Properties")) {
    m_oAuth2Properties = jsonValue.GetObject("OAuth2Properties");
    m_oAuth2PropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BasicAuthenticationProperties")) {
    m_basicAuthenticationProperties = jsonValue.GetObject("BasicAuthenticationProperties");
    m_basicAuthenticationPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomAuthenticationProperties")) {
    m_customAuthenticationProperties = jsonValue.GetObject("CustomAuthenticationProperties");
    m_customAuthenticationPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorAuthenticationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_authenticationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> authenticationTypesJsonList(m_authenticationTypes.size());
    for (unsigned authenticationTypesIndex = 0; authenticationTypesIndex < authenticationTypesJsonList.GetLength();
         ++authenticationTypesIndex) {
      authenticationTypesJsonList[authenticationTypesIndex].AsString(
          AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationTypes[authenticationTypesIndex]));
    }
    payload.WithArray("AuthenticationTypes", std::move(authenticationTypesJsonList));
  }

  if (m_oAuth2PropertiesHasBeenSet) {
    payload.WithObject("OAuth2Properties", m_oAuth2Properties.Jsonize());
  }

  if (m_basicAuthenticationPropertiesHasBeenSet) {
    payload.WithObject("BasicAuthenticationProperties", m_basicAuthenticationProperties.Jsonize());
  }

  if (m_customAuthenticationPropertiesHasBeenSet) {
    payload.WithObject("CustomAuthenticationProperties", m_customAuthenticationProperties.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

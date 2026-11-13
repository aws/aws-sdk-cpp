/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DcrConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

DcrConfigurationType::DcrConfigurationType(JsonView jsonValue) { *this = jsonValue; }

DcrConfigurationType& DcrConfigurationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EnableStatus")) {
    m_enableStatus = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("EnableStatus"));
    m_enableStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpenDcrEnabled")) {
    m_openDcrEnabled = jsonValue.GetBool("OpenDcrEnabled");
    m_openDcrEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthenticatedGrantTypes")) {
    Aws::Utils::Array<JsonView> authenticatedGrantTypesJsonList = jsonValue.GetArray("AuthenticatedGrantTypes");
    for (unsigned authenticatedGrantTypesIndex = 0; authenticatedGrantTypesIndex < authenticatedGrantTypesJsonList.GetLength();
         ++authenticatedGrantTypesIndex) {
      m_authenticatedGrantTypes.push_back(
          OAuthFlowTypeMapper::GetOAuthFlowTypeForName(authenticatedGrantTypesJsonList[authenticatedGrantTypesIndex].AsString()));
    }
    m_authenticatedGrantTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpenDcrGrantTypes")) {
    Aws::Utils::Array<JsonView> openDcrGrantTypesJsonList = jsonValue.GetArray("OpenDcrGrantTypes");
    for (unsigned openDcrGrantTypesIndex = 0; openDcrGrantTypesIndex < openDcrGrantTypesJsonList.GetLength(); ++openDcrGrantTypesIndex) {
      m_openDcrGrantTypes.push_back(
          OAuthFlowTypeMapper::GetOAuthFlowTypeForName(openDcrGrantTypesJsonList[openDcrGrantTypesIndex].AsString()));
    }
    m_openDcrGrantTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedScopes")) {
    Aws::Utils::Array<JsonView> allowedScopesJsonList = jsonValue.GetArray("AllowedScopes");
    for (unsigned allowedScopesIndex = 0; allowedScopesIndex < allowedScopesJsonList.GetLength(); ++allowedScopesIndex) {
      m_allowedScopes.push_back(allowedScopesJsonList[allowedScopesIndex].AsString());
    }
    m_allowedScopesHasBeenSet = true;
  }
  return *this;
}

JsonValue DcrConfigurationType::Jsonize() const {
  JsonValue payload;

  if (m_enableStatusHasBeenSet) {
    payload.WithString("EnableStatus", StatusTypeMapper::GetNameForStatusType(m_enableStatus));
  }

  if (m_openDcrEnabledHasBeenSet) {
    payload.WithBool("OpenDcrEnabled", m_openDcrEnabled);
  }

  if (m_authenticatedGrantTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> authenticatedGrantTypesJsonList(m_authenticatedGrantTypes.size());
    for (unsigned authenticatedGrantTypesIndex = 0; authenticatedGrantTypesIndex < authenticatedGrantTypesJsonList.GetLength();
         ++authenticatedGrantTypesIndex) {
      authenticatedGrantTypesJsonList[authenticatedGrantTypesIndex].AsString(
          OAuthFlowTypeMapper::GetNameForOAuthFlowType(m_authenticatedGrantTypes[authenticatedGrantTypesIndex]));
    }
    payload.WithArray("AuthenticatedGrantTypes", std::move(authenticatedGrantTypesJsonList));
  }

  if (m_openDcrGrantTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> openDcrGrantTypesJsonList(m_openDcrGrantTypes.size());
    for (unsigned openDcrGrantTypesIndex = 0; openDcrGrantTypesIndex < openDcrGrantTypesJsonList.GetLength(); ++openDcrGrantTypesIndex) {
      openDcrGrantTypesJsonList[openDcrGrantTypesIndex].AsString(
          OAuthFlowTypeMapper::GetNameForOAuthFlowType(m_openDcrGrantTypes[openDcrGrantTypesIndex]));
    }
    payload.WithArray("OpenDcrGrantTypes", std::move(openDcrGrantTypesJsonList));
  }

  if (m_allowedScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedScopesJsonList(m_allowedScopes.size());
    for (unsigned allowedScopesIndex = 0; allowedScopesIndex < allowedScopesJsonList.GetLength(); ++allowedScopesIndex) {
      allowedScopesJsonList[allowedScopesIndex].AsString(m_allowedScopes[allowedScopesIndex]);
    }
    payload.WithArray("AllowedScopes", std::move(allowedScopesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws

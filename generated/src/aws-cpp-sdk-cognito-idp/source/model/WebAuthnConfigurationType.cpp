/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/WebAuthnConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

WebAuthnConfigurationType::WebAuthnConfigurationType(JsonView jsonValue) { *this = jsonValue; }

WebAuthnConfigurationType& WebAuthnConfigurationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RelyingPartyId")) {
    m_relyingPartyId = jsonValue.GetString("RelyingPartyId");
    m_relyingPartyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserVerification")) {
    m_userVerification = UserVerificationTypeMapper::GetUserVerificationTypeForName(jsonValue.GetString("UserVerification"));
    m_userVerificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FactorConfiguration")) {
    m_factorConfiguration =
        WebAuthnFactorConfigurationTypeMapper::GetWebAuthnFactorConfigurationTypeForName(jsonValue.GetString("FactorConfiguration"));
    m_factorConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue WebAuthnConfigurationType::Jsonize() const {
  JsonValue payload;

  if (m_relyingPartyIdHasBeenSet) {
    payload.WithString("RelyingPartyId", m_relyingPartyId);
  }

  if (m_userVerificationHasBeenSet) {
    payload.WithString("UserVerification", UserVerificationTypeMapper::GetNameForUserVerificationType(m_userVerification));
  }

  if (m_factorConfigurationHasBeenSet) {
    payload.WithString("FactorConfiguration",
                       WebAuthnFactorConfigurationTypeMapper::GetNameForWebAuthnFactorConfigurationType(m_factorConfiguration));
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws

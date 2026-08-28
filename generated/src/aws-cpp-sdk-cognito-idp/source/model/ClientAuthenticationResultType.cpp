/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ClientAuthenticationResultType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

ClientAuthenticationResultType::ClientAuthenticationResultType(JsonView jsonValue) { *this = jsonValue; }

ClientAuthenticationResultType& ClientAuthenticationResultType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessToken")) {
    m_accessToken = jsonValue.GetString("AccessToken");
    m_accessTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresIn")) {
    m_expiresIn = jsonValue.GetInteger("ExpiresIn");
    m_expiresInHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TokenType")) {
    m_tokenType = jsonValue.GetString("TokenType");
    m_tokenTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientAuthenticationResultType::Jsonize() const {
  JsonValue payload;

  if (m_accessTokenHasBeenSet) {
    payload.WithString("AccessToken", m_accessToken);
  }

  if (m_expiresInHasBeenSet) {
    payload.WithInteger("ExpiresIn", m_expiresIn);
  }

  if (m_tokenTypeHasBeenSet) {
    payload.WithString("TokenType", m_tokenType);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CognitoConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

CognitoConfig::CognitoConfig(JsonView jsonValue) { *this = jsonValue; }

CognitoConfig& CognitoConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appClientId")) {
    m_appClientId = jsonValue.GetString("appClientId");
    m_appClientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userPoolArn")) {
    m_userPoolArn = jsonValue.GetString("userPoolArn");
    m_userPoolArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userPoolDomain")) {
    m_userPoolDomain = jsonValue.GetString("userPoolDomain");
    m_userPoolDomainHasBeenSet = true;
  }
  return *this;
}

JsonValue CognitoConfig::Jsonize() const {
  JsonValue payload;

  if (m_appClientIdHasBeenSet) {
    payload.WithString("appClientId", m_appClientId);
  }

  if (m_userPoolArnHasBeenSet) {
    payload.WithString("userPoolArn", m_userPoolArn);
  }

  if (m_userPoolDomainHasBeenSet) {
    payload.WithString("userPoolDomain", m_userPoolDomain);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws

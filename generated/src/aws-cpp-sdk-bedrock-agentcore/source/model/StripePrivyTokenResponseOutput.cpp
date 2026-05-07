/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StripePrivyTokenResponseOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

StripePrivyTokenResponseOutput::StripePrivyTokenResponseOutput(JsonView jsonValue) { *this = jsonValue; }

StripePrivyTokenResponseOutput& StripePrivyTokenResponseOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("authorizationSignature")) {
    m_authorizationSignature = jsonValue.GetString("authorizationSignature");
    m_authorizationSignatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestExpiry")) {
    m_requestExpiry = jsonValue.GetInt64("requestExpiry");
    m_requestExpiryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("appId")) {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("basicAuthToken")) {
    m_basicAuthToken = jsonValue.GetString("basicAuthToken");
    m_basicAuthTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue StripePrivyTokenResponseOutput::Jsonize() const {
  JsonValue payload;

  if (m_authorizationSignatureHasBeenSet) {
    payload.WithString("authorizationSignature", m_authorizationSignature);
  }

  if (m_requestExpiryHasBeenSet) {
    payload.WithInt64("requestExpiry", m_requestExpiry);
  }

  if (m_appIdHasBeenSet) {
    payload.WithString("appId", m_appId);
  }

  if (m_basicAuthTokenHasBeenSet) {
    payload.WithString("basicAuthToken", m_basicAuthToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

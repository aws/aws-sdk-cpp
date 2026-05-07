/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StripePrivyTokenRequestInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

StripePrivyTokenRequestInput::StripePrivyTokenRequestInput(JsonView jsonValue) { *this = jsonValue; }

StripePrivyTokenRequestInput& StripePrivyTokenRequestInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requestHost")) {
    m_requestHost = jsonValue.GetString("requestHost");
    m_requestHostHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestPath")) {
    m_requestPath = jsonValue.GetString("requestPath");
    m_requestPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestBody")) {
    m_requestBody = jsonValue.GetString("requestBody");
    m_requestBodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includeAuthorizationSignature")) {
    m_includeAuthorizationSignature = jsonValue.GetBool("includeAuthorizationSignature");
    m_includeAuthorizationSignatureHasBeenSet = true;
  }
  return *this;
}

JsonValue StripePrivyTokenRequestInput::Jsonize() const {
  JsonValue payload;

  if (m_requestHostHasBeenSet) {
    payload.WithString("requestHost", m_requestHost);
  }

  if (m_requestPathHasBeenSet) {
    payload.WithString("requestPath", m_requestPath);
  }

  if (m_requestBodyHasBeenSet) {
    payload.WithString("requestBody", m_requestBody);
  }

  if (m_includeAuthorizationSignatureHasBeenSet) {
    payload.WithBool("includeAuthorizationSignature", m_includeAuthorizationSignature);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

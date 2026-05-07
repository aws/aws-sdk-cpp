/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CreatePaymentSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePaymentSessionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_paymentManagerArnHasBeenSet) {
    payload.WithString("paymentManagerArn", m_paymentManagerArn);
  }

  if (m_limitsHasBeenSet) {
    payload.WithObject("limits", m_limits.Jsonize());
  }

  if (m_expiryTimeInMinutesHasBeenSet) {
    payload.WithInteger("expiryTimeInMinutes", m_expiryTimeInMinutes);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePaymentSessionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_userIdHasBeenSet) {
    ss << m_userId;
    headers.emplace("x-amzn-bedrock-agentcore-payments-user-id", ss.str());
    ss.str("");
  }

  if (m_agentNameHasBeenSet) {
    ss << m_agentName;
    headers.emplace("x-amzn-bedrock-agentcore-payments-agent-name", ss.str());
    ss.str("");
  }

  return headers;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ProcessPaymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ProcessPaymentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_paymentManagerArnHasBeenSet) {
    payload.WithString("paymentManagerArn", m_paymentManagerArn);
  }

  if (m_paymentSessionIdHasBeenSet) {
    payload.WithString("paymentSessionId", m_paymentSessionId);
  }

  if (m_paymentInstrumentIdHasBeenSet) {
    payload.WithString("paymentInstrumentId", m_paymentInstrumentId);
  }

  if (m_paymentTypeHasBeenSet) {
    payload.WithString("paymentType", PaymentTypeMapper::GetNameForPaymentType(m_paymentType));
  }

  if (m_paymentInputHasBeenSet) {
    payload.WithObject("paymentInput", m_paymentInput.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ProcessPaymentRequest::GetRequestSpecificHeaders() const {
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

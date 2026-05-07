/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DeletePaymentInstrumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeletePaymentInstrumentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_paymentManagerArnHasBeenSet) {
    payload.WithString("paymentManagerArn", m_paymentManagerArn);
  }

  if (m_paymentConnectorIdHasBeenSet) {
    payload.WithString("paymentConnectorId", m_paymentConnectorId);
  }

  if (m_paymentInstrumentIdHasBeenSet) {
    payload.WithString("paymentInstrumentId", m_paymentInstrumentId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePaymentInstrumentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_userIdHasBeenSet) {
    ss << m_userId;
    headers.emplace("x-amzn-bedrock-agentcore-payments-user-id", ss.str());
    ss.str("");
  }

  return headers;
}

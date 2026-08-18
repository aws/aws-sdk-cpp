/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MppPaymentInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MppPaymentInput::MppPaymentInput(JsonView jsonValue) { *this = jsonValue; }

MppPaymentInput& MppPaymentInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("wwwAuthenticateHeaders")) {
    Aws::Utils::Array<JsonView> wwwAuthenticateHeadersJsonList = jsonValue.GetArray("wwwAuthenticateHeaders");
    for (unsigned wwwAuthenticateHeadersIndex = 0; wwwAuthenticateHeadersIndex < wwwAuthenticateHeadersJsonList.GetLength();
         ++wwwAuthenticateHeadersIndex) {
      m_wwwAuthenticateHeaders.push_back(wwwAuthenticateHeadersJsonList[wwwAuthenticateHeadersIndex].AsString());
    }
    m_wwwAuthenticateHeadersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buyerPaysGasFees")) {
    m_buyerPaysGasFees = jsonValue.GetBool("buyerPaysGasFees");
    m_buyerPaysGasFeesHasBeenSet = true;
  }
  return *this;
}

JsonValue MppPaymentInput::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_wwwAuthenticateHeadersHasBeenSet) {
    Aws::Utils::Array<JsonValue> wwwAuthenticateHeadersJsonList(m_wwwAuthenticateHeaders.size());
    for (unsigned wwwAuthenticateHeadersIndex = 0; wwwAuthenticateHeadersIndex < wwwAuthenticateHeadersJsonList.GetLength();
         ++wwwAuthenticateHeadersIndex) {
      wwwAuthenticateHeadersJsonList[wwwAuthenticateHeadersIndex].AsString(m_wwwAuthenticateHeaders[wwwAuthenticateHeadersIndex]);
    }
    payload.WithArray("wwwAuthenticateHeaders", std::move(wwwAuthenticateHeadersJsonList));
  }

  if (m_buyerPaysGasFeesHasBeenSet) {
    payload.WithBool("buyerPaysGasFees", m_buyerPaysGasFees);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

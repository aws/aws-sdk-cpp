/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MppPaymentOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MppPaymentOutput::MppPaymentOutput(JsonView jsonValue) { *this = jsonValue; }

MppPaymentOutput& MppPaymentOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("selectedPaymentId")) {
    m_selectedPaymentId = jsonValue.GetString("selectedPaymentId");
    m_selectedPaymentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentCredential")) {
    m_paymentCredential = jsonValue.GetString("paymentCredential");
    m_paymentCredentialHasBeenSet = true;
  }
  return *this;
}

JsonValue MppPaymentOutput::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_selectedPaymentIdHasBeenSet) {
    payload.WithString("selectedPaymentId", m_selectedPaymentId);
  }

  if (m_paymentCredentialHasBeenSet) {
    payload.WithString("paymentCredential", m_paymentCredential);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

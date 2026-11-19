/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AwsBillingX402PaymentOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AwsBillingX402PaymentOutput::AwsBillingX402PaymentOutput(JsonView jsonValue) { *this = jsonValue; }

AwsBillingX402PaymentOutput& AwsBillingX402PaymentOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentToken")) {
    m_paymentToken = jsonValue.GetString("paymentToken");
    m_paymentTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsBillingX402PaymentOutput::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_paymentTokenHasBeenSet) {
    payload.WithString("paymentToken", m_paymentToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

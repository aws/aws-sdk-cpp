/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AwsBillingX402PaymentInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AwsBillingX402PaymentInput::AwsBillingX402PaymentInput(JsonView jsonValue) { *this = jsonValue; }

AwsBillingX402PaymentInput& AwsBillingX402PaymentInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payload")) {
    m_payload = jsonValue.GetObject("payload");
    m_payloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("options")) {
    m_options = jsonValue.GetObject("options");
    m_optionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsBillingX402PaymentInput::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_payloadHasBeenSet) {
    if (!m_payload.View().IsNull()) {
      payload.WithObject("payload", JsonValue(m_payload.View()));
    }
  }

  if (m_optionsHasBeenSet) {
    payload.WithObject("options", m_options.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

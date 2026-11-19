/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AwsBillingPaymentOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

AwsBillingPaymentOptions::AwsBillingPaymentOptions(JsonView jsonValue) { *this = jsonValue; }

AwsBillingPaymentOptions& AwsBillingPaymentOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dpopJwk")) {
    m_dpopJwk = jsonValue.GetObject("dpopJwk");
    m_dpopJwkHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsBillingPaymentOptions::Jsonize() const {
  JsonValue payload;

  if (m_dpopJwkHasBeenSet) {
    payload.WithObject("dpopJwk", m_dpopJwk.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

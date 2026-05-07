/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentProviderConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PaymentProviderConfigurationInput::PaymentProviderConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

PaymentProviderConfigurationInput& PaymentProviderConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coinbaseCdpConfiguration")) {
    m_coinbaseCdpConfiguration = jsonValue.GetObject("coinbaseCdpConfiguration");
    m_coinbaseCdpConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stripePrivyConfiguration")) {
    m_stripePrivyConfiguration = jsonValue.GetObject("stripePrivyConfiguration");
    m_stripePrivyConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentProviderConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_coinbaseCdpConfigurationHasBeenSet) {
    payload.WithObject("coinbaseCdpConfiguration", m_coinbaseCdpConfiguration.Jsonize());
  }

  if (m_stripePrivyConfigurationHasBeenSet) {
    payload.WithObject("stripePrivyConfiguration", m_stripePrivyConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

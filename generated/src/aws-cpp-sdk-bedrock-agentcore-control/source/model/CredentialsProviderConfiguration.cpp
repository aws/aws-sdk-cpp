/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialsProviderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CredentialsProviderConfiguration::CredentialsProviderConfiguration(JsonView jsonValue) { *this = jsonValue; }

CredentialsProviderConfiguration& CredentialsProviderConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("coinbaseCDP")) {
    m_coinbaseCDP = jsonValue.GetObject("coinbaseCDP");
    m_coinbaseCDPHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stripePrivy")) {
    m_stripePrivy = jsonValue.GetObject("stripePrivy");
    m_stripePrivyHasBeenSet = true;
  }
  return *this;
}

JsonValue CredentialsProviderConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_coinbaseCDPHasBeenSet) {
    payload.WithObject("coinbaseCDP", m_coinbaseCDP.Jsonize());
  }

  if (m_stripePrivyHasBeenSet) {
    payload.WithObject("stripePrivy", m_stripePrivy.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

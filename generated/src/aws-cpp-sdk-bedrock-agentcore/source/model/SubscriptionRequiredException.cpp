/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SubscriptionRequiredException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

SubscriptionRequiredException::SubscriptionRequiredException(JsonView jsonValue) { *this = jsonValue; }

SubscriptionRequiredException& SubscriptionRequiredException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionUrl")) {
    m_subscriptionUrl = jsonValue.GetString("subscriptionUrl");
    m_subscriptionUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productName")) {
    m_productName = jsonValue.GetString("productName");
    m_productNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionRequiredException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_subscriptionUrlHasBeenSet) {
    payload.WithString("subscriptionUrl", m_subscriptionUrl);
  }

  if (m_productNameHasBeenSet) {
    payload.WithString("productName", m_productName);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

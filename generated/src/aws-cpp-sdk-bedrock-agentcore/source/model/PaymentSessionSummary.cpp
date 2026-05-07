/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentSessionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PaymentSessionSummary::PaymentSessionSummary(JsonView jsonValue) { *this = jsonValue; }

PaymentSessionSummary& PaymentSessionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentSessionId")) {
    m_paymentSessionId = jsonValue.GetString("paymentSessionId");
    m_paymentSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentManagerArn")) {
    m_paymentManagerArn = jsonValue.GetString("paymentManagerArn");
    m_paymentManagerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiryTimeInMinutes")) {
    m_expiryTimeInMinutes = jsonValue.GetInteger("expiryTimeInMinutes");
    m_expiryTimeInMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentSessionSummary::Jsonize() const {
  JsonValue payload;

  if (m_paymentSessionIdHasBeenSet) {
    payload.WithString("paymentSessionId", m_paymentSessionId);
  }

  if (m_paymentManagerArnHasBeenSet) {
    payload.WithString("paymentManagerArn", m_paymentManagerArn);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_expiryTimeInMinutesHasBeenSet) {
    payload.WithInteger("expiryTimeInMinutes", m_expiryTimeInMinutes);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

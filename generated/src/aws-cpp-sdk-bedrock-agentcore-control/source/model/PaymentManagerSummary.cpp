/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentManagerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PaymentManagerSummary::PaymentManagerSummary(JsonView jsonValue) { *this = jsonValue; }

PaymentManagerSummary& PaymentManagerSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentManagerArn")) {
    m_paymentManagerArn = jsonValue.GetString("paymentManagerArn");
    m_paymentManagerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentManagerId")) {
    m_paymentManagerId = jsonValue.GetString("paymentManagerId");
    m_paymentManagerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizerType")) {
    m_authorizerType = PaymentsAuthorizerTypeMapper::GetPaymentsAuthorizerTypeForName(jsonValue.GetString("authorizerType"));
    m_authorizerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentManagerStatusMapper::GetPaymentManagerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentManagerSummary::Jsonize() const {
  JsonValue payload;

  if (m_paymentManagerArnHasBeenSet) {
    payload.WithString("paymentManagerArn", m_paymentManagerArn);
  }

  if (m_paymentManagerIdHasBeenSet) {
    payload.WithString("paymentManagerId", m_paymentManagerId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_authorizerTypeHasBeenSet) {
    payload.WithString("authorizerType", PaymentsAuthorizerTypeMapper::GetNameForPaymentsAuthorizerType(m_authorizerType));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PaymentManagerStatusMapper::GetNameForPaymentManagerStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

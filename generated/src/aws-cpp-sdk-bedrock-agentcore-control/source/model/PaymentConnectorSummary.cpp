/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentConnectorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PaymentConnectorSummary::PaymentConnectorSummary(JsonView jsonValue) { *this = jsonValue; }

PaymentConnectorSummary& PaymentConnectorSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentConnectorId")) {
    m_paymentConnectorId = jsonValue.GetString("paymentConnectorId");
    m_paymentConnectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = PaymentConnectorTypeMapper::GetPaymentConnectorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentConnectorStatusMapper::GetPaymentConnectorStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentConnectorSummary::Jsonize() const {
  JsonValue payload;

  if (m_paymentConnectorIdHasBeenSet) {
    payload.WithString("paymentConnectorId", m_paymentConnectorId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", PaymentConnectorTypeMapper::GetNameForPaymentConnectorType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PaymentConnectorStatusMapper::GetNameForPaymentConnectorStatus(m_status));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

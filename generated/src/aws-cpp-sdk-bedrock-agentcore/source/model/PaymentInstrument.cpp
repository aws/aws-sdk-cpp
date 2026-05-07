/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentInstrument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PaymentInstrument::PaymentInstrument(JsonView jsonValue) { *this = jsonValue; }

PaymentInstrument& PaymentInstrument::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("paymentInstrumentId")) {
    m_paymentInstrumentId = jsonValue.GetString("paymentInstrumentId");
    m_paymentInstrumentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentManagerArn")) {
    m_paymentManagerArn = jsonValue.GetString("paymentManagerArn");
    m_paymentManagerArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentConnectorId")) {
    m_paymentConnectorId = jsonValue.GetString("paymentConnectorId");
    m_paymentConnectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentInstrumentType")) {
    m_paymentInstrumentType = PaymentInstrumentTypeMapper::GetPaymentInstrumentTypeForName(jsonValue.GetString("paymentInstrumentType"));
    m_paymentInstrumentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentInstrumentDetails")) {
    m_paymentInstrumentDetails = jsonValue.GetObject("paymentInstrumentDetails");
    m_paymentInstrumentDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PaymentInstrumentStatusMapper::GetPaymentInstrumentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentInstrument::Jsonize() const {
  JsonValue payload;

  if (m_paymentInstrumentIdHasBeenSet) {
    payload.WithString("paymentInstrumentId", m_paymentInstrumentId);
  }

  if (m_paymentManagerArnHasBeenSet) {
    payload.WithString("paymentManagerArn", m_paymentManagerArn);
  }

  if (m_paymentConnectorIdHasBeenSet) {
    payload.WithString("paymentConnectorId", m_paymentConnectorId);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_paymentInstrumentTypeHasBeenSet) {
    payload.WithString("paymentInstrumentType", PaymentInstrumentTypeMapper::GetNameForPaymentInstrumentType(m_paymentInstrumentType));
  }

  if (m_paymentInstrumentDetailsHasBeenSet) {
    payload.WithObject("paymentInstrumentDetails", m_paymentInstrumentDetails.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PaymentInstrumentStatusMapper::GetNameForPaymentInstrumentStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

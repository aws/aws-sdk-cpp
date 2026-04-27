/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/model/KeyLastUsageData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KMS {
namespace Model {

KeyLastUsageData::KeyLastUsageData(JsonView jsonValue) { *this = jsonValue; }

KeyLastUsageData& KeyLastUsageData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Operation")) {
    m_operation = KeyLastUsageTrackingOperationMapper::GetKeyLastUsageTrackingOperationForName(jsonValue.GetString("Operation"));
    m_operationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloudTrailEventId")) {
    m_cloudTrailEventId = jsonValue.GetString("CloudTrailEventId");
    m_cloudTrailEventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsRequestId")) {
    m_kmsRequestId = jsonValue.GetString("KmsRequestId");
    m_kmsRequestIdHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyLastUsageData::Jsonize() const {
  JsonValue payload;

  if (m_operationHasBeenSet) {
    payload.WithString("Operation", KeyLastUsageTrackingOperationMapper::GetNameForKeyLastUsageTrackingOperation(m_operation));
  }

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_cloudTrailEventIdHasBeenSet) {
    payload.WithString("CloudTrailEventId", m_cloudTrailEventId);
  }

  if (m_kmsRequestIdHasBeenSet) {
    payload.WithString("KmsRequestId", m_kmsRequestId);
  }

  return payload;
}

}  // namespace Model
}  // namespace KMS
}  // namespace Aws

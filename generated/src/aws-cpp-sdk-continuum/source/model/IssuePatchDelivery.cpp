/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssuePatchDelivery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

IssuePatchDelivery::IssuePatchDelivery(JsonView jsonValue) { *this = jsonValue; }

IssuePatchDelivery& IssuePatchDelivery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = IssuePatchDeliveryStatusMapper::GetIssuePatchDeliveryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("patchCount")) {
    m_patchCount = jsonValue.GetInteger("patchCount");
    m_patchCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("succeededCount")) {
    m_succeededCount = jsonValue.GetInteger("succeededCount");
    m_succeededCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedCount")) {
    m_failedCount = jsonValue.GetInteger("failedCount");
    m_failedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReasons")) {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for (unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex) {
      m_failureReasons.push_back(DeliveryReasonMapper::GetDeliveryReasonForName(failureReasonsJsonList[failureReasonsIndex].AsString()));
    }
    m_failureReasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue IssuePatchDelivery::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", IssuePatchDeliveryStatusMapper::GetNameForIssuePatchDeliveryStatus(m_status));
  }

  if (m_patchCountHasBeenSet) {
    payload.WithInteger("patchCount", m_patchCount);
  }

  if (m_succeededCountHasBeenSet) {
    payload.WithInteger("succeededCount", m_succeededCount);
  }

  if (m_failedCountHasBeenSet) {
    payload.WithInteger("failedCount", m_failedCount);
  }

  if (m_failureReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> failureReasonsJsonList(m_failureReasons.size());
    for (unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex) {
      failureReasonsJsonList[failureReasonsIndex].AsString(
          DeliveryReasonMapper::GetNameForDeliveryReason(m_failureReasons[failureReasonsIndex]));
    }
    payload.WithArray("failureReasons", std::move(failureReasonsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws

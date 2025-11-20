/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/UpdateSpendingLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSpendingLimitRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_spendingLimitHasBeenSet) {
    payload.WithString("spendingLimit", m_spendingLimit);
  }

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("timePeriod", m_timePeriod.Jsonize());
  }

  return payload.View().WriteReadable();
}

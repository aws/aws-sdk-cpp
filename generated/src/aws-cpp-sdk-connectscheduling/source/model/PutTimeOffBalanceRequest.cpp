/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/PutTimeOffBalanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectScheduling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutTimeOffBalanceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_balanceHasBeenSet) {
    payload.WithObject("Balance", m_balance.Jsonize());
  }

  return payload.View().WriteReadable();
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/ExtendTransactionRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExtendTransactionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_transactionIdHasBeenSet) {
    payload.WithString("TransactionId", m_transactionId);
  }

  return payload.View().WriteReadable();
}

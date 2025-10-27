/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/StartTransactionRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTransactionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_transactionTypeHasBeenSet) {
    payload.WithString("TransactionType", TransactionTypeMapper::GetNameForTransactionType(m_transactionType));
  }

  return payload.View().WriteReadable();
}

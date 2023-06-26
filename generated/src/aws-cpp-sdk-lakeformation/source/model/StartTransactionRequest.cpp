/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/StartTransactionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTransactionRequest::StartTransactionRequest() : 
    m_transactionType(TransactionType::NOT_SET),
    m_transactionTypeHasBeenSet(false)
{
}

Aws::String StartTransactionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transactionTypeHasBeenSet)
  {
   payload.WithString("TransactionType", TransactionTypeMapper::GetNameForTransactionType(m_transactionType));
  }

  return payload.View().WriteReadable();
}





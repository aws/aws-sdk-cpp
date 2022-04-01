/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/RollbackTransactionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RollbackTransactionRequest::RollbackTransactionRequest() : 
    m_resourceArnHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

Aws::String RollbackTransactionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  return payload.View().WriteReadable();
}





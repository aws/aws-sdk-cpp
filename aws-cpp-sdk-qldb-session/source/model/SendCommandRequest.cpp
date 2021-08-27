/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/SendCommandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDBSession::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendCommandRequest::SendCommandRequest() : 
    m_sessionTokenHasBeenSet(false),
    m_startSessionHasBeenSet(false),
    m_startTransactionHasBeenSet(false),
    m_endSessionHasBeenSet(false),
    m_commitTransactionHasBeenSet(false),
    m_abortTransactionHasBeenSet(false),
    m_executeStatementHasBeenSet(false),
    m_fetchPageHasBeenSet(false)
{
}

Aws::String SendCommandRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("SessionToken", m_sessionToken);

  }

  if(m_startSessionHasBeenSet)
  {
   payload.WithObject("StartSession", m_startSession.Jsonize());

  }

  if(m_startTransactionHasBeenSet)
  {
   payload.WithObject("StartTransaction", m_startTransaction.Jsonize());

  }

  if(m_endSessionHasBeenSet)
  {
   payload.WithObject("EndSession", m_endSession.Jsonize());

  }

  if(m_commitTransactionHasBeenSet)
  {
   payload.WithObject("CommitTransaction", m_commitTransaction.Jsonize());

  }

  if(m_abortTransactionHasBeenSet)
  {
   payload.WithObject("AbortTransaction", m_abortTransaction.Jsonize());

  }

  if(m_executeStatementHasBeenSet)
  {
   payload.WithObject("ExecuteStatement", m_executeStatement.Jsonize());

  }

  if(m_fetchPageHasBeenSet)
  {
   payload.WithObject("FetchPage", m_fetchPage.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendCommandRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "QLDBSession.SendCommand"));
  return headers;

}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListStatementsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListStatementsRequest::ListStatementsRequest() : 
    m_sessionIdHasBeenSet(false),
    m_requestOriginHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListStatementsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  if(m_requestOriginHasBeenSet)
  {
   payload.WithString("RequestOrigin", m_requestOrigin);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListStatementsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ListStatements"));
  return headers;

}





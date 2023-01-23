/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UpdatePreparedStatementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePreparedStatementRequest::UpdatePreparedStatementRequest() : 
    m_statementNameHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_queryStatementHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String UpdatePreparedStatementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("QueryStatement", m_queryStatement);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePreparedStatementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.UpdatePreparedStatement"));
  return headers;

}





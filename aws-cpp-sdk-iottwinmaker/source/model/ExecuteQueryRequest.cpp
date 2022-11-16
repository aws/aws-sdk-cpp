/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ExecuteQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteQueryRequest::ExecuteQueryRequest() : 
    m_workspaceIdHasBeenSet(false),
    m_queryStatementHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ExecuteQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("workspaceId", m_workspaceId);

  }

  if(m_queryStatementHasBeenSet)
  {
   payload.WithString("queryStatement", m_queryStatement);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}





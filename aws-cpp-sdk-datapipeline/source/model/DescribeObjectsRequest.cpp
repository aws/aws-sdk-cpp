/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeObjectsRequest::DescribeObjectsRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_objectIdsHasBeenSet(false),
    m_evaluateExpressions(false),
    m_evaluateExpressionsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeObjectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_objectIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectIdsJsonList(m_objectIds.size());
   for(unsigned objectIdsIndex = 0; objectIdsIndex < objectIdsJsonList.GetLength(); ++objectIdsIndex)
   {
     objectIdsJsonList[objectIdsIndex].AsString(m_objectIds[objectIdsIndex]);
   }
   payload.WithArray("objectIds", std::move(objectIdsJsonList));

  }

  if(m_evaluateExpressionsHasBeenSet)
  {
   payload.WithBool("evaluateExpressions", m_evaluateExpressions);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeObjectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.DescribeObjects"));
  return headers;

}





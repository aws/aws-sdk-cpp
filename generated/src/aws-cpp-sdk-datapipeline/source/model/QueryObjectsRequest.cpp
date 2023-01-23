/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryObjectsRequest::QueryObjectsRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_sphereHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String QueryObjectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_queryHasBeenSet)
  {
   payload.WithObject("query", m_query.Jsonize());

  }

  if(m_sphereHasBeenSet)
  {
   payload.WithString("sphere", m_sphere);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("marker", m_marker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection QueryObjectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.QueryObjects"));
  return headers;

}





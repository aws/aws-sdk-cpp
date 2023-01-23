/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/DeactivatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeactivatePipelineRequest::DeactivatePipelineRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_cancelActive(false),
    m_cancelActiveHasBeenSet(false)
{
}

Aws::String DeactivatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_cancelActiveHasBeenSet)
  {
   payload.WithBool("cancelActive", m_cancelActive);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeactivatePipelineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.DeactivatePipeline"));
  return headers;

}





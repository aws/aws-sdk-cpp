﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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





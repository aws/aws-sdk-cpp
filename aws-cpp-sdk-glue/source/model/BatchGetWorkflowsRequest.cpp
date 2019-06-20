/*
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

#include <aws/glue/model/BatchGetWorkflowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetWorkflowsRequest::BatchGetWorkflowsRequest() : 
    m_namesHasBeenSet(false),
    m_includeGraph(false),
    m_includeGraphHasBeenSet(false)
{
}

Aws::String BatchGetWorkflowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namesHasBeenSet)
  {
   Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_includeGraphHasBeenSet)
  {
   payload.WithBool("IncludeGraph", m_includeGraph);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetWorkflowsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetWorkflows"));
  return headers;

}





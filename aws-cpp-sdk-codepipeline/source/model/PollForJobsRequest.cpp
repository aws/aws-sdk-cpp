/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/PollForJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PollForJobsRequest::PollForJobsRequest() : 
    m_actionTypeIdHasBeenSet(false),
    m_maxBatchSize(0),
    m_maxBatchSizeHasBeenSet(false),
    m_queryParamHasBeenSet(false)
{
}

Aws::String PollForJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionTypeIdHasBeenSet)
  {
   payload.WithObject("actionTypeId", m_actionTypeId.Jsonize());

  }

  if(m_maxBatchSizeHasBeenSet)
  {
   payload.WithInteger("maxBatchSize", m_maxBatchSize);

  }

  if(m_queryParamHasBeenSet)
  {
   JsonValue queryParamJsonMap;
   for(auto& queryParamItem : m_queryParam)
   {
     queryParamJsonMap.WithString(queryParamItem.first, queryParamItem.second);
   }
   payload.WithObject("queryParam", std::move(queryParamJsonMap));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PollForJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PollForJobs"));
  return headers;

}




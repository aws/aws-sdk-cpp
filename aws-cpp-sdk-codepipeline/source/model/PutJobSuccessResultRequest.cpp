/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutJobSuccessResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutJobSuccessResultRequest::PutJobSuccessResultRequest() : 
    m_jobIdHasBeenSet(false),
    m_currentRevisionHasBeenSet(false),
    m_continuationTokenHasBeenSet(false),
    m_executionDetailsHasBeenSet(false),
    m_outputVariablesHasBeenSet(false)
{
}

Aws::String PutJobSuccessResultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_currentRevisionHasBeenSet)
  {
   payload.WithObject("currentRevision", m_currentRevision.Jsonize());

  }

  if(m_continuationTokenHasBeenSet)
  {
   payload.WithString("continuationToken", m_continuationToken);

  }

  if(m_executionDetailsHasBeenSet)
  {
   payload.WithObject("executionDetails", m_executionDetails.Jsonize());

  }

  if(m_outputVariablesHasBeenSet)
  {
   JsonValue outputVariablesJsonMap;
   for(auto& outputVariablesItem : m_outputVariables)
   {
     outputVariablesJsonMap.WithString(outputVariablesItem.first, outputVariablesItem.second);
   }
   payload.WithObject("outputVariables", std::move(outputVariablesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutJobSuccessResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PutJobSuccessResult"));
  return headers;

}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutThirdPartyJobSuccessResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutThirdPartyJobSuccessResultRequest::PutThirdPartyJobSuccessResultRequest() : 
    m_jobIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_currentRevisionHasBeenSet(false),
    m_continuationTokenHasBeenSet(false),
    m_executionDetailsHasBeenSet(false)
{
}

Aws::String PutThirdPartyJobSuccessResultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutThirdPartyJobSuccessResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PutThirdPartyJobSuccessResult"));
  return headers;

}





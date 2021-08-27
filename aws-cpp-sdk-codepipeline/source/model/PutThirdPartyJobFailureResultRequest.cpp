/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PutThirdPartyJobFailureResultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutThirdPartyJobFailureResultRequest::PutThirdPartyJobFailureResultRequest() : 
    m_jobIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_failureDetailsHasBeenSet(false)
{
}

Aws::String PutThirdPartyJobFailureResultRequest::SerializePayload() const
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

  if(m_failureDetailsHasBeenSet)
  {
   payload.WithObject("failureDetails", m_failureDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutThirdPartyJobFailureResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PutThirdPartyJobFailureResult"));
  return headers;

}





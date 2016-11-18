﻿/*
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutThirdPartyJobFailureResultRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PutThirdPartyJobFailure"));
  return headers;

}




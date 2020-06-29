/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PollForThirdPartyJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PollForThirdPartyJobsRequest::PollForThirdPartyJobsRequest() : 
    m_actionTypeIdHasBeenSet(false),
    m_maxBatchSize(0),
    m_maxBatchSizeHasBeenSet(false)
{
}

Aws::String PollForThirdPartyJobsRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PollForThirdPartyJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PollForThirdPartyJobs"));
  return headers;

}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/AcknowledgeJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcknowledgeJobRequest::AcknowledgeJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_nonceHasBeenSet(false)
{
}

Aws::String AcknowledgeJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_nonceHasBeenSet)
  {
   payload.WithString("nonce", m_nonce);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcknowledgeJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.AcknowledgeJob"));
  return headers;

}





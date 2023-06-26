/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopEntitiesDetectionV2JobRequest::StopEntitiesDetectionV2JobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String StopEntitiesDetectionV2JobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopEntitiesDetectionV2JobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComprehendMedical_20181030.StopEntitiesDetectionV2Job"));
  return headers;

}





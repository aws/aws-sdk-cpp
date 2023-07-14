﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetJobBookmarkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetJobBookmarkRequest::GetJobBookmarkRequest() : 
    m_jobNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

Aws::String GetJobBookmarkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetJobBookmarkRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetJobBookmark"));
  return headers;

}





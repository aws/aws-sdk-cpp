﻿/*
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

#include <aws/mturk-requester/model/DeleteWorkerBlockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorkerBlockRequest::DeleteWorkerBlockRequest() : 
    m_workerIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String DeleteWorkerBlockRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteWorkerBlockRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.DeleteWorkerBlock"));
  return headers;

}





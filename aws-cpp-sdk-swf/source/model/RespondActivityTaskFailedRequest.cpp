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

#include <aws/swf/model/RespondActivityTaskFailedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RespondActivityTaskFailedRequest::RespondActivityTaskFailedRequest() : 
    m_taskTokenHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Aws::String RespondActivityTaskFailedRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RespondActivityTaskFailedRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RespondActivityTaskFailed"));
  return headers;

}





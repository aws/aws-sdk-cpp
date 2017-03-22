/*
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
#include <aws/states/model/SendTaskSuccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendTaskSuccessRequest::SendTaskSuccessRequest() : 
    m_taskTokenHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

Aws::String SendTaskSuccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SendTaskSuccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.SendTaskSuccess"));
  return headers;

}





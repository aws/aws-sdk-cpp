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
#include <aws/opsworks/model/DescribeServiceErrorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeServiceErrorsRequest::DescribeServiceErrorsRequest() : 
    m_stackIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_serviceErrorIdsHasBeenSet(false)
{
}

Aws::String DescribeServiceErrorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_serviceErrorIdsHasBeenSet)
  {
   Array<JsonValue> serviceErrorIdsJsonList(m_serviceErrorIds.size());
   for(unsigned serviceErrorIdsIndex = 0; serviceErrorIdsIndex < serviceErrorIdsJsonList.GetLength(); ++serviceErrorIdsIndex)
   {
     serviceErrorIdsJsonList[serviceErrorIdsIndex].AsString(m_serviceErrorIds[serviceErrorIdsIndex]);
   }
   payload.WithArray("ServiceErrorIds", std::move(serviceErrorIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServiceErrorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeServiceErrors"));
  return headers;

}




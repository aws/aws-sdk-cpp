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
#include <aws/codedeploy/model/ListDeploymentInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDeploymentInstancesRequest::ListDeploymentInstancesRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_instanceStatusFilterHasBeenSet(false)
{
}

Aws::String ListDeploymentInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_instanceStatusFilterHasBeenSet)
  {
   Array<JsonValue> instanceStatusFilterJsonList(m_instanceStatusFilter.size());
   for(unsigned instanceStatusFilterIndex = 0; instanceStatusFilterIndex < instanceStatusFilterJsonList.GetLength(); ++instanceStatusFilterIndex)
   {
     instanceStatusFilterJsonList[instanceStatusFilterIndex].AsString(InstanceStatusMapper::GetNameForInstanceStatus(m_instanceStatusFilter[instanceStatusFilterIndex]));
   }
   payload.WithArray("instanceStatusFilter", std::move(instanceStatusFilterJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListDeploymentInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.ListDeploymentInstances"));
  return headers;

}




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
#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDeploymentsRequest::ListDeploymentsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupNameHasBeenSet(false),
    m_includeOnlyStatusesHasBeenSet(false),
    m_createTimeRangeHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDeploymentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_deploymentGroupNameHasBeenSet)
  {
   payload.WithString("deploymentGroupName", m_deploymentGroupName);

  }

  if(m_includeOnlyStatusesHasBeenSet)
  {
   Array<JsonValue> includeOnlyStatusesJsonList(m_includeOnlyStatuses.size());
   for(unsigned includeOnlyStatusesIndex = 0; includeOnlyStatusesIndex < includeOnlyStatusesJsonList.GetLength(); ++includeOnlyStatusesIndex)
   {
     includeOnlyStatusesJsonList[includeOnlyStatusesIndex].AsString(DeploymentStatusMapper::GetNameForDeploymentStatus(m_includeOnlyStatuses[includeOnlyStatusesIndex]));
   }
   payload.WithArray("includeOnlyStatuses", std::move(includeOnlyStatusesJsonList));

  }

  if(m_createTimeRangeHasBeenSet)
  {
   payload.WithObject("createTimeRange", m_createTimeRange.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.ListDeployments"));
  return headers;

}




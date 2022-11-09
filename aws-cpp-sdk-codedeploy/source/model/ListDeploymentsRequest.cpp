/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_externalIdHasBeenSet(false),
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

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_includeOnlyStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeOnlyStatusesJsonList(m_includeOnlyStatuses.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.ListDeployments"));
  return headers;

}





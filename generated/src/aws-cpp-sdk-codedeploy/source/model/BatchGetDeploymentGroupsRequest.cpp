/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetDeploymentGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetDeploymentGroupsRequest::BatchGetDeploymentGroupsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_deploymentGroupNamesHasBeenSet(false)
{
}

Aws::String BatchGetDeploymentGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_deploymentGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentGroupNamesJsonList(m_deploymentGroupNames.size());
   for(unsigned deploymentGroupNamesIndex = 0; deploymentGroupNamesIndex < deploymentGroupNamesJsonList.GetLength(); ++deploymentGroupNamesIndex)
   {
     deploymentGroupNamesJsonList[deploymentGroupNamesIndex].AsString(m_deploymentGroupNames[deploymentGroupNamesIndex]);
   }
   payload.WithArray("deploymentGroupNames", std::move(deploymentGroupNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDeploymentGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetDeploymentGroups"));
  return headers;

}





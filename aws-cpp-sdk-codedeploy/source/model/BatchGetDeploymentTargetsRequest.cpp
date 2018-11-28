/*
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

#include <aws/codedeploy/model/BatchGetDeploymentTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetDeploymentTargetsRequest::BatchGetDeploymentTargetsRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_targetIdsHasBeenSet(false)
{
}

Aws::String BatchGetDeploymentTargetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_targetIdsHasBeenSet)
  {
   Array<JsonValue> targetIdsJsonList(m_targetIds.size());
   for(unsigned targetIdsIndex = 0; targetIdsIndex < targetIdsJsonList.GetLength(); ++targetIdsIndex)
   {
     targetIdsJsonList[targetIdsIndex].AsString(m_targetIds[targetIdsIndex]);
   }
   payload.WithArray("targetIds", std::move(targetIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDeploymentTargetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetDeploymentTargets"));
  return headers;

}





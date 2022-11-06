/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> targetIdsJsonList(m_targetIds.size());
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





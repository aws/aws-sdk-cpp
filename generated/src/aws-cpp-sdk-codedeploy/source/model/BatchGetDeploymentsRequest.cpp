/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetDeploymentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetDeploymentsRequest::BatchGetDeploymentsRequest() : 
    m_deploymentIdsHasBeenSet(false)
{
}

Aws::String BatchGetDeploymentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentIdsJsonList(m_deploymentIds.size());
   for(unsigned deploymentIdsIndex = 0; deploymentIdsIndex < deploymentIdsJsonList.GetLength(); ++deploymentIdsIndex)
   {
     deploymentIdsJsonList[deploymentIdsIndex].AsString(m_deploymentIds[deploymentIdsIndex]);
   }
   payload.WithArray("deploymentIds", std::move(deploymentIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetDeployments"));
  return headers;

}





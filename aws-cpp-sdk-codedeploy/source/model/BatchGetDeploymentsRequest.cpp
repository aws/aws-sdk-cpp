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
   Array<JsonValue> deploymentIdsJsonList(m_deploymentIds.size());
   for(unsigned deploymentIdsIndex = 0; deploymentIdsIndex < deploymentIdsJsonList.GetLength(); ++deploymentIdsIndex)
   {
     deploymentIdsJsonList[deploymentIdsIndex].AsString(m_deploymentIds[deploymentIdsIndex]);
   }
   payload.WithArray("deploymentIds", std::move(deploymentIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetDeployments"));
  return headers;

}




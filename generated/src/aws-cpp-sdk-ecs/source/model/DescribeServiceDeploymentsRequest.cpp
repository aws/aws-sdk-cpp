/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeServiceDeploymentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeServiceDeploymentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceDeploymentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceDeploymentArnsJsonList(m_serviceDeploymentArns.size());
   for(unsigned serviceDeploymentArnsIndex = 0; serviceDeploymentArnsIndex < serviceDeploymentArnsJsonList.GetLength(); ++serviceDeploymentArnsIndex)
   {
     serviceDeploymentArnsJsonList[serviceDeploymentArnsIndex].AsString(m_serviceDeploymentArns[serviceDeploymentArnsIndex]);
   }
   payload.WithArray("serviceDeploymentArns", std::move(serviceDeploymentArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServiceDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeServiceDeployments"));
  return headers;

}





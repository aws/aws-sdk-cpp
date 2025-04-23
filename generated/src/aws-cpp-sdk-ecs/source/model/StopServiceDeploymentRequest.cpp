/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/StopServiceDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopServiceDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceDeploymentArnHasBeenSet)
  {
   payload.WithString("serviceDeploymentArn", m_serviceDeploymentArn);

  }

  if(m_stopTypeHasBeenSet)
  {
   payload.WithString("stopType", StopServiceDeploymentStopTypeMapper::GetNameForStopServiceDeploymentStopType(m_stopType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopServiceDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.StopServiceDeployment"));
  return headers;

}





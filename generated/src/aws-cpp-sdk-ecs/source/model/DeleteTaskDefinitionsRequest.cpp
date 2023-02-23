/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeleteTaskDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTaskDefinitionsRequest::DeleteTaskDefinitionsRequest() : 
    m_taskDefinitionsHasBeenSet(false)
{
}

Aws::String DeleteTaskDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskDefinitionsJsonList(m_taskDefinitions.size());
   for(unsigned taskDefinitionsIndex = 0; taskDefinitionsIndex < taskDefinitionsJsonList.GetLength(); ++taskDefinitionsIndex)
   {
     taskDefinitionsJsonList[taskDefinitionsIndex].AsString(m_taskDefinitions[taskDefinitionsIndex]);
   }
   payload.WithArray("taskDefinitions", std::move(taskDefinitionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTaskDefinitionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DeleteTaskDefinitions"));
  return headers;

}





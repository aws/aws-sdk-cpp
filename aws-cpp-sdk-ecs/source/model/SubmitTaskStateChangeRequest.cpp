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

#include <aws/ecs/model/SubmitTaskStateChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubmitTaskStateChangeRequest::SubmitTaskStateChangeRequest() : 
    m_clusterHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_pullStartedAtHasBeenSet(false),
    m_pullStoppedAtHasBeenSet(false),
    m_executionStoppedAtHasBeenSet(false)
{
}

Aws::String SubmitTaskStateChangeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("task", m_task);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_containersHasBeenSet)
  {
   Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_attachmentsHasBeenSet)
  {
   Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  if(m_pullStartedAtHasBeenSet)
  {
   payload.WithDouble("pullStartedAt", m_pullStartedAt.SecondsWithMSPrecision());
  }

  if(m_pullStoppedAtHasBeenSet)
  {
   payload.WithDouble("pullStoppedAt", m_pullStoppedAt.SecondsWithMSPrecision());
  }

  if(m_executionStoppedAtHasBeenSet)
  {
   payload.WithDouble("executionStoppedAt", m_executionStoppedAt.SecondsWithMSPrecision());
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SubmitTaskStateChangeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.SubmitTaskStateChange"));
  return headers;

}





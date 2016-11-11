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
#include <aws/ecs/model/ListTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTasksRequest::ListTasksRequest() : 
    m_clusterHasBeenSet(false),
    m_containerInstanceHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_desiredStatus(DesiredStatus::NOT_SET),
    m_desiredStatusHasBeenSet(false)
{
}

Aws::String ListTasksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_containerInstanceHasBeenSet)
  {
   payload.WithString("containerInstance", m_containerInstance);

  }

  if(m_familyHasBeenSet)
  {
   payload.WithString("family", m_family);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_desiredStatusHasBeenSet)
  {
   payload.WithString("desiredStatus", DesiredStatusMapper::GetNameForDesiredStatus(m_desiredStatus));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListTasksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListTasks"));
  return headers;

}




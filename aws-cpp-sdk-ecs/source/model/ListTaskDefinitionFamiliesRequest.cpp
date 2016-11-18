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
#include <aws/ecs/model/ListTaskDefinitionFamiliesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTaskDefinitionFamiliesRequest::ListTaskDefinitionFamiliesRequest() : 
    m_familyPrefixHasBeenSet(false),
    m_status(TaskDefinitionFamilyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListTaskDefinitionFamiliesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_familyPrefixHasBeenSet)
  {
   payload.WithString("familyPrefix", m_familyPrefix);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TaskDefinitionFamilyStatusMapper::GetNameForTaskDefinitionFamilyStatus(m_status));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListTaskDefinitionFamiliesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListTaskDefinitionFamilies"));
  return headers;

}




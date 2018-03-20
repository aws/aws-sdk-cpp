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

#include <aws/medialive/model/UpdateInputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInputRequest::UpdateInputRequest() : 
    m_destinationsHasBeenSet(false),
    m_inputIdHasBeenSet(false),
    m_inputSecurityGroupsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

Aws::String UpdateInputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationsHasBeenSet)
  {
   Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_inputSecurityGroupsHasBeenSet)
  {
   Array<JsonValue> inputSecurityGroupsJsonList(m_inputSecurityGroups.size());
   for(unsigned inputSecurityGroupsIndex = 0; inputSecurityGroupsIndex < inputSecurityGroupsJsonList.GetLength(); ++inputSecurityGroupsIndex)
   {
     inputSecurityGroupsJsonList[inputSecurityGroupsIndex].AsString(m_inputSecurityGroups[inputSecurityGroupsIndex]);
   }
   payload.WithArray("inputSecurityGroups", std::move(inputSecurityGroupsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourcesHasBeenSet)
  {
   Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  return payload.WriteReadable();
}





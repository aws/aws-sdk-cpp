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

#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInputRequest::CreateInputRequest() : 
    m_destinationsHasBeenSet(false),
    m_inputSecurityGroupsHasBeenSet(false),
    m_mediaConnectFlowsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requestId(Aws::Utils::UUID::RandomUUID()),
    m_requestIdHasBeenSet(true),
    m_roleArnHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(InputType::NOT_SET),
    m_typeHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

Aws::String CreateInputRequest::SerializePayload() const
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

  if(m_mediaConnectFlowsHasBeenSet)
  {
   Array<JsonValue> mediaConnectFlowsJsonList(m_mediaConnectFlows.size());
   for(unsigned mediaConnectFlowsIndex = 0; mediaConnectFlowsIndex < mediaConnectFlowsJsonList.GetLength(); ++mediaConnectFlowsIndex)
   {
     mediaConnectFlowsJsonList[mediaConnectFlowsIndex].AsObject(m_mediaConnectFlows[mediaConnectFlowsIndex].Jsonize());
   }
   payload.WithArray("mediaConnectFlows", std::move(mediaConnectFlowsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InputTypeMapper::GetNameForInputType(m_type));
  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

  }

  return payload.View().WriteReadable();
}





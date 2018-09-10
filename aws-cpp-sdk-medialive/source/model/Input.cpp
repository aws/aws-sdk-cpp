﻿/*
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

#include <aws/medialive/model/Input.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Input::Input() : 
    m_arnHasBeenSet(false),
    m_attachedChannelsHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_state(InputState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(InputType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Input::Input(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_attachedChannelsHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_state(InputState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(InputType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Input& Input::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachedChannels"))
  {
    Array<JsonView> attachedChannelsJsonList = jsonValue.GetArray("attachedChannels");
    for(unsigned attachedChannelsIndex = 0; attachedChannelsIndex < attachedChannelsJsonList.GetLength(); ++attachedChannelsIndex)
    {
      m_attachedChannels.push_back(attachedChannelsJsonList[attachedChannelsIndex].AsString());
    }
    m_attachedChannelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinations"))
  {
    Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = InputStateMapper::GetInputStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Input::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_attachedChannelsHasBeenSet)
  {
   Array<JsonValue> attachedChannelsJsonList(m_attachedChannels.size());
   for(unsigned attachedChannelsIndex = 0; attachedChannelsIndex < attachedChannelsJsonList.GetLength(); ++attachedChannelsIndex)
   {
     attachedChannelsJsonList[attachedChannelsIndex].AsString(m_attachedChannels[attachedChannelsIndex]);
   }
   payload.WithArray("attachedChannels", std::move(attachedChannelsJsonList));

  }

  if(m_destinationsHasBeenSet)
  {
   Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

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

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", InputStateMapper::GetNameForInputState(m_state));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InputTypeMapper::GetNameForInputType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

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

#include <aws/medialive/model/RemixSettings.h>
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

RemixSettings::RemixSettings() : 
    m_channelMappingsHasBeenSet(false),
    m_channelsIn(0),
    m_channelsInHasBeenSet(false),
    m_channelsOut(0),
    m_channelsOutHasBeenSet(false)
{
}

RemixSettings::RemixSettings(const JsonValue& jsonValue) : 
    m_channelMappingsHasBeenSet(false),
    m_channelsIn(0),
    m_channelsInHasBeenSet(false),
    m_channelsOut(0),
    m_channelsOutHasBeenSet(false)
{
  *this = jsonValue;
}

RemixSettings& RemixSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("channelMappings"))
  {
    Array<JsonValue> channelMappingsJsonList = jsonValue.GetArray("channelMappings");
    for(unsigned channelMappingsIndex = 0; channelMappingsIndex < channelMappingsJsonList.GetLength(); ++channelMappingsIndex)
    {
      m_channelMappings.push_back(channelMappingsJsonList[channelMappingsIndex].AsObject());
    }
    m_channelMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelsIn"))
  {
    m_channelsIn = jsonValue.GetInteger("channelsIn");

    m_channelsInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelsOut"))
  {
    m_channelsOut = jsonValue.GetInteger("channelsOut");

    m_channelsOutHasBeenSet = true;
  }

  return *this;
}

JsonValue RemixSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelMappingsHasBeenSet)
  {
   Array<JsonValue> channelMappingsJsonList(m_channelMappings.size());
   for(unsigned channelMappingsIndex = 0; channelMappingsIndex < channelMappingsJsonList.GetLength(); ++channelMappingsIndex)
   {
     channelMappingsJsonList[channelMappingsIndex].AsObject(m_channelMappings[channelMappingsIndex].Jsonize());
   }
   payload.WithArray("channelMappings", std::move(channelMappingsJsonList));

  }

  if(m_channelsInHasBeenSet)
  {
   payload.WithInteger("channelsIn", m_channelsIn);

  }

  if(m_channelsOutHasBeenSet)
  {
   payload.WithInteger("channelsOut", m_channelsOut);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

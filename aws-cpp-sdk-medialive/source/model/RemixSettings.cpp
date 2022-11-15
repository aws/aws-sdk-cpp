/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RemixSettings::RemixSettings(JsonView jsonValue) : 
    m_channelMappingsHasBeenSet(false),
    m_channelsIn(0),
    m_channelsInHasBeenSet(false),
    m_channelsOut(0),
    m_channelsOutHasBeenSet(false)
{
  *this = jsonValue;
}

RemixSettings& RemixSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelMappings"))
  {
    Aws::Utils::Array<JsonView> channelMappingsJsonList = jsonValue.GetArray("channelMappings");
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
   Aws::Utils::Array<JsonValue> channelMappingsJsonList(m_channelMappings.size());
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

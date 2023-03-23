/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/StreamChannelDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

StreamChannelDefinition::StreamChannelDefinition() : 
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_channelDefinitionsHasBeenSet(false)
{
}

StreamChannelDefinition::StreamChannelDefinition(JsonView jsonValue) : 
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_channelDefinitionsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamChannelDefinition& StreamChannelDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfChannels"))
  {
    m_numberOfChannels = jsonValue.GetInteger("NumberOfChannels");

    m_numberOfChannelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelDefinitions"))
  {
    Aws::Utils::Array<JsonView> channelDefinitionsJsonList = jsonValue.GetArray("ChannelDefinitions");
    for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
    {
      m_channelDefinitions.push_back(channelDefinitionsJsonList[channelDefinitionsIndex].AsObject());
    }
    m_channelDefinitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamChannelDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfChannelsHasBeenSet)
  {
   payload.WithInteger("NumberOfChannels", m_numberOfChannels);

  }

  if(m_channelDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
   for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
   {
     channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ChannelDefinitions", std::move(channelDefinitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws

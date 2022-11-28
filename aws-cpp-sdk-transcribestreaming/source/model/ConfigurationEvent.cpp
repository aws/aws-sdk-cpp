/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ConfigurationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

ConfigurationEvent::ConfigurationEvent() : 
    m_channelDefinitionsHasBeenSet(false),
    m_postCallAnalyticsSettingsHasBeenSet(false)
{
}

ConfigurationEvent::ConfigurationEvent(JsonView jsonValue) : 
    m_channelDefinitionsHasBeenSet(false),
    m_postCallAnalyticsSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationEvent& ConfigurationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelDefinitions"))
  {
    Aws::Utils::Array<JsonView> channelDefinitionsJsonList = jsonValue.GetArray("ChannelDefinitions");
    for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
    {
      m_channelDefinitions.push_back(channelDefinitionsJsonList[channelDefinitionsIndex].AsObject());
    }
    m_channelDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostCallAnalyticsSettings"))
  {
    m_postCallAnalyticsSettings = jsonValue.GetObject("PostCallAnalyticsSettings");

    m_postCallAnalyticsSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_channelDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelDefinitionsJsonList(m_channelDefinitions.size());
   for(unsigned channelDefinitionsIndex = 0; channelDefinitionsIndex < channelDefinitionsJsonList.GetLength(); ++channelDefinitionsIndex)
   {
     channelDefinitionsJsonList[channelDefinitionsIndex].AsObject(m_channelDefinitions[channelDefinitionsIndex].Jsonize());
   }
   payload.WithArray("ChannelDefinitions", std::move(channelDefinitionsJsonList));

  }

  if(m_postCallAnalyticsSettingsHasBeenSet)
  {
   payload.WithObject("PostCallAnalyticsSettings", m_postCallAnalyticsSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws

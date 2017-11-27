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

#include <aws/mediaconvert/model/PresetSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

PresetSettings::PresetSettings() : 
    m_audioDescriptionsHasBeenSet(false),
    m_captionDescriptionsHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_videoDescriptionHasBeenSet(false)
{
}

PresetSettings::PresetSettings(const JsonValue& jsonValue) : 
    m_audioDescriptionsHasBeenSet(false),
    m_captionDescriptionsHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_videoDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

PresetSettings& PresetSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioDescriptions"))
  {
    Array<JsonValue> audioDescriptionsJsonList = jsonValue.GetArray("audioDescriptions");
    for(unsigned audioDescriptionsIndex = 0; audioDescriptionsIndex < audioDescriptionsJsonList.GetLength(); ++audioDescriptionsIndex)
    {
      m_audioDescriptions.push_back(audioDescriptionsJsonList[audioDescriptionsIndex].AsObject());
    }
    m_audioDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionDescriptions"))
  {
    Array<JsonValue> captionDescriptionsJsonList = jsonValue.GetArray("captionDescriptions");
    for(unsigned captionDescriptionsIndex = 0; captionDescriptionsIndex < captionDescriptionsJsonList.GetLength(); ++captionDescriptionsIndex)
    {
      m_captionDescriptions.push_back(captionDescriptionsJsonList[captionDescriptionsIndex].AsObject());
    }
    m_captionDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerSettings"))
  {
    m_containerSettings = jsonValue.GetObject("containerSettings");

    m_containerSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoDescription"))
  {
    m_videoDescription = jsonValue.GetObject("videoDescription");

    m_videoDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue PresetSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDescriptionsHasBeenSet)
  {
   Array<JsonValue> audioDescriptionsJsonList(m_audioDescriptions.size());
   for(unsigned audioDescriptionsIndex = 0; audioDescriptionsIndex < audioDescriptionsJsonList.GetLength(); ++audioDescriptionsIndex)
   {
     audioDescriptionsJsonList[audioDescriptionsIndex].AsObject(m_audioDescriptions[audioDescriptionsIndex].Jsonize());
   }
   payload.WithArray("audioDescriptions", std::move(audioDescriptionsJsonList));

  }

  if(m_captionDescriptionsHasBeenSet)
  {
   Array<JsonValue> captionDescriptionsJsonList(m_captionDescriptions.size());
   for(unsigned captionDescriptionsIndex = 0; captionDescriptionsIndex < captionDescriptionsJsonList.GetLength(); ++captionDescriptionsIndex)
   {
     captionDescriptionsJsonList[captionDescriptionsIndex].AsObject(m_captionDescriptions[captionDescriptionsIndex].Jsonize());
   }
   payload.WithArray("captionDescriptions", std::move(captionDescriptionsJsonList));

  }

  if(m_containerSettingsHasBeenSet)
  {
   payload.WithObject("containerSettings", m_containerSettings.Jsonize());

  }

  if(m_videoDescriptionHasBeenSet)
  {
   payload.WithObject("videoDescription", m_videoDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

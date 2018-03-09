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

#include <aws/mediaconvert/model/Output.h>
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

Output::Output() : 
    m_audioDescriptionsHasBeenSet(false),
    m_captionDescriptionsHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_nameModifierHasBeenSet(false),
    m_outputSettingsHasBeenSet(false),
    m_presetHasBeenSet(false),
    m_videoDescriptionHasBeenSet(false)
{
}

Output::Output(const JsonValue& jsonValue) : 
    m_audioDescriptionsHasBeenSet(false),
    m_captionDescriptionsHasBeenSet(false),
    m_containerSettingsHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_nameModifierHasBeenSet(false),
    m_outputSettingsHasBeenSet(false),
    m_presetHasBeenSet(false),
    m_videoDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("extension"))
  {
    m_extension = jsonValue.GetString("extension");

    m_extensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nameModifier"))
  {
    m_nameModifier = jsonValue.GetString("nameModifier");

    m_nameModifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputSettings"))
  {
    m_outputSettings = jsonValue.GetObject("outputSettings");

    m_outputSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("preset"))
  {
    m_preset = jsonValue.GetString("preset");

    m_presetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoDescription"))
  {
    m_videoDescription = jsonValue.GetObject("videoDescription");

    m_videoDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
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

  if(m_extensionHasBeenSet)
  {
   payload.WithString("extension", m_extension);

  }

  if(m_nameModifierHasBeenSet)
  {
   payload.WithString("nameModifier", m_nameModifier);

  }

  if(m_outputSettingsHasBeenSet)
  {
   payload.WithObject("outputSettings", m_outputSettings.Jsonize());

  }

  if(m_presetHasBeenSet)
  {
   payload.WithString("preset", m_preset);

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

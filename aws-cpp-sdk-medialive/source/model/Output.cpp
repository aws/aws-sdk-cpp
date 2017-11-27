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

#include <aws/medialive/model/Output.h>
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

Output::Output() : 
    m_audioDescriptionNamesHasBeenSet(false),
    m_captionDescriptionNamesHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_outputSettingsHasBeenSet(false),
    m_videoDescriptionNameHasBeenSet(false)
{
}

Output::Output(const JsonValue& jsonValue) : 
    m_audioDescriptionNamesHasBeenSet(false),
    m_captionDescriptionNamesHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_outputSettingsHasBeenSet(false),
    m_videoDescriptionNameHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioDescriptionNames"))
  {
    Array<JsonValue> audioDescriptionNamesJsonList = jsonValue.GetArray("audioDescriptionNames");
    for(unsigned audioDescriptionNamesIndex = 0; audioDescriptionNamesIndex < audioDescriptionNamesJsonList.GetLength(); ++audioDescriptionNamesIndex)
    {
      m_audioDescriptionNames.push_back(audioDescriptionNamesJsonList[audioDescriptionNamesIndex].AsString());
    }
    m_audioDescriptionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionDescriptionNames"))
  {
    Array<JsonValue> captionDescriptionNamesJsonList = jsonValue.GetArray("captionDescriptionNames");
    for(unsigned captionDescriptionNamesIndex = 0; captionDescriptionNamesIndex < captionDescriptionNamesJsonList.GetLength(); ++captionDescriptionNamesIndex)
    {
      m_captionDescriptionNames.push_back(captionDescriptionNamesJsonList[captionDescriptionNamesIndex].AsString());
    }
    m_captionDescriptionNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputName"))
  {
    m_outputName = jsonValue.GetString("outputName");

    m_outputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputSettings"))
  {
    m_outputSettings = jsonValue.GetObject("outputSettings");

    m_outputSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoDescriptionName"))
  {
    m_videoDescriptionName = jsonValue.GetString("videoDescriptionName");

    m_videoDescriptionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_audioDescriptionNamesHasBeenSet)
  {
   Array<JsonValue> audioDescriptionNamesJsonList(m_audioDescriptionNames.size());
   for(unsigned audioDescriptionNamesIndex = 0; audioDescriptionNamesIndex < audioDescriptionNamesJsonList.GetLength(); ++audioDescriptionNamesIndex)
   {
     audioDescriptionNamesJsonList[audioDescriptionNamesIndex].AsString(m_audioDescriptionNames[audioDescriptionNamesIndex]);
   }
   payload.WithArray("audioDescriptionNames", std::move(audioDescriptionNamesJsonList));

  }

  if(m_captionDescriptionNamesHasBeenSet)
  {
   Array<JsonValue> captionDescriptionNamesJsonList(m_captionDescriptionNames.size());
   for(unsigned captionDescriptionNamesIndex = 0; captionDescriptionNamesIndex < captionDescriptionNamesJsonList.GetLength(); ++captionDescriptionNamesIndex)
   {
     captionDescriptionNamesJsonList[captionDescriptionNamesIndex].AsString(m_captionDescriptionNames[captionDescriptionNamesIndex]);
   }
   payload.WithArray("captionDescriptionNames", std::move(captionDescriptionNamesJsonList));

  }

  if(m_outputNameHasBeenSet)
  {
   payload.WithString("outputName", m_outputName);

  }

  if(m_outputSettingsHasBeenSet)
  {
   payload.WithObject("outputSettings", m_outputSettings.Jsonize());

  }

  if(m_videoDescriptionNameHasBeenSet)
  {
   payload.WithString("videoDescriptionName", m_videoDescriptionName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

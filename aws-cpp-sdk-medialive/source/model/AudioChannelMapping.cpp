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

#include <aws/medialive/model/AudioChannelMapping.h>
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

AudioChannelMapping::AudioChannelMapping() : 
    m_inputChannelLevelsHasBeenSet(false),
    m_outputChannel(0),
    m_outputChannelHasBeenSet(false)
{
}

AudioChannelMapping::AudioChannelMapping(const JsonValue& jsonValue) : 
    m_inputChannelLevelsHasBeenSet(false),
    m_outputChannel(0),
    m_outputChannelHasBeenSet(false)
{
  *this = jsonValue;
}

AudioChannelMapping& AudioChannelMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("inputChannelLevels"))
  {
    Array<JsonValue> inputChannelLevelsJsonList = jsonValue.GetArray("inputChannelLevels");
    for(unsigned inputChannelLevelsIndex = 0; inputChannelLevelsIndex < inputChannelLevelsJsonList.GetLength(); ++inputChannelLevelsIndex)
    {
      m_inputChannelLevels.push_back(inputChannelLevelsJsonList[inputChannelLevelsIndex].AsObject());
    }
    m_inputChannelLevelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputChannel"))
  {
    m_outputChannel = jsonValue.GetInteger("outputChannel");

    m_outputChannelHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioChannelMapping::Jsonize() const
{
  JsonValue payload;

  if(m_inputChannelLevelsHasBeenSet)
  {
   Array<JsonValue> inputChannelLevelsJsonList(m_inputChannelLevels.size());
   for(unsigned inputChannelLevelsIndex = 0; inputChannelLevelsIndex < inputChannelLevelsJsonList.GetLength(); ++inputChannelLevelsIndex)
   {
     inputChannelLevelsJsonList[inputChannelLevelsIndex].AsObject(m_inputChannelLevels[inputChannelLevelsIndex].Jsonize());
   }
   payload.WithArray("inputChannelLevels", std::move(inputChannelLevelsJsonList));

  }

  if(m_outputChannelHasBeenSet)
  {
   payload.WithInteger("outputChannel", m_outputChannel);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

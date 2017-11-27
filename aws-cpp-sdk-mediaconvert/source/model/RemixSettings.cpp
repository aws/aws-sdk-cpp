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

#include <aws/mediaconvert/model/RemixSettings.h>
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

RemixSettings::RemixSettings() : 
    m_channelMappingHasBeenSet(false),
    m_channelsIn(0),
    m_channelsInHasBeenSet(false),
    m_channelsOut(0),
    m_channelsOutHasBeenSet(false)
{
}

RemixSettings::RemixSettings(const JsonValue& jsonValue) : 
    m_channelMappingHasBeenSet(false),
    m_channelsIn(0),
    m_channelsInHasBeenSet(false),
    m_channelsOut(0),
    m_channelsOutHasBeenSet(false)
{
  *this = jsonValue;
}

RemixSettings& RemixSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("channelMapping"))
  {
    m_channelMapping = jsonValue.GetObject("channelMapping");

    m_channelMappingHasBeenSet = true;
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

  if(m_channelMappingHasBeenSet)
  {
   payload.WithObject("channelMapping", m_channelMapping.Jsonize());

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
} // namespace MediaConvert
} // namespace Aws

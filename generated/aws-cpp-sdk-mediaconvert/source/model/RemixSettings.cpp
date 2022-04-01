/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RemixSettings::RemixSettings(JsonView jsonValue) : 
    m_channelMappingHasBeenSet(false),
    m_channelsIn(0),
    m_channelsInHasBeenSet(false),
    m_channelsOut(0),
    m_channelsOutHasBeenSet(false)
{
  *this = jsonValue;
}

RemixSettings& RemixSettings::operator =(JsonView jsonValue)
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

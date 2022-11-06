/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ChannelMapping.h>
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

ChannelMapping::ChannelMapping() : 
    m_outputChannelsHasBeenSet(false)
{
}

ChannelMapping::ChannelMapping(JsonView jsonValue) : 
    m_outputChannelsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMapping& ChannelMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputChannels"))
  {
    Aws::Utils::Array<JsonView> outputChannelsJsonList = jsonValue.GetArray("outputChannels");
    for(unsigned outputChannelsIndex = 0; outputChannelsIndex < outputChannelsJsonList.GetLength(); ++outputChannelsIndex)
    {
      m_outputChannels.push_back(outputChannelsJsonList[outputChannelsIndex].AsObject());
    }
    m_outputChannelsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMapping::Jsonize() const
{
  JsonValue payload;

  if(m_outputChannelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputChannelsJsonList(m_outputChannels.size());
   for(unsigned outputChannelsIndex = 0; outputChannelsIndex < outputChannelsJsonList.GetLength(); ++outputChannelsIndex)
   {
     outputChannelsJsonList[outputChannelsIndex].AsObject(m_outputChannels[outputChannelsIndex].Jsonize());
   }
   payload.WithArray("outputChannels", std::move(outputChannelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

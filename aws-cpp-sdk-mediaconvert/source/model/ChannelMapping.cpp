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

ChannelMapping::ChannelMapping(const JsonValue& jsonValue) : 
    m_outputChannelsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMapping& ChannelMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("outputChannels"))
  {
    Array<JsonValue> outputChannelsJsonList = jsonValue.GetArray("outputChannels");
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
   Array<JsonValue> outputChannelsJsonList(m_outputChannels.size());
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

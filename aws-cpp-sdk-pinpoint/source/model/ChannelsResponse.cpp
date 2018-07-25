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

#include <aws/pinpoint/model/ChannelsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ChannelsResponse::ChannelsResponse() : 
    m_channelsHasBeenSet(false)
{
}

ChannelsResponse::ChannelsResponse(JsonView jsonValue) : 
    m_channelsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelsResponse& ChannelsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Channels"))
  {
    Aws::Map<Aws::String, JsonView> channelsJsonMap = jsonValue.GetObject("Channels").GetAllObjects();
    for(auto& channelsItem : channelsJsonMap)
    {
      m_channels[channelsItem.first] = channelsItem.second.AsObject();
    }
    m_channelsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_channelsHasBeenSet)
  {
   JsonValue channelsJsonMap;
   for(auto& channelsItem : m_channels)
   {
     channelsJsonMap.WithObject(channelsItem.first, channelsItem.second.Jsonize());
   }
   payload.WithObject("Channels", std::move(channelsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

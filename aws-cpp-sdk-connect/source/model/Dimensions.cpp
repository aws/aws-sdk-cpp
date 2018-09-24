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

#include <aws/connect/model/Dimensions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Dimensions::Dimensions() : 
    m_queueHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false)
{
}

Dimensions::Dimensions(JsonView jsonValue) : 
    m_queueHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false)
{
  *this = jsonValue;
}

Dimensions& Dimensions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Queue"))
  {
    m_queue = jsonValue.GetObject("Queue");

    m_queueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));

    m_channelHasBeenSet = true;
  }

  return *this;
}

JsonValue Dimensions::Jsonize() const
{
  JsonValue payload;

  if(m_queueHasBeenSet)
  {
   payload.WithObject("Queue", m_queue.Jsonize());

  }

  if(m_channelHasBeenSet)
  {
   payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_channelHasBeenSet(false),
    m_routingProfileHasBeenSet(false),
    m_instanceReferenceHasBeenSet(false)
{
}

Dimensions::Dimensions(JsonView jsonValue) : 
    m_queueHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false),
    m_routingProfileHasBeenSet(false),
    m_instanceReferenceHasBeenSet(false)
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

  if(jsonValue.ValueExists("RoutingProfile"))
  {
    m_routingProfile = jsonValue.GetObject("RoutingProfile");

    m_routingProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceReference"))
  {
    m_instanceReference = jsonValue.GetObject("InstanceReference");

    m_instanceReferenceHasBeenSet = true;
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

  if(m_routingProfileHasBeenSet)
  {
   payload.WithObject("RoutingProfile", m_routingProfile.Jsonize());

  }

  if(m_instanceReferenceHasBeenSet)
  {
   payload.WithObject("InstanceReference", m_instanceReference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

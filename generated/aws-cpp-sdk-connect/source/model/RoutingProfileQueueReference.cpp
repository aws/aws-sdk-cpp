/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingProfileQueueReference.h>
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

RoutingProfileQueueReference::RoutingProfileQueueReference() : 
    m_queueIdHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false)
{
}

RoutingProfileQueueReference::RoutingProfileQueueReference(JsonView jsonValue) : 
    m_queueIdHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingProfileQueueReference& RoutingProfileQueueReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueueId"))
  {
    m_queueId = jsonValue.GetString("QueueId");

    m_queueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));

    m_channelHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingProfileQueueReference::Jsonize() const
{
  JsonValue payload;

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("QueueId", m_queueId);

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

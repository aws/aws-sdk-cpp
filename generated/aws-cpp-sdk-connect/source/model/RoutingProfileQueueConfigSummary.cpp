/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingProfileQueueConfigSummary.h>
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

RoutingProfileQueueConfigSummary::RoutingProfileQueueConfigSummary() : 
    m_queueIdHasBeenSet(false),
    m_queueArnHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_delay(0),
    m_delayHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false)
{
}

RoutingProfileQueueConfigSummary::RoutingProfileQueueConfigSummary(JsonView jsonValue) : 
    m_queueIdHasBeenSet(false),
    m_queueArnHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_delay(0),
    m_delayHasBeenSet(false),
    m_channel(Channel::NOT_SET),
    m_channelHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingProfileQueueConfigSummary& RoutingProfileQueueConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueueId"))
  {
    m_queueId = jsonValue.GetString("QueueId");

    m_queueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueArn"))
  {
    m_queueArn = jsonValue.GetString("QueueArn");

    m_queueArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueueName"))
  {
    m_queueName = jsonValue.GetString("QueueName");

    m_queueNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delay"))
  {
    m_delay = jsonValue.GetInteger("Delay");

    m_delayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));

    m_channelHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingProfileQueueConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("QueueId", m_queueId);

  }

  if(m_queueArnHasBeenSet)
  {
   payload.WithString("QueueArn", m_queueArn);

  }

  if(m_queueNameHasBeenSet)
  {
   payload.WithString("QueueName", m_queueName);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_delayHasBeenSet)
  {
   payload.WithInteger("Delay", m_delay);

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

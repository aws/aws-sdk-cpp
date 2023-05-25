/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingProfileQueueConfig.h>
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

RoutingProfileQueueConfig::RoutingProfileQueueConfig() : 
    m_queueReferenceHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_delay(0),
    m_delayHasBeenSet(false)
{
}

RoutingProfileQueueConfig::RoutingProfileQueueConfig(JsonView jsonValue) : 
    m_queueReferenceHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_delay(0),
    m_delayHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingProfileQueueConfig& RoutingProfileQueueConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueueReference"))
  {
    m_queueReference = jsonValue.GetObject("QueueReference");

    m_queueReferenceHasBeenSet = true;
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

  return *this;
}

JsonValue RoutingProfileQueueConfig::Jsonize() const
{
  JsonValue payload;

  if(m_queueReferenceHasBeenSet)
  {
   payload.WithObject("QueueReference", m_queueReference.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_delayHasBeenSet)
  {
   payload.WithInteger("Delay", m_delay);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkEventNotificationConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkEventNotificationConfigurations::SidewalkEventNotificationConfigurations() : 
    m_amazonIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_amazonIdEventTopicHasBeenSet(false)
{
}

SidewalkEventNotificationConfigurations::SidewalkEventNotificationConfigurations(JsonView jsonValue) : 
    m_amazonIdEventTopic(EventNotificationTopicStatus::NOT_SET),
    m_amazonIdEventTopicHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkEventNotificationConfigurations& SidewalkEventNotificationConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonIdEventTopic"))
  {
    m_amazonIdEventTopic = EventNotificationTopicStatusMapper::GetEventNotificationTopicStatusForName(jsonValue.GetString("AmazonIdEventTopic"));

    m_amazonIdEventTopicHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkEventNotificationConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_amazonIdEventTopicHasBeenSet)
  {
   payload.WithString("AmazonIdEventTopic", EventNotificationTopicStatusMapper::GetNameForEventNotificationTopicStatus(m_amazonIdEventTopic));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

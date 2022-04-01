/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PropertyNotification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PropertyNotification::PropertyNotification() : 
    m_topicHasBeenSet(false),
    m_state(PropertyNotificationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

PropertyNotification::PropertyNotification(JsonView jsonValue) : 
    m_topicHasBeenSet(false),
    m_state(PropertyNotificationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyNotification& PropertyNotification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetString("topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = PropertyNotificationStateMapper::GetPropertyNotificationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyNotification::Jsonize() const
{
  JsonValue payload;

  if(m_topicHasBeenSet)
  {
   payload.WithString("topic", m_topic);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", PropertyNotificationStateMapper::GetNameForPropertyNotificationState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

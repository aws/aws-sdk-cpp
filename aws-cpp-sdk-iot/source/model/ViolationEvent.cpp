/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ViolationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ViolationEvent::ViolationEvent() : 
    m_violationIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_violationEventType(ViolationEventType::NOT_SET),
    m_violationEventTypeHasBeenSet(false),
    m_violationEventTimeHasBeenSet(false)
{
}

ViolationEvent::ViolationEvent(JsonView jsonValue) : 
    m_violationIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_violationEventType(ViolationEventType::NOT_SET),
    m_violationEventTypeHasBeenSet(false),
    m_violationEventTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ViolationEvent& ViolationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("violationId"))
  {
    m_violationId = jsonValue.GetString("violationId");

    m_violationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityProfileName"))
  {
    m_securityProfileName = jsonValue.GetString("securityProfileName");

    m_securityProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = jsonValue.GetObject("behavior");

    m_behaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricValue"))
  {
    m_metricValue = jsonValue.GetObject("metricValue");

    m_metricValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("violationEventType"))
  {
    m_violationEventType = ViolationEventTypeMapper::GetViolationEventTypeForName(jsonValue.GetString("violationEventType"));

    m_violationEventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("violationEventTime"))
  {
    m_violationEventTime = jsonValue.GetDouble("violationEventTime");

    m_violationEventTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ViolationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_violationIdHasBeenSet)
  {
   payload.WithString("violationId", m_violationId);

  }

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_securityProfileNameHasBeenSet)
  {
   payload.WithString("securityProfileName", m_securityProfileName);

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithObject("behavior", m_behavior.Jsonize());

  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithObject("metricValue", m_metricValue.Jsonize());

  }

  if(m_violationEventTypeHasBeenSet)
  {
   payload.WithString("violationEventType", ViolationEventTypeMapper::GetNameForViolationEventType(m_violationEventType));
  }

  if(m_violationEventTimeHasBeenSet)
  {
   payload.WithDouble("violationEventTime", m_violationEventTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

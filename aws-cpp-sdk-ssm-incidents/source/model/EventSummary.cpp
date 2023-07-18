﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/EventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

EventSummary::EventSummary() : 
    m_eventIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventUpdatedTimeHasBeenSet(false),
    m_incidentRecordArnHasBeenSet(false)
{
}

EventSummary::EventSummary(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventUpdatedTimeHasBeenSet(false),
    m_incidentRecordArnHasBeenSet(false)
{
  *this = jsonValue;
}

EventSummary& EventSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventTime"))
  {
    m_eventTime = jsonValue.GetDouble("eventTime");

    m_eventTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventUpdatedTime"))
  {
    m_eventUpdatedTime = jsonValue.GetDouble("eventUpdatedTime");

    m_eventUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incidentRecordArn"))
  {
    m_incidentRecordArn = jsonValue.GetString("incidentRecordArn");

    m_incidentRecordArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("eventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_eventUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("eventUpdatedTime", m_eventUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_incidentRecordArnHasBeenSet)
  {
   payload.WithString("incidentRecordArn", m_incidentRecordArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

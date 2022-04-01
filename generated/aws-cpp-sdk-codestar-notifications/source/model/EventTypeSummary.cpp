/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/EventTypeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

EventTypeSummary::EventTypeSummary() : 
    m_eventTypeIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

EventTypeSummary::EventTypeSummary(JsonView jsonValue) : 
    m_eventTypeIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EventTypeSummary& EventTypeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventTypeId"))
  {
    m_eventTypeId = jsonValue.GetString("EventTypeId");

    m_eventTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTypeName"))
  {
    m_eventTypeName = jsonValue.GetString("EventTypeName");

    m_eventTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EventTypeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeIdHasBeenSet)
  {
   payload.WithString("EventTypeId", m_eventTypeId);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("EventTypeName", m_eventTypeName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws

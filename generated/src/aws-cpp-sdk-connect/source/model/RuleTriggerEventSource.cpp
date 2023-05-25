/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RuleTriggerEventSource.h>
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

RuleTriggerEventSource::RuleTriggerEventSource() : 
    m_eventSourceName(EventSourceName::NOT_SET),
    m_eventSourceNameHasBeenSet(false),
    m_integrationAssociationIdHasBeenSet(false)
{
}

RuleTriggerEventSource::RuleTriggerEventSource(JsonView jsonValue) : 
    m_eventSourceName(EventSourceName::NOT_SET),
    m_eventSourceNameHasBeenSet(false),
    m_integrationAssociationIdHasBeenSet(false)
{
  *this = jsonValue;
}

RuleTriggerEventSource& RuleTriggerEventSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventSourceName"))
  {
    m_eventSourceName = EventSourceNameMapper::GetEventSourceNameForName(jsonValue.GetString("EventSourceName"));

    m_eventSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegrationAssociationId"))
  {
    m_integrationAssociationId = jsonValue.GetString("IntegrationAssociationId");

    m_integrationAssociationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleTriggerEventSource::Jsonize() const
{
  JsonValue payload;

  if(m_eventSourceNameHasBeenSet)
  {
   payload.WithString("EventSourceName", EventSourceNameMapper::GetNameForEventSourceName(m_eventSourceName));
  }

  if(m_integrationAssociationIdHasBeenSet)
  {
   payload.WithString("IntegrationAssociationId", m_integrationAssociationId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

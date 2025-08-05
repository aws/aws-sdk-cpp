/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

ExecutionEvent::ExecutionEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionEvent& ExecutionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ExecutionEventTypeMapper::GetExecutionEventTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");
    m_stepNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionBlockType"))
  {
    m_executionBlockType = ExecutionBlockTypeMapper::GetExecutionBlockTypeForName(jsonValue.GetString("executionBlockType"));
    m_executionBlockTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("previousEventId"))
  {
    m_previousEventId = jsonValue.GetString("previousEventId");
    m_previousEventIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ExecutionEventTypeMapper::GetNameForExecutionEventType(m_type));
  }

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  if(m_executionBlockTypeHasBeenSet)
  {
   payload.WithString("executionBlockType", ExecutionBlockTypeMapper::GetNameForExecutionBlockType(m_executionBlockType));
  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_previousEventIdHasBeenSet)
  {
   payload.WithString("previousEventId", m_previousEventId);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws

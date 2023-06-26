/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

Event::Event() : 
    m_resourceCollectionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSource(EventDataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_eventClass(EventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_resourceCollectionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSource(EventDataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_eventClass(EventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

    m_resourceCollectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetDouble("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSource"))
  {
    m_eventSource = jsonValue.GetString("EventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = EventDataSourceMapper::GetEventDataSourceForName(jsonValue.GetString("DataSource"));

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventClass"))
  {
    m_eventClass = EventClassMapper::GetEventClassForName(jsonValue.GetString("EventClass"));

    m_eventClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("Time", m_time.SecondsWithMSPrecision());
  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("EventSource", m_eventSource);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", EventDataSourceMapper::GetNameForEventDataSource(m_dataSource));
  }

  if(m_eventClassHasBeenSet)
  {
   payload.WithString("EventClass", EventClassMapper::GetNameForEventClass(m_eventClass));
  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

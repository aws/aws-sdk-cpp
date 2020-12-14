/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListEventsFilters.h>
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

ListEventsFilters::ListEventsFilters() : 
    m_insightIdHasBeenSet(false),
    m_eventTimeRangeHasBeenSet(false),
    m_eventClass(EventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_dataSource(EventDataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
}

ListEventsFilters::ListEventsFilters(JsonView jsonValue) : 
    m_insightIdHasBeenSet(false),
    m_eventTimeRangeHasBeenSet(false),
    m_eventClass(EventClass::NOT_SET),
    m_eventClassHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_dataSource(EventDataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false)
{
  *this = jsonValue;
}

ListEventsFilters& ListEventsFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightId"))
  {
    m_insightId = jsonValue.GetString("InsightId");

    m_insightIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTimeRange"))
  {
    m_eventTimeRange = jsonValue.GetObject("EventTimeRange");

    m_eventTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventClass"))
  {
    m_eventClass = EventClassMapper::GetEventClassForName(jsonValue.GetString("EventClass"));

    m_eventClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSource"))
  {
    m_eventSource = jsonValue.GetString("EventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = EventDataSourceMapper::GetEventDataSourceForName(jsonValue.GetString("DataSource"));

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

    m_resourceCollectionHasBeenSet = true;
  }

  return *this;
}

JsonValue ListEventsFilters::Jsonize() const
{
  JsonValue payload;

  if(m_insightIdHasBeenSet)
  {
   payload.WithString("InsightId", m_insightId);

  }

  if(m_eventTimeRangeHasBeenSet)
  {
   payload.WithObject("EventTimeRange", m_eventTimeRange.Jsonize());

  }

  if(m_eventClassHasBeenSet)
  {
   payload.WithString("EventClass", EventClassMapper::GetNameForEventClass(m_eventClass));
  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("EventSource", m_eventSource);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", EventDataSourceMapper::GetNameForEventDataSource(m_dataSource));
  }

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

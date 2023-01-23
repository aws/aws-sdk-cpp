/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EventSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

EventSelector::EventSelector() : 
    m_readWriteType(ReadWriteType::NOT_SET),
    m_readWriteTypeHasBeenSet(false),
    m_includeManagementEvents(false),
    m_includeManagementEventsHasBeenSet(false),
    m_dataResourcesHasBeenSet(false),
    m_excludeManagementEventSourcesHasBeenSet(false)
{
}

EventSelector::EventSelector(JsonView jsonValue) : 
    m_readWriteType(ReadWriteType::NOT_SET),
    m_readWriteTypeHasBeenSet(false),
    m_includeManagementEvents(false),
    m_includeManagementEventsHasBeenSet(false),
    m_dataResourcesHasBeenSet(false),
    m_excludeManagementEventSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

EventSelector& EventSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadWriteType"))
  {
    m_readWriteType = ReadWriteTypeMapper::GetReadWriteTypeForName(jsonValue.GetString("ReadWriteType"));

    m_readWriteTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeManagementEvents"))
  {
    m_includeManagementEvents = jsonValue.GetBool("IncludeManagementEvents");

    m_includeManagementEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataResources"))
  {
    Aws::Utils::Array<JsonView> dataResourcesJsonList = jsonValue.GetArray("DataResources");
    for(unsigned dataResourcesIndex = 0; dataResourcesIndex < dataResourcesJsonList.GetLength(); ++dataResourcesIndex)
    {
      m_dataResources.push_back(dataResourcesJsonList[dataResourcesIndex].AsObject());
    }
    m_dataResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeManagementEventSources"))
  {
    Aws::Utils::Array<JsonView> excludeManagementEventSourcesJsonList = jsonValue.GetArray("ExcludeManagementEventSources");
    for(unsigned excludeManagementEventSourcesIndex = 0; excludeManagementEventSourcesIndex < excludeManagementEventSourcesJsonList.GetLength(); ++excludeManagementEventSourcesIndex)
    {
      m_excludeManagementEventSources.push_back(excludeManagementEventSourcesJsonList[excludeManagementEventSourcesIndex].AsString());
    }
    m_excludeManagementEventSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSelector::Jsonize() const
{
  JsonValue payload;

  if(m_readWriteTypeHasBeenSet)
  {
   payload.WithString("ReadWriteType", ReadWriteTypeMapper::GetNameForReadWriteType(m_readWriteType));
  }

  if(m_includeManagementEventsHasBeenSet)
  {
   payload.WithBool("IncludeManagementEvents", m_includeManagementEvents);

  }

  if(m_dataResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataResourcesJsonList(m_dataResources.size());
   for(unsigned dataResourcesIndex = 0; dataResourcesIndex < dataResourcesJsonList.GetLength(); ++dataResourcesIndex)
   {
     dataResourcesJsonList[dataResourcesIndex].AsObject(m_dataResources[dataResourcesIndex].Jsonize());
   }
   payload.WithArray("DataResources", std::move(dataResourcesJsonList));

  }

  if(m_excludeManagementEventSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeManagementEventSourcesJsonList(m_excludeManagementEventSources.size());
   for(unsigned excludeManagementEventSourcesIndex = 0; excludeManagementEventSourcesIndex < excludeManagementEventSourcesJsonList.GetLength(); ++excludeManagementEventSourcesIndex)
   {
     excludeManagementEventSourcesJsonList[excludeManagementEventSourcesIndex].AsString(m_excludeManagementEventSources[excludeManagementEventSourcesIndex]);
   }
   payload.WithArray("ExcludeManagementEventSources", std::move(excludeManagementEventSourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

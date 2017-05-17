/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_dataResourcesHasBeenSet(false)
{
}

EventSelector::EventSelector(const JsonValue& jsonValue) : 
    m_readWriteType(ReadWriteType::NOT_SET),
    m_readWriteTypeHasBeenSet(false),
    m_includeManagementEvents(false),
    m_includeManagementEventsHasBeenSet(false),
    m_dataResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

EventSelector& EventSelector::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> dataResourcesJsonList = jsonValue.GetArray("DataResources");
    for(unsigned dataResourcesIndex = 0; dataResourcesIndex < dataResourcesJsonList.GetLength(); ++dataResourcesIndex)
    {
      m_dataResources.push_back(dataResourcesJsonList[dataResourcesIndex].AsObject());
    }
    m_dataResourcesHasBeenSet = true;
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
   Array<JsonValue> dataResourcesJsonList(m_dataResources.size());
   for(unsigned dataResourcesIndex = 0; dataResourcesIndex < dataResourcesJsonList.GetLength(); ++dataResourcesIndex)
   {
     dataResourcesJsonList[dataResourcesIndex].AsObject(m_dataResources[dataResourcesIndex].Jsonize());
   }
   payload.WithArray("DataResources", std::move(dataResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
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

#include <aws/devicefarm/model/DeviceSelectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

DeviceSelectionConfiguration::DeviceSelectionConfiguration() : 
    m_filtersHasBeenSet(false),
    m_maxDevices(0),
    m_maxDevicesHasBeenSet(false)
{
}

DeviceSelectionConfiguration::DeviceSelectionConfiguration(JsonView jsonValue) : 
    m_filtersHasBeenSet(false),
    m_maxDevices(0),
    m_maxDevicesHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSelectionConfiguration& DeviceSelectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filters"))
  {
    Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxDevices"))
  {
    m_maxDevices = jsonValue.GetInteger("maxDevices");

    m_maxDevicesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSelectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_maxDevicesHasBeenSet)
  {
   payload.WithInteger("maxDevices", m_maxDevices);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

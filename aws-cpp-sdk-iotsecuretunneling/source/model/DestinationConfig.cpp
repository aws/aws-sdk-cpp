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

#include <aws/iotsecuretunneling/model/DestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

DestinationConfig::DestinationConfig() : 
    m_thingNameHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
}

DestinationConfig::DestinationConfig(JsonView jsonValue) : 
    m_thingNameHasBeenSet(false),
    m_servicesHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfig& DestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("services"))
  {
    Array<JsonView> servicesJsonList = jsonValue.GetArray("services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsString());
    }
    m_servicesHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_servicesHasBeenSet)
  {
   Array<JsonValue> servicesJsonList(m_services.size());
   for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
   {
     servicesJsonList[servicesIndex].AsString(m_services[servicesIndex]);
   }
   payload.WithArray("services", std::move(servicesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws

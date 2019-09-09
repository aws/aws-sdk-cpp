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

#include <aws/robomaker/model/PortForwardingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

PortForwardingConfig::PortForwardingConfig() : 
    m_portMappingsHasBeenSet(false)
{
}

PortForwardingConfig::PortForwardingConfig(JsonView jsonValue) : 
    m_portMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

PortForwardingConfig& PortForwardingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portMappings"))
  {
    Array<JsonView> portMappingsJsonList = jsonValue.GetArray("portMappings");
    for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
    {
      m_portMappings.push_back(portMappingsJsonList[portMappingsIndex].AsObject());
    }
    m_portMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue PortForwardingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_portMappingsHasBeenSet)
  {
   Array<JsonValue> portMappingsJsonList(m_portMappings.size());
   for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
   {
     portMappingsJsonList[portMappingsIndex].AsObject(m_portMappings[portMappingsIndex].Jsonize());
   }
   payload.WithArray("portMappings", std::move(portMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

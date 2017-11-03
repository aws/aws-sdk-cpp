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

#include <aws/apigateway/model/EndpointConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

EndpointConfiguration::EndpointConfiguration() : 
    m_typesHasBeenSet(false)
{
}

EndpointConfiguration::EndpointConfiguration(const JsonValue& jsonValue) : 
    m_typesHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointConfiguration& EndpointConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("types"))
  {
    Array<JsonValue> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(EndpointTypeMapper::GetEndpointTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(EndpointTypeMapper::GetNameForEndpointType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws

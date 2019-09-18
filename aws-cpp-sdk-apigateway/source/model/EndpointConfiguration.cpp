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
    m_typesHasBeenSet(false),
    m_vpcEndpointIdsHasBeenSet(false)
{
}

EndpointConfiguration::EndpointConfiguration(JsonView jsonValue) : 
    m_typesHasBeenSet(false),
    m_vpcEndpointIdsHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointConfiguration& EndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("types"))
  {
    Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(EndpointTypeMapper::GetEndpointTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcEndpointIds"))
  {
    Array<JsonView> vpcEndpointIdsJsonList = jsonValue.GetArray("vpcEndpointIds");
    for(unsigned vpcEndpointIdsIndex = 0; vpcEndpointIdsIndex < vpcEndpointIdsJsonList.GetLength(); ++vpcEndpointIdsIndex)
    {
      m_vpcEndpointIds.push_back(vpcEndpointIdsJsonList[vpcEndpointIdsIndex].AsString());
    }
    m_vpcEndpointIdsHasBeenSet = true;
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

  if(m_vpcEndpointIdsHasBeenSet)
  {
   Array<JsonValue> vpcEndpointIdsJsonList(m_vpcEndpointIds.size());
   for(unsigned vpcEndpointIdsIndex = 0; vpcEndpointIdsIndex < vpcEndpointIdsJsonList.GetLength(); ++vpcEndpointIdsIndex)
   {
     vpcEndpointIdsJsonList[vpcEndpointIdsIndex].AsString(m_vpcEndpointIds[vpcEndpointIdsIndex]);
   }
   payload.WithArray("vpcEndpointIds", std::move(vpcEndpointIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws

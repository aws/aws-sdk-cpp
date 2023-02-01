/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(EndpointTypeMapper::GetEndpointTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcEndpointIds"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointIdsJsonList = jsonValue.GetArray("vpcEndpointIds");
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
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(EndpointTypeMapper::GetNameForEndpointType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  if(m_vpcEndpointIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcEndpointIdsJsonList(m_vpcEndpointIds.size());
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

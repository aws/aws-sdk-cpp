/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayEndpointConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayEndpointConfiguration::AwsApiGatewayEndpointConfiguration() : 
    m_typesHasBeenSet(false)
{
}

AwsApiGatewayEndpointConfiguration::AwsApiGatewayEndpointConfiguration(JsonView jsonValue) : 
    m_typesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayEndpointConfiguration& AwsApiGatewayEndpointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayEndpointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(m_types[typesIndex]);
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

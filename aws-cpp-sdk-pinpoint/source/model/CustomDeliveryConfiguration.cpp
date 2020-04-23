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

#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CustomDeliveryConfiguration::CustomDeliveryConfiguration() : 
    m_deliveryUriHasBeenSet(false),
    m_endpointTypesHasBeenSet(false)
{
}

CustomDeliveryConfiguration::CustomDeliveryConfiguration(JsonView jsonValue) : 
    m_deliveryUriHasBeenSet(false),
    m_endpointTypesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomDeliveryConfiguration& CustomDeliveryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryUri"))
  {
    m_deliveryUri = jsonValue.GetString("DeliveryUri");

    m_deliveryUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointTypes"))
  {
    Array<JsonView> endpointTypesJsonList = jsonValue.GetArray("EndpointTypes");
    for(unsigned endpointTypesIndex = 0; endpointTypesIndex < endpointTypesJsonList.GetLength(); ++endpointTypesIndex)
    {
      m_endpointTypes.push_back(__EndpointTypesElementMapper::Get__EndpointTypesElementForName(endpointTypesJsonList[endpointTypesIndex].AsString()));
    }
    m_endpointTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomDeliveryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryUriHasBeenSet)
  {
   payload.WithString("DeliveryUri", m_deliveryUri);

  }

  if(m_endpointTypesHasBeenSet)
  {
   Array<JsonValue> endpointTypesJsonList(m_endpointTypes.size());
   for(unsigned endpointTypesIndex = 0; endpointTypesIndex < endpointTypesJsonList.GetLength(); ++endpointTypesIndex)
   {
     endpointTypesJsonList[endpointTypesIndex].AsString(__EndpointTypesElementMapper::GetNameFor__EndpointTypesElement(m_endpointTypes[endpointTypesIndex]));
   }
   payload.WithArray("EndpointTypes", std::move(endpointTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

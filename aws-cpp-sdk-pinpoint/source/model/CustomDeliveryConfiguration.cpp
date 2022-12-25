/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> endpointTypesJsonList = jsonValue.GetArray("EndpointTypes");
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
   Aws::Utils::Array<JsonValue> endpointTypesJsonList(m_endpointTypes.size());
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

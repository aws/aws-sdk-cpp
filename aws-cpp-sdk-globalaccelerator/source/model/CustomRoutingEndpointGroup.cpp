/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingEndpointGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

CustomRoutingEndpointGroup::CustomRoutingEndpointGroup() : 
    m_endpointGroupArnHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_destinationDescriptionsHasBeenSet(false),
    m_endpointDescriptionsHasBeenSet(false)
{
}

CustomRoutingEndpointGroup::CustomRoutingEndpointGroup(JsonView jsonValue) : 
    m_endpointGroupArnHasBeenSet(false),
    m_endpointGroupRegionHasBeenSet(false),
    m_destinationDescriptionsHasBeenSet(false),
    m_endpointDescriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingEndpointGroup& CustomRoutingEndpointGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointGroupArn"))
  {
    m_endpointGroupArn = jsonValue.GetString("EndpointGroupArn");

    m_endpointGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointGroupRegion"))
  {
    m_endpointGroupRegion = jsonValue.GetString("EndpointGroupRegion");

    m_endpointGroupRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationDescriptions"))
  {
    Aws::Utils::Array<JsonView> destinationDescriptionsJsonList = jsonValue.GetArray("DestinationDescriptions");
    for(unsigned destinationDescriptionsIndex = 0; destinationDescriptionsIndex < destinationDescriptionsJsonList.GetLength(); ++destinationDescriptionsIndex)
    {
      m_destinationDescriptions.push_back(destinationDescriptionsJsonList[destinationDescriptionsIndex].AsObject());
    }
    m_destinationDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointDescriptions"))
  {
    Aws::Utils::Array<JsonView> endpointDescriptionsJsonList = jsonValue.GetArray("EndpointDescriptions");
    for(unsigned endpointDescriptionsIndex = 0; endpointDescriptionsIndex < endpointDescriptionsJsonList.GetLength(); ++endpointDescriptionsIndex)
    {
      m_endpointDescriptions.push_back(endpointDescriptionsJsonList[endpointDescriptionsIndex].AsObject());
    }
    m_endpointDescriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingEndpointGroup::Jsonize() const
{
  JsonValue payload;

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  if(m_endpointGroupRegionHasBeenSet)
  {
   payload.WithString("EndpointGroupRegion", m_endpointGroupRegion);

  }

  if(m_destinationDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationDescriptionsJsonList(m_destinationDescriptions.size());
   for(unsigned destinationDescriptionsIndex = 0; destinationDescriptionsIndex < destinationDescriptionsJsonList.GetLength(); ++destinationDescriptionsIndex)
   {
     destinationDescriptionsJsonList[destinationDescriptionsIndex].AsObject(m_destinationDescriptions[destinationDescriptionsIndex].Jsonize());
   }
   payload.WithArray("DestinationDescriptions", std::move(destinationDescriptionsJsonList));

  }

  if(m_endpointDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointDescriptionsJsonList(m_endpointDescriptions.size());
   for(unsigned endpointDescriptionsIndex = 0; endpointDescriptionsIndex < endpointDescriptionsJsonList.GetLength(); ++endpointDescriptionsIndex)
   {
     endpointDescriptionsJsonList[endpointDescriptionsIndex].AsObject(m_endpointDescriptions[endpointDescriptionsIndex].Jsonize());
   }
   payload.WithArray("EndpointDescriptions", std::move(endpointDescriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

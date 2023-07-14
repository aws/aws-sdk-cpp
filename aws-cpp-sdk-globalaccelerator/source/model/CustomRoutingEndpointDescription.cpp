/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/CustomRoutingEndpointDescription.h>
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

CustomRoutingEndpointDescription::CustomRoutingEndpointDescription() : 
    m_endpointIdHasBeenSet(false)
{
}

CustomRoutingEndpointDescription::CustomRoutingEndpointDescription(JsonView jsonValue) : 
    m_endpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

CustomRoutingEndpointDescription& CustomRoutingEndpointDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

    m_endpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomRoutingEndpointDescription::Jsonize() const
{
  JsonValue payload;

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

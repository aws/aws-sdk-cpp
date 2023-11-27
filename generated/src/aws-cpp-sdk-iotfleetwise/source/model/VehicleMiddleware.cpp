/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/VehicleMiddleware.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

VehicleMiddleware::VehicleMiddleware() : 
    m_nameHasBeenSet(false),
    m_protocolName(VehicleMiddlewareProtocol::NOT_SET),
    m_protocolNameHasBeenSet(false)
{
}

VehicleMiddleware::VehicleMiddleware(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_protocolName(VehicleMiddlewareProtocol::NOT_SET),
    m_protocolNameHasBeenSet(false)
{
  *this = jsonValue;
}

VehicleMiddleware& VehicleMiddleware::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocolName"))
  {
    m_protocolName = VehicleMiddlewareProtocolMapper::GetVehicleMiddlewareProtocolForName(jsonValue.GetString("protocolName"));

    m_protocolNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VehicleMiddleware::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protocolNameHasBeenSet)
  {
   payload.WithString("protocolName", VehicleMiddlewareProtocolMapper::GetNameForVehicleMiddlewareProtocol(m_protocolName));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

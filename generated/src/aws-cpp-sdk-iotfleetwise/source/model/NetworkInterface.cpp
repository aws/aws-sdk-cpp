/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NetworkInterface.h>
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

NetworkInterface::NetworkInterface() : 
    m_interfaceIdHasBeenSet(false),
    m_type(NetworkInterfaceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_canInterfaceHasBeenSet(false),
    m_obdInterfaceHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(JsonView jsonValue) : 
    m_interfaceIdHasBeenSet(false),
    m_type(NetworkInterfaceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_canInterfaceHasBeenSet(false),
    m_obdInterfaceHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkInterface& NetworkInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interfaceId"))
  {
    m_interfaceId = jsonValue.GetString("interfaceId");

    m_interfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = NetworkInterfaceTypeMapper::GetNetworkInterfaceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canInterface"))
  {
    m_canInterface = jsonValue.GetObject("canInterface");

    m_canInterfaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("obdInterface"))
  {
    m_obdInterface = jsonValue.GetObject("obdInterface");

    m_obdInterfaceHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkInterface::Jsonize() const
{
  JsonValue payload;

  if(m_interfaceIdHasBeenSet)
  {
   payload.WithString("interfaceId", m_interfaceId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NetworkInterfaceTypeMapper::GetNameForNetworkInterfaceType(m_type));
  }

  if(m_canInterfaceHasBeenSet)
  {
   payload.WithObject("canInterface", m_canInterface.Jsonize());

  }

  if(m_obdInterfaceHasBeenSet)
  {
   payload.WithObject("obdInterface", m_obdInterface.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

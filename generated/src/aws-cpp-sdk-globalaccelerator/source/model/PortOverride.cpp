/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/PortOverride.h>
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

PortOverride::PortOverride() : 
    m_listenerPort(0),
    m_listenerPortHasBeenSet(false),
    m_endpointPort(0),
    m_endpointPortHasBeenSet(false)
{
}

PortOverride::PortOverride(JsonView jsonValue) : 
    m_listenerPort(0),
    m_listenerPortHasBeenSet(false),
    m_endpointPort(0),
    m_endpointPortHasBeenSet(false)
{
  *this = jsonValue;
}

PortOverride& PortOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ListenerPort"))
  {
    m_listenerPort = jsonValue.GetInteger("ListenerPort");

    m_listenerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointPort"))
  {
    m_endpointPort = jsonValue.GetInteger("EndpointPort");

    m_endpointPortHasBeenSet = true;
  }

  return *this;
}

JsonValue PortOverride::Jsonize() const
{
  JsonValue payload;

  if(m_listenerPortHasBeenSet)
  {
   payload.WithInteger("ListenerPort", m_listenerPort);

  }

  if(m_endpointPortHasBeenSet)
  {
   payload.WithInteger("EndpointPort", m_endpointPort);

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws

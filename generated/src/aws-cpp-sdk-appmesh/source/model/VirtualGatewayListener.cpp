/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayListener.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualGatewayListener::VirtualGatewayListener() : 
    m_connectionPoolHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_portMappingHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
}

VirtualGatewayListener::VirtualGatewayListener(JsonView jsonValue) : 
    m_connectionPoolHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_portMappingHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayListener& VirtualGatewayListener::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectionPool"))
  {
    m_connectionPool = jsonValue.GetObject("connectionPool");

    m_connectionPoolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("healthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portMapping"))
  {
    m_portMapping = jsonValue.GetObject("portMapping");

    m_portMappingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tls"))
  {
    m_tls = jsonValue.GetObject("tls");

    m_tlsHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayListener::Jsonize() const
{
  JsonValue payload;

  if(m_connectionPoolHasBeenSet)
  {
   payload.WithObject("connectionPool", m_connectionPool.Jsonize());

  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("healthCheck", m_healthCheck.Jsonize());

  }

  if(m_portMappingHasBeenSet)
  {
   payload.WithObject("portMapping", m_portMapping.Jsonize());

  }

  if(m_tlsHasBeenSet)
  {
   payload.WithObject("tls", m_tls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

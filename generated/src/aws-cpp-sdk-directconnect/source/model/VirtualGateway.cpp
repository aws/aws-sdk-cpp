/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/VirtualGateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

VirtualGateway::VirtualGateway() : 
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayStateHasBeenSet(false)
{
}

VirtualGateway::VirtualGateway(JsonView jsonValue) : 
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayStateHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGateway& VirtualGateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualGatewayId"))
  {
    m_virtualGatewayId = jsonValue.GetString("virtualGatewayId");

    m_virtualGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayState"))
  {
    m_virtualGatewayState = jsonValue.GetString("virtualGatewayState");

    m_virtualGatewayStateHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGateway::Jsonize() const
{
  JsonValue payload;

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  if(m_virtualGatewayStateHasBeenSet)
  {
   payload.WithString("virtualGatewayState", m_virtualGatewayState);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

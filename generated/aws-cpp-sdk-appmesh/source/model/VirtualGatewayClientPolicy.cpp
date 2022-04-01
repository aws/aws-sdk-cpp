/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayClientPolicy.h>
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

VirtualGatewayClientPolicy::VirtualGatewayClientPolicy() : 
    m_tlsHasBeenSet(false)
{
}

VirtualGatewayClientPolicy::VirtualGatewayClientPolicy(JsonView jsonValue) : 
    m_tlsHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayClientPolicy& VirtualGatewayClientPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tls"))
  {
    m_tls = jsonValue.GetObject("tls");

    m_tlsHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayClientPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_tlsHasBeenSet)
  {
   payload.WithObject("tls", m_tls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

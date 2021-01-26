/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayBackendDefaults.h>
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

VirtualGatewayBackendDefaults::VirtualGatewayBackendDefaults() : 
    m_clientPolicyHasBeenSet(false)
{
}

VirtualGatewayBackendDefaults::VirtualGatewayBackendDefaults(JsonView jsonValue) : 
    m_clientPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewayBackendDefaults& VirtualGatewayBackendDefaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientPolicy"))
  {
    m_clientPolicy = jsonValue.GetObject("clientPolicy");

    m_clientPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGatewayBackendDefaults::Jsonize() const
{
  JsonValue payload;

  if(m_clientPolicyHasBeenSet)
  {
   payload.WithObject("clientPolicy", m_clientPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

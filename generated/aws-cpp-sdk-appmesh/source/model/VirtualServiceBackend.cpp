/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualServiceBackend.h>
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

VirtualServiceBackend::VirtualServiceBackend() : 
    m_clientPolicyHasBeenSet(false),
    m_virtualServiceNameHasBeenSet(false)
{
}

VirtualServiceBackend::VirtualServiceBackend(JsonView jsonValue) : 
    m_clientPolicyHasBeenSet(false),
    m_virtualServiceNameHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualServiceBackend& VirtualServiceBackend::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientPolicy"))
  {
    m_clientPolicy = jsonValue.GetObject("clientPolicy");

    m_clientPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualServiceName"))
  {
    m_virtualServiceName = jsonValue.GetString("virtualServiceName");

    m_virtualServiceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualServiceBackend::Jsonize() const
{
  JsonValue payload;

  if(m_clientPolicyHasBeenSet)
  {
   payload.WithObject("clientPolicy", m_clientPolicy.Jsonize());

  }

  if(m_virtualServiceNameHasBeenSet)
  {
   payload.WithString("virtualServiceName", m_virtualServiceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

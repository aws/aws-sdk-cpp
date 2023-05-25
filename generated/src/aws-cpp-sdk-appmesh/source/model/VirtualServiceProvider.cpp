/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualServiceProvider.h>
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

VirtualServiceProvider::VirtualServiceProvider() : 
    m_virtualNodeHasBeenSet(false),
    m_virtualRouterHasBeenSet(false)
{
}

VirtualServiceProvider::VirtualServiceProvider(JsonView jsonValue) : 
    m_virtualNodeHasBeenSet(false),
    m_virtualRouterHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualServiceProvider& VirtualServiceProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualNode"))
  {
    m_virtualNode = jsonValue.GetObject("virtualNode");

    m_virtualNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualRouter"))
  {
    m_virtualRouter = jsonValue.GetObject("virtualRouter");

    m_virtualRouterHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualServiceProvider::Jsonize() const
{
  JsonValue payload;

  if(m_virtualNodeHasBeenSet)
  {
   payload.WithObject("virtualNode", m_virtualNode.Jsonize());

  }

  if(m_virtualRouterHasBeenSet)
  {
   payload.WithObject("virtualRouter", m_virtualRouter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

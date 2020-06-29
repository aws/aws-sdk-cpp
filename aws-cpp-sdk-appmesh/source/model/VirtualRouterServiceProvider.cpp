/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualRouterServiceProvider.h>
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

VirtualRouterServiceProvider::VirtualRouterServiceProvider() : 
    m_virtualRouterNameHasBeenSet(false)
{
}

VirtualRouterServiceProvider::VirtualRouterServiceProvider(JsonView jsonValue) : 
    m_virtualRouterNameHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualRouterServiceProvider& VirtualRouterServiceProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualRouterName"))
  {
    m_virtualRouterName = jsonValue.GetString("virtualRouterName");

    m_virtualRouterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualRouterServiceProvider::Jsonize() const
{
  JsonValue payload;

  if(m_virtualRouterNameHasBeenSet)
  {
   payload.WithString("virtualRouterName", m_virtualRouterName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

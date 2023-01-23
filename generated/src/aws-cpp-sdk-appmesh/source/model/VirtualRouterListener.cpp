/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualRouterListener.h>
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

VirtualRouterListener::VirtualRouterListener() : 
    m_portMappingHasBeenSet(false)
{
}

VirtualRouterListener::VirtualRouterListener(JsonView jsonValue) : 
    m_portMappingHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualRouterListener& VirtualRouterListener::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portMapping"))
  {
    m_portMapping = jsonValue.GetObject("portMapping");

    m_portMappingHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualRouterListener::Jsonize() const
{
  JsonValue payload;

  if(m_portMappingHasBeenSet)
  {
   payload.WithObject("portMapping", m_portMapping.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

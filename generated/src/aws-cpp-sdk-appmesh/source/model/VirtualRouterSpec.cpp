/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualRouterSpec.h>
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

VirtualRouterSpec::VirtualRouterSpec() : 
    m_listenersHasBeenSet(false)
{
}

VirtualRouterSpec::VirtualRouterSpec(JsonView jsonValue) : 
    m_listenersHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualRouterSpec& VirtualRouterSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("listeners"))
  {
    Aws::Utils::Array<JsonView> listenersJsonList = jsonValue.GetArray("listeners");
    for(unsigned listenersIndex = 0; listenersIndex < listenersJsonList.GetLength(); ++listenersIndex)
    {
      m_listeners.push_back(listenersJsonList[listenersIndex].AsObject());
    }
    m_listenersHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualRouterSpec::Jsonize() const
{
  JsonValue payload;

  if(m_listenersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listenersJsonList(m_listeners.size());
   for(unsigned listenersIndex = 0; listenersIndex < listenersJsonList.GetLength(); ++listenersIndex)
   {
     listenersJsonList[listenersIndex].AsObject(m_listeners[listenersIndex].Jsonize());
   }
   payload.WithArray("listeners", std::move(listenersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

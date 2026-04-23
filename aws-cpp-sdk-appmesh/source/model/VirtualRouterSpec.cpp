/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> listenersJsonList = jsonValue.GetArray("listeners");
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
   Array<JsonValue> listenersJsonList(m_listeners.size());
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

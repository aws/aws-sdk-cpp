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

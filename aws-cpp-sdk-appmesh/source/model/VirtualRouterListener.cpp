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

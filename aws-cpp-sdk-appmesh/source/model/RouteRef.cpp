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

#include <aws/appmesh/model/RouteRef.h>
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

RouteRef::RouteRef() : 
    m_arnHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_virtualRouterNameHasBeenSet(false)
{
}

RouteRef::RouteRef(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_virtualRouterNameHasBeenSet(false)
{
  *this = jsonValue;
}

RouteRef& RouteRef::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("meshName"))
  {
    m_meshName = jsonValue.GetString("meshName");

    m_meshNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("meshOwner"))
  {
    m_meshOwner = jsonValue.GetString("meshOwner");

    m_meshOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceOwner"))
  {
    m_resourceOwner = jsonValue.GetString("resourceOwner");

    m_resourceOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeName"))
  {
    m_routeName = jsonValue.GetString("routeName");

    m_routeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualRouterName"))
  {
    m_virtualRouterName = jsonValue.GetString("virtualRouterName");

    m_virtualRouterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteRef::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_meshNameHasBeenSet)
  {
   payload.WithString("meshName", m_meshName);

  }

  if(m_meshOwnerHasBeenSet)
  {
   payload.WithString("meshOwner", m_meshOwner);

  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("resourceOwner", m_resourceOwner);

  }

  if(m_routeNameHasBeenSet)
  {
   payload.WithString("routeName", m_routeName);

  }

  if(m_virtualRouterNameHasBeenSet)
  {
   payload.WithString("virtualRouterName", m_virtualRouterName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

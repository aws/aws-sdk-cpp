/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualRouterRef.h>
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

VirtualRouterRef::VirtualRouterRef() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_virtualRouterNameHasBeenSet(false)
{
}

VirtualRouterRef::VirtualRouterRef(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_meshOwnerHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_virtualRouterNameHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualRouterRef& VirtualRouterRef::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualRouterName"))
  {
    m_virtualRouterName = jsonValue.GetString("virtualRouterName");

    m_virtualRouterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualRouterRef::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
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

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("version", m_version);

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

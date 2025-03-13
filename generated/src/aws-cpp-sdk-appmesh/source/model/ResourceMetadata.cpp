/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ResourceMetadata.h>
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

ResourceMetadata::ResourceMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceMetadata& ResourceMetadata::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceMetadata::Jsonize() const
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

  if(m_meshOwnerHasBeenSet)
  {
   payload.WithString("meshOwner", m_meshOwner);

  }

  if(m_resourceOwnerHasBeenSet)
  {
   payload.WithString("resourceOwner", m_resourceOwner);

  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

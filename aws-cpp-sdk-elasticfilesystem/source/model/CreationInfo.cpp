/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/CreationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

CreationInfo::CreationInfo() : 
    m_ownerUid(0),
    m_ownerUidHasBeenSet(false),
    m_ownerGid(0),
    m_ownerGidHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

CreationInfo::CreationInfo(JsonView jsonValue) : 
    m_ownerUid(0),
    m_ownerUidHasBeenSet(false),
    m_ownerGid(0),
    m_ownerGidHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

CreationInfo& CreationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerUid"))
  {
    m_ownerUid = jsonValue.GetInt64("OwnerUid");

    m_ownerUidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerGid"))
  {
    m_ownerGid = jsonValue.GetInt64("OwnerGid");

    m_ownerGidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetString("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_ownerUidHasBeenSet)
  {
   payload.WithInt64("OwnerUid", m_ownerUid);

  }

  if(m_ownerGidHasBeenSet)
  {
   payload.WithInt64("OwnerGid", m_ownerGid);

  }

  if(m_permissionsHasBeenSet)
  {
   payload.WithString("Permissions", m_permissions);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws

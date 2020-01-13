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

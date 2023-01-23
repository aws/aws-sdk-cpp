/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ResourcePermission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

ResourcePermission::ResourcePermission() : 
    m_permissionHasBeenSet(false)
{
}

ResourcePermission::ResourcePermission(JsonView jsonValue) : 
    m_permissionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePermission& ResourcePermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permission"))
  {
    m_permission = jsonValue.GetString("permission");

    m_permissionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePermission::Jsonize() const
{
  JsonValue payload;

  if(m_permissionHasBeenSet)
  {
   payload.WithString("permission", m_permission);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws

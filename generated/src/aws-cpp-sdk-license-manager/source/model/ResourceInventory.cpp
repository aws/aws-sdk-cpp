/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ResourceInventory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

ResourceInventory::ResourceInventory() : 
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_resourceOwningAccountIdHasBeenSet(false)
{
}

ResourceInventory::ResourceInventory(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_resourceOwningAccountIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceInventory& ResourceInventory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceOwningAccountId"))
  {
    m_resourceOwningAccountId = jsonValue.GetString("ResourceOwningAccountId");

    m_resourceOwningAccountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceInventory::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_resourceOwningAccountIdHasBeenSet)
  {
   payload.WithString("ResourceOwningAccountId", m_resourceOwningAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

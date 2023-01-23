/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ResourceUri.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ResourceUri::ResourceUri() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

ResourceUri::ResourceUri(JsonView jsonValue) : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_uriHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceUri& ResourceUri::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceUri::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

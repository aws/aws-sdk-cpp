/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ResourceDetails::ResourceDetails() : 
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceConfigurationHasBeenSet(false),
    m_resourceConfigurationSchemaType(ResourceConfigurationSchemaType::NOT_SET),
    m_resourceConfigurationSchemaTypeHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceConfigurationHasBeenSet(false),
    m_resourceConfigurationSchemaType(ResourceConfigurationSchemaType::NOT_SET),
    m_resourceConfigurationSchemaTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceConfiguration"))
  {
    m_resourceConfiguration = jsonValue.GetString("ResourceConfiguration");

    m_resourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceConfigurationSchemaType"))
  {
    m_resourceConfigurationSchemaType = ResourceConfigurationSchemaTypeMapper::GetResourceConfigurationSchemaTypeForName(jsonValue.GetString("ResourceConfigurationSchemaType"));

    m_resourceConfigurationSchemaTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceConfigurationHasBeenSet)
  {
   payload.WithString("ResourceConfiguration", m_resourceConfiguration);

  }

  if(m_resourceConfigurationSchemaTypeHasBeenSet)
  {
   payload.WithString("ResourceConfigurationSchemaType", ResourceConfigurationSchemaTypeMapper::GetNameForResourceConfigurationSchemaType(m_resourceConfigurationSchemaType));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

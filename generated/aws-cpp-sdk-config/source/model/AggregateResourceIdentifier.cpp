/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateResourceIdentifier.h>
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

AggregateResourceIdentifier::AggregateResourceIdentifier() : 
    m_sourceAccountIdHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

AggregateResourceIdentifier::AggregateResourceIdentifier(JsonView jsonValue) : 
    m_sourceAccountIdHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateResourceIdentifier& AggregateResourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceAccountId"))
  {
    m_sourceAccountId = jsonValue.GetString("SourceAccountId");

    m_sourceAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("SourceRegion");

    m_sourceRegionHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateResourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAccountIdHasBeenSet)
  {
   payload.WithString("SourceAccountId", m_sourceAccountId);

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("SourceRegion", m_sourceRegion);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

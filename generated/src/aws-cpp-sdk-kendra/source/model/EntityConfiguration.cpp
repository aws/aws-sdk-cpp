/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/EntityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

EntityConfiguration::EntityConfiguration() : 
    m_entityIdHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false)
{
}

EntityConfiguration::EntityConfiguration(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EntityConfiguration& EntityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("EntityType"));

    m_entityTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("EntityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

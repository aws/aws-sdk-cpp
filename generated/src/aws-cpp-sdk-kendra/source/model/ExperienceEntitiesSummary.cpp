/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ExperienceEntitiesSummary.h>
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

ExperienceEntitiesSummary::ExperienceEntitiesSummary() : 
    m_entityIdHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false),
    m_displayDataHasBeenSet(false)
{
}

ExperienceEntitiesSummary::ExperienceEntitiesSummary(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false),
    m_displayDataHasBeenSet(false)
{
  *this = jsonValue;
}

ExperienceEntitiesSummary& ExperienceEntitiesSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DisplayData"))
  {
    m_displayData = jsonValue.GetObject("DisplayData");

    m_displayDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperienceEntitiesSummary::Jsonize() const
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

  if(m_displayDataHasBeenSet)
  {
   payload.WithObject("DisplayData", m_displayData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

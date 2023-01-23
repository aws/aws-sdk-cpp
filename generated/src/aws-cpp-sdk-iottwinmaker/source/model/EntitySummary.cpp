/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/EntitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

EntitySummary::EntitySummary() : 
    m_entityIdHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_parentEntityIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hasChildEntities(false),
    m_hasChildEntitiesHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
}

EntitySummary::EntitySummary(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_parentEntityIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hasChildEntities(false),
    m_hasChildEntitiesHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EntitySummary& EntitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityName"))
  {
    m_entityName = jsonValue.GetString("entityName");

    m_entityNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentEntityId"))
  {
    m_parentEntityId = jsonValue.GetString("parentEntityId");

    m_parentEntityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasChildEntities"))
  {
    m_hasChildEntities = jsonValue.GetBool("hasChildEntities");

    m_hasChildEntitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("entityName", m_entityName);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_parentEntityIdHasBeenSet)
  {
   payload.WithString("parentEntityId", m_parentEntityId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_hasChildEntitiesHasBeenSet)
  {
   payload.WithBool("hasChildEntities", m_hasChildEntities);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("updateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

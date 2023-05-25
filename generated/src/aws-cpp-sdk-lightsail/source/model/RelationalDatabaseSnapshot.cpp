/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabaseSnapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabaseSnapshot::RelationalDatabaseSnapshot() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_fromRelationalDatabaseNameHasBeenSet(false),
    m_fromRelationalDatabaseArnHasBeenSet(false),
    m_fromRelationalDatabaseBundleIdHasBeenSet(false),
    m_fromRelationalDatabaseBlueprintIdHasBeenSet(false)
{
}

RelationalDatabaseSnapshot::RelationalDatabaseSnapshot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_fromRelationalDatabaseNameHasBeenSet(false),
    m_fromRelationalDatabaseArnHasBeenSet(false),
    m_fromRelationalDatabaseBundleIdHasBeenSet(false),
    m_fromRelationalDatabaseBlueprintIdHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseSnapshot& RelationalDatabaseSnapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engine"))
  {
    m_engine = jsonValue.GetString("engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromRelationalDatabaseName"))
  {
    m_fromRelationalDatabaseName = jsonValue.GetString("fromRelationalDatabaseName");

    m_fromRelationalDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromRelationalDatabaseArn"))
  {
    m_fromRelationalDatabaseArn = jsonValue.GetString("fromRelationalDatabaseArn");

    m_fromRelationalDatabaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromRelationalDatabaseBundleId"))
  {
    m_fromRelationalDatabaseBundleId = jsonValue.GetString("fromRelationalDatabaseBundleId");

    m_fromRelationalDatabaseBundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromRelationalDatabaseBlueprintId"))
  {
    m_fromRelationalDatabaseBlueprintId = jsonValue.GetString("fromRelationalDatabaseBlueprintId");

    m_fromRelationalDatabaseBlueprintIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseSnapshot::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_fromRelationalDatabaseNameHasBeenSet)
  {
   payload.WithString("fromRelationalDatabaseName", m_fromRelationalDatabaseName);

  }

  if(m_fromRelationalDatabaseArnHasBeenSet)
  {
   payload.WithString("fromRelationalDatabaseArn", m_fromRelationalDatabaseArn);

  }

  if(m_fromRelationalDatabaseBundleIdHasBeenSet)
  {
   payload.WithString("fromRelationalDatabaseBundleId", m_fromRelationalDatabaseBundleId);

  }

  if(m_fromRelationalDatabaseBlueprintIdHasBeenSet)
  {
   payload.WithString("fromRelationalDatabaseBlueprintId", m_fromRelationalDatabaseBlueprintId);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

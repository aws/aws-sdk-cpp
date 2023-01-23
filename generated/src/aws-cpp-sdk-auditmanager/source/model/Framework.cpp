/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Framework.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Framework::Framework() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(FrameworkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_controlSourcesHasBeenSet(false),
    m_controlSetsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Framework::Framework(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(FrameworkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_controlSourcesHasBeenSet(false),
    m_controlSetsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Framework& Framework::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FrameworkTypeMapper::GetFrameworkTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceType"))
  {
    m_complianceType = jsonValue.GetString("complianceType");

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logo"))
  {
    m_logo = jsonValue.GetString("logo");

    m_logoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSources"))
  {
    m_controlSources = jsonValue.GetString("controlSources");

    m_controlSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSets"))
  {
    Aws::Utils::Array<JsonView> controlSetsJsonList = jsonValue.GetArray("controlSets");
    for(unsigned controlSetsIndex = 0; controlSetsIndex < controlSetsJsonList.GetLength(); ++controlSetsIndex)
    {
      m_controlSets.push_back(controlSetsJsonList[controlSetsIndex].AsObject());
    }
    m_controlSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");

    m_lastUpdatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Framework::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FrameworkTypeMapper::GetNameForFrameworkType(m_type));
  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("complianceType", m_complianceType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_logoHasBeenSet)
  {
   payload.WithString("logo", m_logo);

  }

  if(m_controlSourcesHasBeenSet)
  {
   payload.WithString("controlSources", m_controlSources);

  }

  if(m_controlSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlSetsJsonList(m_controlSets.size());
   for(unsigned controlSetsIndex = 0; controlSetsIndex < controlSetsJsonList.GetLength(); ++controlSetsIndex)
   {
     controlSetsJsonList[controlSetsIndex].AsObject(m_controlSets[controlSetsIndex].Jsonize());
   }
   payload.WithArray("controlSets", std::move(controlSetsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("lastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Control.h>
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

Control::Control() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(ControlType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_testingInformationHasBeenSet(false),
    m_actionPlanTitleHasBeenSet(false),
    m_actionPlanInstructionsHasBeenSet(false),
    m_controlSourcesHasBeenSet(false),
    m_controlMappingSourcesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Control::Control(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(ControlType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_testingInformationHasBeenSet(false),
    m_actionPlanTitleHasBeenSet(false),
    m_actionPlanInstructionsHasBeenSet(false),
    m_controlSourcesHasBeenSet(false),
    m_controlMappingSourcesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Control& Control::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("type"))
  {
    m_type = ControlTypeMapper::GetControlTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testingInformation"))
  {
    m_testingInformation = jsonValue.GetString("testingInformation");

    m_testingInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionPlanTitle"))
  {
    m_actionPlanTitle = jsonValue.GetString("actionPlanTitle");

    m_actionPlanTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionPlanInstructions"))
  {
    m_actionPlanInstructions = jsonValue.GetString("actionPlanInstructions");

    m_actionPlanInstructionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSources"))
  {
    m_controlSources = jsonValue.GetString("controlSources");

    m_controlSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlMappingSources"))
  {
    Aws::Utils::Array<JsonView> controlMappingSourcesJsonList = jsonValue.GetArray("controlMappingSources");
    for(unsigned controlMappingSourcesIndex = 0; controlMappingSourcesIndex < controlMappingSourcesJsonList.GetLength(); ++controlMappingSourcesIndex)
    {
      m_controlMappingSources.push_back(controlMappingSourcesJsonList[controlMappingSourcesIndex].AsObject());
    }
    m_controlMappingSourcesHasBeenSet = true;
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

JsonValue Control::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ControlTypeMapper::GetNameForControlType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_testingInformationHasBeenSet)
  {
   payload.WithString("testingInformation", m_testingInformation);

  }

  if(m_actionPlanTitleHasBeenSet)
  {
   payload.WithString("actionPlanTitle", m_actionPlanTitle);

  }

  if(m_actionPlanInstructionsHasBeenSet)
  {
   payload.WithString("actionPlanInstructions", m_actionPlanInstructions);

  }

  if(m_controlSourcesHasBeenSet)
  {
   payload.WithString("controlSources", m_controlSources);

  }

  if(m_controlMappingSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlMappingSourcesJsonList(m_controlMappingSources.size());
   for(unsigned controlMappingSourcesIndex = 0; controlMappingSourcesIndex < controlMappingSourcesJsonList.GetLength(); ++controlMappingSourcesIndex)
   {
     controlMappingSourcesJsonList[controlMappingSourcesIndex].AsObject(m_controlMappingSources[controlMappingSourcesIndex].Jsonize());
   }
   payload.WithArray("controlMappingSources", std::move(controlMappingSourcesJsonList));

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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobDetailsEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

JobDetailsEntity::JobDetailsEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

JobDetailsEntity& JobDetailsEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobAttachmentSettings"))
  {
    m_jobAttachmentSettings = jsonValue.GetObject("jobAttachmentSettings");
    m_jobAttachmentSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobRunAsUser"))
  {
    m_jobRunAsUser = jsonValue.GetObject("jobRunAsUser");
    m_jobRunAsUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queueRoleArn"))
  {
    m_queueRoleArn = jsonValue.GetString("queueRoleArn");
    m_queueRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("schemaVersion");
    m_schemaVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pathMappingRules"))
  {
    Aws::Utils::Array<JsonView> pathMappingRulesJsonList = jsonValue.GetArray("pathMappingRules");
    for(unsigned pathMappingRulesIndex = 0; pathMappingRulesIndex < pathMappingRulesJsonList.GetLength(); ++pathMappingRulesIndex)
    {
      m_pathMappingRules.push_back(pathMappingRulesJsonList[pathMappingRulesIndex].AsObject());
    }
    m_pathMappingRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue JobDetailsEntity::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobAttachmentSettingsHasBeenSet)
  {
   payload.WithObject("jobAttachmentSettings", m_jobAttachmentSettings.Jsonize());

  }

  if(m_jobRunAsUserHasBeenSet)
  {
   payload.WithObject("jobRunAsUser", m_jobRunAsUser.Jsonize());

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_queueRoleArnHasBeenSet)
  {
   payload.WithString("queueRoleArn", m_queueRoleArn);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", m_schemaVersion);

  }

  if(m_pathMappingRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathMappingRulesJsonList(m_pathMappingRules.size());
   for(unsigned pathMappingRulesIndex = 0; pathMappingRulesIndex < pathMappingRulesJsonList.GetLength(); ++pathMappingRulesIndex)
   {
     pathMappingRulesJsonList[pathMappingRulesIndex].AsObject(m_pathMappingRules[pathMappingRulesIndex].Jsonize());
   }
   payload.WithArray("pathMappingRules", std::move(pathMappingRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws

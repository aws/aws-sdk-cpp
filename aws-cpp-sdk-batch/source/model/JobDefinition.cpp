/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

JobDefinition::JobDefinition() : 
    m_jobDefinitionNameHasBeenSet(false),
    m_jobDefinitionArnHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_containerPropertiesHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

JobDefinition::JobDefinition(JsonView jsonValue) : 
    m_jobDefinitionNameHasBeenSet(false),
    m_jobDefinitionArnHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_containerPropertiesHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

JobDefinition& JobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobDefinitionName"))
  {
    m_jobDefinitionName = jsonValue.GetString("jobDefinitionName");

    m_jobDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDefinitionArn"))
  {
    m_jobDefinitionArn = jsonValue.GetString("jobDefinitionArn");

    m_jobDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInteger("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("retryStrategy");

    m_retryStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerProperties"))
  {
    m_containerProperties = jsonValue.GetObject("containerProperties");

    m_containerPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeout"))
  {
    m_timeout = jsonValue.GetObject("timeout");

    m_timeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeProperties"))
  {
    m_nodeProperties = jsonValue.GetObject("nodeProperties");

    m_nodePropertiesHasBeenSet = true;
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

JsonValue JobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("jobDefinitionName", m_jobDefinitionName);

  }

  if(m_jobDefinitionArnHasBeenSet)
  {
   payload.WithString("jobDefinitionArn", m_jobDefinitionArn);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("revision", m_revision);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_retryStrategyHasBeenSet)
  {
   payload.WithObject("retryStrategy", m_retryStrategy.Jsonize());

  }

  if(m_containerPropertiesHasBeenSet)
  {
   payload.WithObject("containerProperties", m_containerProperties.Jsonize());

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithObject("timeout", m_timeout.Jsonize());

  }

  if(m_nodePropertiesHasBeenSet)
  {
   payload.WithObject("nodeProperties", m_nodeProperties.Jsonize());

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
} // namespace Batch
} // namespace Aws

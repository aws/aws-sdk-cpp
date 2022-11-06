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
    m_schedulingPriority(0),
    m_schedulingPriorityHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_containerPropertiesHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_propagateTags(false),
    m_propagateTagsHasBeenSet(false),
    m_platformCapabilitiesHasBeenSet(false),
    m_eksPropertiesHasBeenSet(false),
    m_containerOrchestrationType(OrchestrationType::NOT_SET),
    m_containerOrchestrationTypeHasBeenSet(false)
{
}

JobDefinition::JobDefinition(JsonView jsonValue) : 
    m_jobDefinitionNameHasBeenSet(false),
    m_jobDefinitionArnHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_schedulingPriority(0),
    m_schedulingPriorityHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_retryStrategyHasBeenSet(false),
    m_containerPropertiesHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_nodePropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_propagateTags(false),
    m_propagateTagsHasBeenSet(false),
    m_platformCapabilitiesHasBeenSet(false),
    m_eksPropertiesHasBeenSet(false),
    m_containerOrchestrationType(OrchestrationType::NOT_SET),
    m_containerOrchestrationTypeHasBeenSet(false)
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

  if(jsonValue.ValueExists("schedulingPriority"))
  {
    m_schedulingPriority = jsonValue.GetInteger("schedulingPriority");

    m_schedulingPriorityHasBeenSet = true;
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

  if(jsonValue.ValueExists("propagateTags"))
  {
    m_propagateTags = jsonValue.GetBool("propagateTags");

    m_propagateTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformCapabilities"))
  {
    Aws::Utils::Array<JsonView> platformCapabilitiesJsonList = jsonValue.GetArray("platformCapabilities");
    for(unsigned platformCapabilitiesIndex = 0; platformCapabilitiesIndex < platformCapabilitiesJsonList.GetLength(); ++platformCapabilitiesIndex)
    {
      m_platformCapabilities.push_back(PlatformCapabilityMapper::GetPlatformCapabilityForName(platformCapabilitiesJsonList[platformCapabilitiesIndex].AsString()));
    }
    m_platformCapabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eksProperties"))
  {
    m_eksProperties = jsonValue.GetObject("eksProperties");

    m_eksPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerOrchestrationType"))
  {
    m_containerOrchestrationType = OrchestrationTypeMapper::GetOrchestrationTypeForName(jsonValue.GetString("containerOrchestrationType"));

    m_containerOrchestrationTypeHasBeenSet = true;
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

  if(m_schedulingPriorityHasBeenSet)
  {
   payload.WithInteger("schedulingPriority", m_schedulingPriority);

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

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithBool("propagateTags", m_propagateTags);

  }

  if(m_platformCapabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformCapabilitiesJsonList(m_platformCapabilities.size());
   for(unsigned platformCapabilitiesIndex = 0; platformCapabilitiesIndex < platformCapabilitiesJsonList.GetLength(); ++platformCapabilitiesIndex)
   {
     platformCapabilitiesJsonList[platformCapabilitiesIndex].AsString(PlatformCapabilityMapper::GetNameForPlatformCapability(m_platformCapabilities[platformCapabilitiesIndex]));
   }
   payload.WithArray("platformCapabilities", std::move(platformCapabilitiesJsonList));

  }

  if(m_eksPropertiesHasBeenSet)
  {
   payload.WithObject("eksProperties", m_eksProperties.Jsonize());

  }

  if(m_containerOrchestrationTypeHasBeenSet)
  {
   payload.WithString("containerOrchestrationType", OrchestrationTypeMapper::GetNameForOrchestrationType(m_containerOrchestrationType));
  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws

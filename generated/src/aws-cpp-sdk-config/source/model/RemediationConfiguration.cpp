/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationConfiguration.h>
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

RemediationConfiguration::RemediationConfiguration() : 
    m_configRuleNameHasBeenSet(false),
    m_targetType(RemediationTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_automatic(false),
    m_automaticHasBeenSet(false),
    m_executionControlsHasBeenSet(false),
    m_maximumAutomaticAttempts(0),
    m_maximumAutomaticAttemptsHasBeenSet(false),
    m_retryAttemptSeconds(0),
    m_retryAttemptSecondsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByServiceHasBeenSet(false)
{
}

RemediationConfiguration::RemediationConfiguration(JsonView jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_targetType(RemediationTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_automatic(false),
    m_automaticHasBeenSet(false),
    m_executionControlsHasBeenSet(false),
    m_maximumAutomaticAttempts(0),
    m_maximumAutomaticAttemptsHasBeenSet(false),
    m_retryAttemptSeconds(0),
    m_retryAttemptSecondsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByServiceHasBeenSet(false)
{
  *this = jsonValue;
}

RemediationConfiguration& RemediationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");

    m_configRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = RemediationTargetTypeMapper::GetRemediationTargetTypeForName(jsonValue.GetString("TargetType"));

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetVersion"))
  {
    m_targetVersion = jsonValue.GetString("TargetVersion");

    m_targetVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Automatic"))
  {
    m_automatic = jsonValue.GetBool("Automatic");

    m_automaticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionControls"))
  {
    m_executionControls = jsonValue.GetObject("ExecutionControls");

    m_executionControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumAutomaticAttempts"))
  {
    m_maximumAutomaticAttempts = jsonValue.GetInteger("MaximumAutomaticAttempts");

    m_maximumAutomaticAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryAttemptSeconds"))
  {
    m_retryAttemptSeconds = jsonValue.GetInt64("RetryAttemptSeconds");

    m_retryAttemptSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedByService"))
  {
    m_createdByService = jsonValue.GetString("CreatedByService");

    m_createdByServiceHasBeenSet = true;
  }

  return *this;
}

JsonValue RemediationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", RemediationTargetTypeMapper::GetNameForRemediationTargetType(m_targetType));
  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_targetVersionHasBeenSet)
  {
   payload.WithString("TargetVersion", m_targetVersion);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_automaticHasBeenSet)
  {
   payload.WithBool("Automatic", m_automatic);

  }

  if(m_executionControlsHasBeenSet)
  {
   payload.WithObject("ExecutionControls", m_executionControls.Jsonize());

  }

  if(m_maximumAutomaticAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumAutomaticAttempts", m_maximumAutomaticAttempts);

  }

  if(m_retryAttemptSecondsHasBeenSet)
  {
   payload.WithInt64("RetryAttemptSeconds", m_retryAttemptSeconds);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdByServiceHasBeenSet)
  {
   payload.WithString("CreatedByService", m_createdByService);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

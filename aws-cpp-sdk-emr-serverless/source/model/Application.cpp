/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

Application::Application() : 
    m_applicationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_state(ApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_initialCapacityHasBeenSet(false),
    m_maximumCapacityHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoStartConfigurationHasBeenSet(false),
    m_autoStopConfigurationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
}

Application::Application(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_state(ApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateDetailsHasBeenSet(false),
    m_initialCapacityHasBeenSet(false),
    m_maximumCapacityHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoStartConfigurationHasBeenSet(false),
    m_autoStopConfigurationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");

    m_releaseLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ApplicationStateMapper::GetApplicationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");

    m_stateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initialCapacity"))
  {
    Aws::Map<Aws::String, JsonView> initialCapacityJsonMap = jsonValue.GetObject("initialCapacity").GetAllObjects();
    for(auto& initialCapacityItem : initialCapacityJsonMap)
    {
      m_initialCapacity[initialCapacityItem.first] = initialCapacityItem.second.AsObject();
    }
    m_initialCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumCapacity"))
  {
    m_maximumCapacity = jsonValue.GetObject("maximumCapacity");

    m_maximumCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("autoStartConfiguration"))
  {
    m_autoStartConfiguration = jsonValue.GetObject("autoStartConfiguration");

    m_autoStartConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoStopConfiguration"))
  {
    m_autoStopConfiguration = jsonValue.GetObject("autoStopConfiguration");

    m_autoStopConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));

    m_architectureHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ApplicationStateMapper::GetNameForApplicationState(m_state));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_initialCapacityHasBeenSet)
  {
   JsonValue initialCapacityJsonMap;
   for(auto& initialCapacityItem : m_initialCapacity)
   {
     initialCapacityJsonMap.WithObject(initialCapacityItem.first, initialCapacityItem.second.Jsonize());
   }
   payload.WithObject("initialCapacity", std::move(initialCapacityJsonMap));

  }

  if(m_maximumCapacityHasBeenSet)
  {
   payload.WithObject("maximumCapacity", m_maximumCapacity.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
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

  if(m_autoStartConfigurationHasBeenSet)
  {
   payload.WithObject("autoStartConfiguration", m_autoStartConfiguration.Jsonize());

  }

  if(m_autoStopConfigurationHasBeenSet)
  {
   payload.WithObject("autoStopConfiguration", m_autoStopConfiguration.Jsonize());

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws

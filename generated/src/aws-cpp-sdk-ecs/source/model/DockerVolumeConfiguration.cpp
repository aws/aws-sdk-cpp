/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DockerVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

DockerVolumeConfiguration::DockerVolumeConfiguration() : 
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_autoprovision(false),
    m_autoprovisionHasBeenSet(false),
    m_driverHasBeenSet(false),
    m_driverOptsHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

DockerVolumeConfiguration::DockerVolumeConfiguration(JsonView jsonValue) : 
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_autoprovision(false),
    m_autoprovisionHasBeenSet(false),
    m_driverHasBeenSet(false),
    m_driverOptsHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
  *this = jsonValue;
}

DockerVolumeConfiguration& DockerVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scope"))
  {
    m_scope = ScopeMapper::GetScopeForName(jsonValue.GetString("scope"));

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoprovision"))
  {
    m_autoprovision = jsonValue.GetBool("autoprovision");

    m_autoprovisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("driver"))
  {
    m_driver = jsonValue.GetString("driver");

    m_driverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("driverOpts"))
  {
    Aws::Map<Aws::String, JsonView> driverOptsJsonMap = jsonValue.GetObject("driverOpts").GetAllObjects();
    for(auto& driverOptsItem : driverOptsJsonMap)
    {
      m_driverOpts[driverOptsItem.first] = driverOptsItem.second.AsString();
    }
    m_driverOptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("labels").GetAllObjects();
    for(auto& labelsItem : labelsJsonMap)
    {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }

  return *this;
}

JsonValue DockerVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_autoprovisionHasBeenSet)
  {
   payload.WithBool("autoprovision", m_autoprovision);

  }

  if(m_driverHasBeenSet)
  {
   payload.WithString("driver", m_driver);

  }

  if(m_driverOptsHasBeenSet)
  {
   JsonValue driverOptsJsonMap;
   for(auto& driverOptsItem : m_driverOpts)
   {
     driverOptsJsonMap.WithString(driverOptsItem.first, driverOptsItem.second);
   }
   payload.WithObject("driverOpts", std::move(driverOptsJsonMap));

  }

  if(m_labelsHasBeenSet)
  {
   JsonValue labelsJsonMap;
   for(auto& labelsItem : m_labels)
   {
     labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
   }
   payload.WithObject("labels", std::move(labelsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws

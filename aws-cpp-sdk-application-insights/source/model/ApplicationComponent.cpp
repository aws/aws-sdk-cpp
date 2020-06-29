/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ApplicationComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

ApplicationComponent::ApplicationComponent() : 
    m_componentNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_monitor(false),
    m_monitorHasBeenSet(false)
{
}

ApplicationComponent::ApplicationComponent(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_monitor(false),
    m_monitorHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationComponent& ApplicationComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentName"))
  {
    m_componentName = jsonValue.GetString("ComponentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = TierMapper::GetTierForName(jsonValue.GetString("Tier"));

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Monitor"))
  {
    m_monitor = jsonValue.GetBool("Monitor");

    m_monitorHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationComponent::Jsonize() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", TierMapper::GetNameForTier(m_tier));
  }

  if(m_monitorHasBeenSet)
  {
   payload.WithBool("Monitor", m_monitor);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws

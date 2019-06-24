/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_tierHasBeenSet(false),
    m_monitor(false),
    m_monitorHasBeenSet(false)
{
}

ApplicationComponent::ApplicationComponent(JsonView jsonValue) : 
    m_componentNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
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
    m_tier = jsonValue.GetString("Tier");

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
   payload.WithString("Tier", m_tier);

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

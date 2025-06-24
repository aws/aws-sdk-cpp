/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ControlSummary::ControlSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlSummary& ControlSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Aliases"))
  {
    Aws::Utils::Array<JsonView> aliasesJsonList = jsonValue.GetArray("Aliases");
    for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
    {
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsString());
    }
    m_aliasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Behavior"))
  {
    m_behavior = ControlBehaviorMapper::GetControlBehaviorForName(jsonValue.GetString("Behavior"));
    m_behaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = ControlSeverityMapper::GetControlSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Implementation"))
  {
    m_implementation = jsonValue.GetObject("Implementation");
    m_implementationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GovernedResources"))
  {
    Aws::Utils::Array<JsonView> governedResourcesJsonList = jsonValue.GetArray("GovernedResources");
    for(unsigned governedResourcesIndex = 0; governedResourcesIndex < governedResourcesJsonList.GetLength(); ++governedResourcesIndex)
    {
      m_governedResources.push_back(governedResourcesJsonList[governedResourcesIndex].AsString());
    }
    m_governedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_aliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesJsonList(m_aliases.size());
   for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
   {
     aliasesJsonList[aliasesIndex].AsString(m_aliases[aliasesIndex]);
   }
   payload.WithArray("Aliases", std::move(aliasesJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("Behavior", ControlBehaviorMapper::GetNameForControlBehavior(m_behavior));
  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", ControlSeverityMapper::GetNameForControlSeverity(m_severity));
  }

  if(m_implementationHasBeenSet)
  {
   payload.WithObject("Implementation", m_implementation.Jsonize());

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_governedResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> governedResourcesJsonList(m_governedResources.size());
   for(unsigned governedResourcesIndex = 0; governedResourcesIndex < governedResourcesJsonList.GetLength(); ++governedResourcesIndex)
   {
     governedResourcesJsonList[governedResourcesIndex].AsString(m_governedResources[governedResourcesIndex]);
   }
   payload.WithArray("GovernedResources", std::move(governedResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws

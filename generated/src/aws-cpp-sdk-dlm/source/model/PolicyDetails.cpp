/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/PolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

PolicyDetails::PolicyDetails() : 
    m_policyType(PolicyTypeValues::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_resourceLocationsHasBeenSet(false),
    m_targetTagsHasBeenSet(false),
    m_schedulesHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_policyLanguage(PolicyLanguageValues::NOT_SET),
    m_policyLanguageHasBeenSet(false),
    m_resourceType(ResourceTypeValues::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createInterval(0),
    m_createIntervalHasBeenSet(false),
    m_retainInterval(0),
    m_retainIntervalHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_crossRegionCopyTargetsHasBeenSet(false),
    m_extendDeletion(false),
    m_extendDeletionHasBeenSet(false),
    m_exclusionsHasBeenSet(false)
{
}

PolicyDetails::PolicyDetails(JsonView jsonValue) : 
    m_policyType(PolicyTypeValues::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_resourceLocationsHasBeenSet(false),
    m_targetTagsHasBeenSet(false),
    m_schedulesHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_policyLanguage(PolicyLanguageValues::NOT_SET),
    m_policyLanguageHasBeenSet(false),
    m_resourceType(ResourceTypeValues::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createInterval(0),
    m_createIntervalHasBeenSet(false),
    m_retainInterval(0),
    m_retainIntervalHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_crossRegionCopyTargetsHasBeenSet(false),
    m_extendDeletion(false),
    m_extendDeletionHasBeenSet(false),
    m_exclusionsHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyDetails& PolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = PolicyTypeValuesMapper::GetPolicyTypeValuesForName(jsonValue.GetString("PolicyType"));

    m_policyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(ResourceTypeValuesMapper::GetResourceTypeValuesForName(resourceTypesJsonList[resourceTypesIndex].AsString()));
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceLocations"))
  {
    Aws::Utils::Array<JsonView> resourceLocationsJsonList = jsonValue.GetArray("ResourceLocations");
    for(unsigned resourceLocationsIndex = 0; resourceLocationsIndex < resourceLocationsJsonList.GetLength(); ++resourceLocationsIndex)
    {
      m_resourceLocations.push_back(ResourceLocationValuesMapper::GetResourceLocationValuesForName(resourceLocationsJsonList[resourceLocationsIndex].AsString()));
    }
    m_resourceLocationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTags"))
  {
    Aws::Utils::Array<JsonView> targetTagsJsonList = jsonValue.GetArray("TargetTags");
    for(unsigned targetTagsIndex = 0; targetTagsIndex < targetTagsJsonList.GetLength(); ++targetTagsIndex)
    {
      m_targetTags.push_back(targetTagsJsonList[targetTagsIndex].AsObject());
    }
    m_targetTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedules"))
  {
    Aws::Utils::Array<JsonView> schedulesJsonList = jsonValue.GetArray("Schedules");
    for(unsigned schedulesIndex = 0; schedulesIndex < schedulesJsonList.GetLength(); ++schedulesIndex)
    {
      m_schedules.push_back(schedulesJsonList[schedulesIndex].AsObject());
    }
    m_schedulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetObject("Parameters");

    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSource"))
  {
    m_eventSource = jsonValue.GetObject("EventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyLanguage"))
  {
    m_policyLanguage = PolicyLanguageValuesMapper::GetPolicyLanguageValuesForName(jsonValue.GetString("PolicyLanguage"));

    m_policyLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeValuesMapper::GetResourceTypeValuesForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateInterval"))
  {
    m_createInterval = jsonValue.GetInteger("CreateInterval");

    m_createIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetainInterval"))
  {
    m_retainInterval = jsonValue.GetInteger("RetainInterval");

    m_retainIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTags"))
  {
    m_copyTags = jsonValue.GetBool("CopyTags");

    m_copyTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossRegionCopyTargets"))
  {
    Aws::Utils::Array<JsonView> crossRegionCopyTargetsJsonList = jsonValue.GetArray("CrossRegionCopyTargets");
    for(unsigned crossRegionCopyTargetsIndex = 0; crossRegionCopyTargetsIndex < crossRegionCopyTargetsJsonList.GetLength(); ++crossRegionCopyTargetsIndex)
    {
      m_crossRegionCopyTargets.push_back(crossRegionCopyTargetsJsonList[crossRegionCopyTargetsIndex].AsObject());
    }
    m_crossRegionCopyTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtendDeletion"))
  {
    m_extendDeletion = jsonValue.GetBool("ExtendDeletion");

    m_extendDeletionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclusions"))
  {
    m_exclusions = jsonValue.GetObject("Exclusions");

    m_exclusionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeValuesMapper::GetNameForPolicyTypeValues(m_policyType));
  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeValuesMapper::GetNameForResourceTypeValues(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_resourceLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceLocationsJsonList(m_resourceLocations.size());
   for(unsigned resourceLocationsIndex = 0; resourceLocationsIndex < resourceLocationsJsonList.GetLength(); ++resourceLocationsIndex)
   {
     resourceLocationsJsonList[resourceLocationsIndex].AsString(ResourceLocationValuesMapper::GetNameForResourceLocationValues(m_resourceLocations[resourceLocationsIndex]));
   }
   payload.WithArray("ResourceLocations", std::move(resourceLocationsJsonList));

  }

  if(m_targetTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetTagsJsonList(m_targetTags.size());
   for(unsigned targetTagsIndex = 0; targetTagsIndex < targetTagsJsonList.GetLength(); ++targetTagsIndex)
   {
     targetTagsJsonList[targetTagsIndex].AsObject(m_targetTags[targetTagsIndex].Jsonize());
   }
   payload.WithArray("TargetTags", std::move(targetTagsJsonList));

  }

  if(m_schedulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> schedulesJsonList(m_schedules.size());
   for(unsigned schedulesIndex = 0; schedulesIndex < schedulesJsonList.GetLength(); ++schedulesIndex)
   {
     schedulesJsonList[schedulesIndex].AsObject(m_schedules[schedulesIndex].Jsonize());
   }
   payload.WithArray("Schedules", std::move(schedulesJsonList));

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithObject("EventSource", m_eventSource.Jsonize());

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_policyLanguageHasBeenSet)
  {
   payload.WithString("PolicyLanguage", PolicyLanguageValuesMapper::GetNameForPolicyLanguageValues(m_policyLanguage));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeValuesMapper::GetNameForResourceTypeValues(m_resourceType));
  }

  if(m_createIntervalHasBeenSet)
  {
   payload.WithInteger("CreateInterval", m_createInterval);

  }

  if(m_retainIntervalHasBeenSet)
  {
   payload.WithInteger("RetainInterval", m_retainInterval);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("CopyTags", m_copyTags);

  }

  if(m_crossRegionCopyTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossRegionCopyTargetsJsonList(m_crossRegionCopyTargets.size());
   for(unsigned crossRegionCopyTargetsIndex = 0; crossRegionCopyTargetsIndex < crossRegionCopyTargetsJsonList.GetLength(); ++crossRegionCopyTargetsIndex)
   {
     crossRegionCopyTargetsJsonList[crossRegionCopyTargetsIndex].AsObject(m_crossRegionCopyTargets[crossRegionCopyTargetsIndex].Jsonize());
   }
   payload.WithArray("CrossRegionCopyTargets", std::move(crossRegionCopyTargetsJsonList));

  }

  if(m_extendDeletionHasBeenSet)
  {
   payload.WithBool("ExtendDeletion", m_extendDeletion);

  }

  if(m_exclusionsHasBeenSet)
  {
   payload.WithObject("Exclusions", m_exclusions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws

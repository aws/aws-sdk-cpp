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
    m_targetTagsHasBeenSet(false),
    m_schedulesHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

PolicyDetails::PolicyDetails(JsonView jsonValue) : 
    m_policyType(PolicyTypeValues::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_targetTagsHasBeenSet(false),
    m_schedulesHasBeenSet(false),
    m_parametersHasBeenSet(false)
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
    Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(ResourceTypeValuesMapper::GetResourceTypeValuesForName(resourceTypesJsonList[resourceTypesIndex].AsString()));
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTags"))
  {
    Array<JsonView> targetTagsJsonList = jsonValue.GetArray("TargetTags");
    for(unsigned targetTagsIndex = 0; targetTagsIndex < targetTagsJsonList.GetLength(); ++targetTagsIndex)
    {
      m_targetTags.push_back(targetTagsJsonList[targetTagsIndex].AsObject());
    }
    m_targetTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedules"))
  {
    Array<JsonView> schedulesJsonList = jsonValue.GetArray("Schedules");
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
   Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeValuesMapper::GetNameForResourceTypeValues(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_targetTagsHasBeenSet)
  {
   Array<JsonValue> targetTagsJsonList(m_targetTags.size());
   for(unsigned targetTagsIndex = 0; targetTagsIndex < targetTagsJsonList.GetLength(); ++targetTagsIndex)
   {
     targetTagsJsonList[targetTagsIndex].AsObject(m_targetTags[targetTagsIndex].Jsonize());
   }
   payload.WithArray("TargetTags", std::move(targetTagsJsonList));

  }

  if(m_schedulesHasBeenSet)
  {
   Array<JsonValue> schedulesJsonList(m_schedules.size());
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

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws

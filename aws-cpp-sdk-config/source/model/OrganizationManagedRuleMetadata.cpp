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

#include <aws/config/model/OrganizationManagedRuleMetadata.h>
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

OrganizationManagedRuleMetadata::OrganizationManagedRuleMetadata() : 
    m_descriptionHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false),
    m_resourceTypesScopeHasBeenSet(false),
    m_resourceIdScopeHasBeenSet(false),
    m_tagKeyScopeHasBeenSet(false),
    m_tagValueScopeHasBeenSet(false)
{
}

OrganizationManagedRuleMetadata::OrganizationManagedRuleMetadata(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false),
    m_inputParametersHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false),
    m_resourceTypesScopeHasBeenSet(false),
    m_resourceIdScopeHasBeenSet(false),
    m_tagKeyScopeHasBeenSet(false),
    m_tagValueScopeHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationManagedRuleMetadata& OrganizationManagedRuleMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleIdentifier"))
  {
    m_ruleIdentifier = jsonValue.GetString("RuleIdentifier");

    m_ruleIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputParameters"))
  {
    m_inputParameters = jsonValue.GetString("InputParameters");

    m_inputParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumExecutionFrequency"))
  {
    m_maximumExecutionFrequency = MaximumExecutionFrequencyMapper::GetMaximumExecutionFrequencyForName(jsonValue.GetString("MaximumExecutionFrequency"));

    m_maximumExecutionFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypesScope"))
  {
    Array<JsonView> resourceTypesScopeJsonList = jsonValue.GetArray("ResourceTypesScope");
    for(unsigned resourceTypesScopeIndex = 0; resourceTypesScopeIndex < resourceTypesScopeJsonList.GetLength(); ++resourceTypesScopeIndex)
    {
      m_resourceTypesScope.push_back(resourceTypesScopeJsonList[resourceTypesScopeIndex].AsString());
    }
    m_resourceTypesScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIdScope"))
  {
    m_resourceIdScope = jsonValue.GetString("ResourceIdScope");

    m_resourceIdScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagKeyScope"))
  {
    m_tagKeyScope = jsonValue.GetString("TagKeyScope");

    m_tagKeyScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValueScope"))
  {
    m_tagValueScope = jsonValue.GetString("TagValueScope");

    m_tagValueScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationManagedRuleMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_ruleIdentifierHasBeenSet)
  {
   payload.WithString("RuleIdentifier", m_ruleIdentifier);

  }

  if(m_inputParametersHasBeenSet)
  {
   payload.WithString("InputParameters", m_inputParameters);

  }

  if(m_maximumExecutionFrequencyHasBeenSet)
  {
   payload.WithString("MaximumExecutionFrequency", MaximumExecutionFrequencyMapper::GetNameForMaximumExecutionFrequency(m_maximumExecutionFrequency));
  }

  if(m_resourceTypesScopeHasBeenSet)
  {
   Array<JsonValue> resourceTypesScopeJsonList(m_resourceTypesScope.size());
   for(unsigned resourceTypesScopeIndex = 0; resourceTypesScopeIndex < resourceTypesScopeJsonList.GetLength(); ++resourceTypesScopeIndex)
   {
     resourceTypesScopeJsonList[resourceTypesScopeIndex].AsString(m_resourceTypesScope[resourceTypesScopeIndex]);
   }
   payload.WithArray("ResourceTypesScope", std::move(resourceTypesScopeJsonList));

  }

  if(m_resourceIdScopeHasBeenSet)
  {
   payload.WithString("ResourceIdScope", m_resourceIdScope);

  }

  if(m_tagKeyScopeHasBeenSet)
  {
   payload.WithString("TagKeyScope", m_tagKeyScope);

  }

  if(m_tagValueScopeHasBeenSet)
  {
   payload.WithString("TagValueScope", m_tagValueScope);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws

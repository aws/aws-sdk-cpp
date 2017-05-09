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

#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchRuleGroup::PatchRuleGroup() : 
    m_patchRulesHasBeenSet(false)
{
}

PatchRuleGroup::PatchRuleGroup(const JsonValue& jsonValue) : 
    m_patchRulesHasBeenSet(false)
{
  *this = jsonValue;
}

PatchRuleGroup& PatchRuleGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PatchRules"))
  {
    Array<JsonValue> patchRulesJsonList = jsonValue.GetArray("PatchRules");
    for(unsigned patchRulesIndex = 0; patchRulesIndex < patchRulesJsonList.GetLength(); ++patchRulesIndex)
    {
      m_patchRules.push_back(patchRulesJsonList[patchRulesIndex].AsObject());
    }
    m_patchRulesHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchRuleGroup::Jsonize() const
{
  JsonValue payload;

  if(m_patchRulesHasBeenSet)
  {
   Array<JsonValue> patchRulesJsonList(m_patchRules.size());
   for(unsigned patchRulesIndex = 0; patchRulesIndex < patchRulesJsonList.GetLength(); ++patchRulesIndex)
   {
     patchRulesJsonList[patchRulesIndex].AsObject(m_patchRules[patchRulesIndex].Jsonize());
   }
   payload.WithArray("PatchRules", std::move(patchRulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
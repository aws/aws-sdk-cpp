/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PolicyTypeScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

PolicyTypeScope::PolicyTypeScope() : 
    m_policyTypesHasBeenSet(false),
    m_allPolicyTypesEnabled(false),
    m_allPolicyTypesEnabledHasBeenSet(false)
{
}

PolicyTypeScope::PolicyTypeScope(JsonView jsonValue) : 
    m_policyTypesHasBeenSet(false),
    m_allPolicyTypesEnabled(false),
    m_allPolicyTypesEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyTypeScope& PolicyTypeScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyTypes"))
  {
    Aws::Utils::Array<JsonView> policyTypesJsonList = jsonValue.GetArray("PolicyTypes");
    for(unsigned policyTypesIndex = 0; policyTypesIndex < policyTypesJsonList.GetLength(); ++policyTypesIndex)
    {
      m_policyTypes.push_back(SecurityServiceTypeMapper::GetSecurityServiceTypeForName(policyTypesJsonList[policyTypesIndex].AsString()));
    }
    m_policyTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllPolicyTypesEnabled"))
  {
    m_allPolicyTypesEnabled = jsonValue.GetBool("AllPolicyTypesEnabled");

    m_allPolicyTypesEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyTypeScope::Jsonize() const
{
  JsonValue payload;

  if(m_policyTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyTypesJsonList(m_policyTypes.size());
   for(unsigned policyTypesIndex = 0; policyTypesIndex < policyTypesJsonList.GetLength(); ++policyTypesIndex)
   {
     policyTypesJsonList[policyTypesIndex].AsString(SecurityServiceTypeMapper::GetNameForSecurityServiceType(m_policyTypes[policyTypesIndex]));
   }
   payload.WithArray("PolicyTypes", std::move(policyTypesJsonList));

  }

  if(m_allPolicyTypesEnabledHasBeenSet)
  {
   payload.WithBool("AllPolicyTypesEnabled", m_allPolicyTypesEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws

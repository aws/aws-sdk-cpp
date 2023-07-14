/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/LifecyclePolicySummary.h>
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

LifecyclePolicySummary::LifecyclePolicySummary() : 
    m_policyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(GettablePolicyStateValues::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_policyType(PolicyTypeValues::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
}

LifecyclePolicySummary::LifecyclePolicySummary(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_state(GettablePolicyStateValues::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_policyType(PolicyTypeValues::NOT_SET),
    m_policyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicySummary& LifecyclePolicySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = GettablePolicyStateValuesMapper::GetGettablePolicyStateValuesForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = PolicyTypeValuesMapper::GetPolicyTypeValuesForName(jsonValue.GetString("PolicyType"));

    m_policyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicySummary::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", GettablePolicyStateValuesMapper::GetNameForGettablePolicyStateValues(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeValuesMapper::GetNameForPolicyTypeValues(m_policyType));
  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResiliencyPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ResiliencyPolicy::ResiliencyPolicy() : 
    m_creationTimeHasBeenSet(false),
    m_dataLocationConstraint(DataLocationConstraint::NOT_SET),
    m_dataLocationConstraintHasBeenSet(false),
    m_estimatedCostTier(EstimatedCostTier::NOT_SET),
    m_estimatedCostTierHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tier(ResiliencyPolicyTier::NOT_SET),
    m_tierHasBeenSet(false)
{
}

ResiliencyPolicy::ResiliencyPolicy(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_dataLocationConstraint(DataLocationConstraint::NOT_SET),
    m_dataLocationConstraintHasBeenSet(false),
    m_estimatedCostTier(EstimatedCostTier::NOT_SET),
    m_estimatedCostTierHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tier(ResiliencyPolicyTier::NOT_SET),
    m_tierHasBeenSet(false)
{
  *this = jsonValue;
}

ResiliencyPolicy& ResiliencyPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataLocationConstraint"))
  {
    m_dataLocationConstraint = DataLocationConstraintMapper::GetDataLocationConstraintForName(jsonValue.GetString("dataLocationConstraint"));

    m_dataLocationConstraintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedCostTier"))
  {
    m_estimatedCostTier = EstimatedCostTierMapper::GetEstimatedCostTierForName(jsonValue.GetString("estimatedCostTier"));

    m_estimatedCostTierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policy"))
  {
    Aws::Map<Aws::String, JsonView> policyJsonMap = jsonValue.GetObject("policy").GetAllObjects();
    for(auto& policyItem : policyJsonMap)
    {
      m_policy[DisruptionTypeMapper::GetDisruptionTypeForName(policyItem.first)] = policyItem.second.AsObject();
    }
    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyDescription"))
  {
    m_policyDescription = jsonValue.GetString("policyDescription");

    m_policyDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tier"))
  {
    m_tier = ResiliencyPolicyTierMapper::GetResiliencyPolicyTierForName(jsonValue.GetString("tier"));

    m_tierHasBeenSet = true;
  }

  return *this;
}

JsonValue ResiliencyPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_dataLocationConstraintHasBeenSet)
  {
   payload.WithString("dataLocationConstraint", DataLocationConstraintMapper::GetNameForDataLocationConstraint(m_dataLocationConstraint));
  }

  if(m_estimatedCostTierHasBeenSet)
  {
   payload.WithString("estimatedCostTier", EstimatedCostTierMapper::GetNameForEstimatedCostTier(m_estimatedCostTier));
  }

  if(m_policyHasBeenSet)
  {
   JsonValue policyJsonMap;
   for(auto& policyItem : m_policy)
   {
     policyJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(policyItem.first), policyItem.second.Jsonize());
   }
   payload.WithObject("policy", std::move(policyJsonMap));

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_policyDescriptionHasBeenSet)
  {
   payload.WithString("policyDescription", m_policyDescription);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", ResiliencyPolicyTierMapper::GetNameForResiliencyPolicyTier(m_tier));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

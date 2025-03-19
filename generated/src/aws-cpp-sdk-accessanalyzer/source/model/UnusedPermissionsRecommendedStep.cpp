/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedPermissionsRecommendedStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

UnusedPermissionsRecommendedStep::UnusedPermissionsRecommendedStep(JsonView jsonValue)
{
  *this = jsonValue;
}

UnusedPermissionsRecommendedStep& UnusedPermissionsRecommendedStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyUpdatedAt"))
  {
    m_policyUpdatedAt = jsonValue.GetString("policyUpdatedAt");
    m_policyUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedAction"))
  {
    m_recommendedAction = RecommendedRemediationActionMapper::GetRecommendedRemediationActionForName(jsonValue.GetString("recommendedAction"));
    m_recommendedActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedPolicy"))
  {
    m_recommendedPolicy = jsonValue.GetString("recommendedPolicy");
    m_recommendedPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("existingPolicyId"))
  {
    m_existingPolicyId = jsonValue.GetString("existingPolicyId");
    m_existingPolicyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UnusedPermissionsRecommendedStep::Jsonize() const
{
  JsonValue payload;

  if(m_policyUpdatedAtHasBeenSet)
  {
   payload.WithString("policyUpdatedAt", m_policyUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_recommendedActionHasBeenSet)
  {
   payload.WithString("recommendedAction", RecommendedRemediationActionMapper::GetNameForRecommendedRemediationAction(m_recommendedAction));
  }

  if(m_recommendedPolicyHasBeenSet)
  {
   payload.WithString("recommendedPolicy", m_recommendedPolicy);

  }

  if(m_existingPolicyIdHasBeenSet)
  {
   payload.WithString("existingPolicyId", m_existingPolicyId);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

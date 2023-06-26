/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DnsRuleGroupPriorityConflictViolation.h>
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

DnsRuleGroupPriorityConflictViolation::DnsRuleGroupPriorityConflictViolation() : 
    m_violationTargetHasBeenSet(false),
    m_violationTargetDescriptionHasBeenSet(false),
    m_conflictingPriority(0),
    m_conflictingPriorityHasBeenSet(false),
    m_conflictingPolicyIdHasBeenSet(false),
    m_unavailablePrioritiesHasBeenSet(false)
{
}

DnsRuleGroupPriorityConflictViolation::DnsRuleGroupPriorityConflictViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_violationTargetDescriptionHasBeenSet(false),
    m_conflictingPriority(0),
    m_conflictingPriorityHasBeenSet(false),
    m_conflictingPolicyIdHasBeenSet(false),
    m_unavailablePrioritiesHasBeenSet(false)
{
  *this = jsonValue;
}

DnsRuleGroupPriorityConflictViolation& DnsRuleGroupPriorityConflictViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolationTargetDescription"))
  {
    m_violationTargetDescription = jsonValue.GetString("ViolationTargetDescription");

    m_violationTargetDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConflictingPriority"))
  {
    m_conflictingPriority = jsonValue.GetInteger("ConflictingPriority");

    m_conflictingPriorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConflictingPolicyId"))
  {
    m_conflictingPolicyId = jsonValue.GetString("ConflictingPolicyId");

    m_conflictingPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnavailablePriorities"))
  {
    Aws::Utils::Array<JsonView> unavailablePrioritiesJsonList = jsonValue.GetArray("UnavailablePriorities");
    for(unsigned unavailablePrioritiesIndex = 0; unavailablePrioritiesIndex < unavailablePrioritiesJsonList.GetLength(); ++unavailablePrioritiesIndex)
    {
      m_unavailablePriorities.push_back(unavailablePrioritiesJsonList[unavailablePrioritiesIndex].AsInteger());
    }
    m_unavailablePrioritiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsRuleGroupPriorityConflictViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_violationTargetDescriptionHasBeenSet)
  {
   payload.WithString("ViolationTargetDescription", m_violationTargetDescription);

  }

  if(m_conflictingPriorityHasBeenSet)
  {
   payload.WithInteger("ConflictingPriority", m_conflictingPriority);

  }

  if(m_conflictingPolicyIdHasBeenSet)
  {
   payload.WithString("ConflictingPolicyId", m_conflictingPolicyId);

  }

  if(m_unavailablePrioritiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unavailablePrioritiesJsonList(m_unavailablePriorities.size());
   for(unsigned unavailablePrioritiesIndex = 0; unavailablePrioritiesIndex < unavailablePrioritiesJsonList.GetLength(); ++unavailablePrioritiesIndex)
   {
     unavailablePrioritiesJsonList[unavailablePrioritiesIndex].AsInteger(m_unavailablePriorities[unavailablePrioritiesIndex]);
   }
   payload.WithArray("UnavailablePriorities", std::move(unavailablePrioritiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws

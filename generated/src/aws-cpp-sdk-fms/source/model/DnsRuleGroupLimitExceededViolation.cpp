/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DnsRuleGroupLimitExceededViolation.h>
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

DnsRuleGroupLimitExceededViolation::DnsRuleGroupLimitExceededViolation(JsonView jsonValue)
{
  *this = jsonValue;
}

DnsRuleGroupLimitExceededViolation& DnsRuleGroupLimitExceededViolation::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("NumberOfRuleGroupsAlreadyAssociated"))
  {
    m_numberOfRuleGroupsAlreadyAssociated = jsonValue.GetInteger("NumberOfRuleGroupsAlreadyAssociated");
    m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsRuleGroupLimitExceededViolation::Jsonize() const
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

  if(m_numberOfRuleGroupsAlreadyAssociatedHasBeenSet)
  {
   payload.WithInteger("NumberOfRuleGroupsAlreadyAssociated", m_numberOfRuleGroupsAlreadyAssociated);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DnsDuplicateRuleGroupViolation.h>
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

DnsDuplicateRuleGroupViolation::DnsDuplicateRuleGroupViolation() : 
    m_violationTargetHasBeenSet(false),
    m_violationTargetDescriptionHasBeenSet(false)
{
}

DnsDuplicateRuleGroupViolation::DnsDuplicateRuleGroupViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_violationTargetDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

DnsDuplicateRuleGroupViolation& DnsDuplicateRuleGroupViolation::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue DnsDuplicateRuleGroupViolation::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws

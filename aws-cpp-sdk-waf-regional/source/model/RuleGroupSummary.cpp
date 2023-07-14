/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RuleGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RuleGroupSummary::RuleGroupSummary() : 
    m_ruleGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

RuleGroupSummary::RuleGroupSummary(JsonView jsonValue) : 
    m_ruleGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSummary& RuleGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleGroupId"))
  {
    m_ruleGroupId = jsonValue.GetString("RuleGroupId");

    m_ruleGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ruleGroupIdHasBeenSet)
  {
   payload.WithString("RuleGroupId", m_ruleGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CaseRuleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

CaseRuleSummary::CaseRuleSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CaseRuleSummary& CaseRuleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseRuleArn"))
  {
    m_caseRuleArn = jsonValue.GetString("caseRuleArn");
    m_caseRuleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caseRuleId"))
  {
    m_caseRuleId = jsonValue.GetString("caseRuleId");
    m_caseRuleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleType"))
  {
    m_ruleType = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("ruleType"));
    m_ruleTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseRuleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_caseRuleArnHasBeenSet)
  {
   payload.WithString("caseRuleArn", m_caseRuleArn);

  }

  if(m_caseRuleIdHasBeenSet)
  {
   payload.WithString("caseRuleId", m_caseRuleId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ruleTypeHasBeenSet)
  {
   payload.WithString("ruleType", RuleTypeMapper::GetNameForRuleType(m_ruleType));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws

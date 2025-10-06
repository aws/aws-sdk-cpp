/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScheduledPlanExecutionMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ScheduledPlanExecutionMember::ScheduledPlanExecutionMember(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduledPlanExecutionMember& ScheduledPlanExecutionMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionTime"))
  {
    m_executionTime = jsonValue.GetDouble("ExecutionTime");
    m_executionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleId"))
  {
    m_ruleId = jsonValue.GetString("RuleId");
    m_ruleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleExecutionType"))
  {
    m_ruleExecutionType = RuleExecutionTypeMapper::GetRuleExecutionTypeForName(jsonValue.GetString("RuleExecutionType"));
    m_ruleExecutionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledPlanExecutionMember::Jsonize() const
{
  JsonValue payload;

  if(m_executionTimeHasBeenSet)
  {
   payload.WithDouble("ExecutionTime", m_executionTime.SecondsWithMSPrecision());
  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("RuleId", m_ruleId);

  }

  if(m_ruleExecutionTypeHasBeenSet)
  {
   payload.WithString("RuleExecutionType", RuleExecutionTypeMapper::GetNameForRuleExecutionType(m_ruleExecutionType));
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws

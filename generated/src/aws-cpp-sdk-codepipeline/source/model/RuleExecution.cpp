/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

RuleExecution::RuleExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleExecution& RuleExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleExecutionId"))
  {
    m_ruleExecutionId = jsonValue.GetString("ruleExecutionId");
    m_ruleExecutionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = RuleExecutionStatusMapper::GetRuleExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStatusChange"))
  {
    m_lastStatusChange = jsonValue.GetDouble("lastStatusChange");
    m_lastStatusChangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");
    m_tokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalExecutionId"))
  {
    m_externalExecutionId = jsonValue.GetString("externalExecutionId");
    m_externalExecutionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalExecutionUrl"))
  {
    m_externalExecutionUrl = jsonValue.GetString("externalExecutionUrl");
    m_externalExecutionUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("errorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleExecution::Jsonize() const
{
  JsonValue payload;

  if(m_ruleExecutionIdHasBeenSet)
  {
   payload.WithString("ruleExecutionId", m_ruleExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RuleExecutionStatusMapper::GetNameForRuleExecutionStatus(m_status));
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_lastStatusChangeHasBeenSet)
  {
   payload.WithDouble("lastStatusChange", m_lastStatusChange.SecondsWithMSPrecision());
  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("lastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_externalExecutionIdHasBeenSet)
  {
   payload.WithString("externalExecutionId", m_externalExecutionId);

  }

  if(m_externalExecutionUrlHasBeenSet)
  {
   payload.WithString("externalExecutionUrl", m_externalExecutionUrl);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("errorDetails", m_errorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

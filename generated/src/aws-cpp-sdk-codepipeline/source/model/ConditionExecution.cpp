/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ConditionExecution.h>
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

ConditionExecution::ConditionExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

ConditionExecution& ConditionExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ConditionExecutionStatusMapper::GetConditionExecutionStatusForName(jsonValue.GetString("status"));
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
  return *this;
}

JsonValue ConditionExecution::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ConditionExecutionStatusMapper::GetNameForConditionExecutionStatus(m_status));
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_lastStatusChangeHasBeenSet)
  {
   payload.WithDouble("lastStatusChange", m_lastStatusChange.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

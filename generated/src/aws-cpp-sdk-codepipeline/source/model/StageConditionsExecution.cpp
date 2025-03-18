/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageConditionsExecution.h>
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

StageConditionsExecution::StageConditionsExecution(JsonView jsonValue)
{
  *this = jsonValue;
}

StageConditionsExecution& StageConditionsExecution::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue StageConditionsExecution::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

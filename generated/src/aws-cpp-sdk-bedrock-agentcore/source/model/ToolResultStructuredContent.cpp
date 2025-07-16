/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ToolResultStructuredContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

ToolResultStructuredContent::ToolResultStructuredContent(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolResultStructuredContent& ToolResultStructuredContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("taskStatus"));
    m_taskStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stdout"))
  {
    m_stdout = jsonValue.GetString("stdout");
    m_stdoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stderr"))
  {
    m_stderr = jsonValue.GetString("stderr");
    m_stderrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");
    m_exitCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionTime"))
  {
    m_executionTime = jsonValue.GetDouble("executionTime");
    m_executionTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolResultStructuredContent::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("taskStatus", TaskStatusMapper::GetNameForTaskStatus(m_taskStatus));
  }

  if(m_stdoutHasBeenSet)
  {
   payload.WithString("stdout", m_stdout);

  }

  if(m_stderrHasBeenSet)
  {
   payload.WithString("stderr", m_stderr);

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_executionTimeHasBeenSet)
  {
   payload.WithDouble("executionTime", m_executionTime);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws

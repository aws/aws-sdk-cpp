/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowExecutionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

FlowExecutionSummary::FlowExecutionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowExecutionSummary& FlowExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endedAt"))
  {
    m_endedAt = jsonValue.GetString("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");
    m_executionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowAliasIdentifier"))
  {
    m_flowAliasIdentifier = jsonValue.GetString("flowAliasIdentifier");
    m_flowAliasIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowIdentifier"))
  {
    m_flowIdentifier = jsonValue.GetString("flowIdentifier");
    m_flowIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowVersion"))
  {
    m_flowVersion = jsonValue.GetString("flowVersion");
    m_flowVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = FlowExecutionStatusMapper::GetFlowExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithString("endedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_flowAliasIdentifierHasBeenSet)
  {
   payload.WithString("flowAliasIdentifier", m_flowAliasIdentifier);

  }

  if(m_flowIdentifierHasBeenSet)
  {
   payload.WithString("flowIdentifier", m_flowIdentifier);

  }

  if(m_flowVersionHasBeenSet)
  {
   payload.WithString("flowVersion", m_flowVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FlowExecutionStatusMapper::GetNameForFlowExecutionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

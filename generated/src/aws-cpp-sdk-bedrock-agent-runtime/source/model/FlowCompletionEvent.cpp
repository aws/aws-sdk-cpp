/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowCompletionEvent.h>
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

FlowCompletionEvent::FlowCompletionEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowCompletionEvent& FlowCompletionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionReason"))
  {
    m_completionReason = FlowCompletionReasonMapper::GetFlowCompletionReasonForName(jsonValue.GetString("completionReason"));
    m_completionReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowCompletionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_completionReasonHasBeenSet)
  {
   payload.WithString("completionReason", FlowCompletionReasonMapper::GetNameForFlowCompletionReason(m_completionReason));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/FlowCompletionReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information about why a flow completed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowCompletionEvent">AWS
   * API Reference</a></p>
   */
  class FlowCompletionEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowCompletionEvent();
    AWS_BEDROCKAGENTRUNTIME_API FlowCompletionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowCompletionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason that the flow completed.</p>
     */
    inline const FlowCompletionReason& GetCompletionReason() const{ return m_completionReason; }
    inline bool CompletionReasonHasBeenSet() const { return m_completionReasonHasBeenSet; }
    inline void SetCompletionReason(const FlowCompletionReason& value) { m_completionReasonHasBeenSet = true; m_completionReason = value; }
    inline void SetCompletionReason(FlowCompletionReason&& value) { m_completionReasonHasBeenSet = true; m_completionReason = std::move(value); }
    inline FlowCompletionEvent& WithCompletionReason(const FlowCompletionReason& value) { SetCompletionReason(value); return *this;}
    inline FlowCompletionEvent& WithCompletionReason(FlowCompletionReason&& value) { SetCompletionReason(std::move(value)); return *this;}
    ///@}
  private:

    FlowCompletionReason m_completionReason;
    bool m_completionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

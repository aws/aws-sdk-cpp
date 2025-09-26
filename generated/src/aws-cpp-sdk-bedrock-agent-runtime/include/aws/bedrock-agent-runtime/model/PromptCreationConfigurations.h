/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>

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
   * <p>Specifies parameters that control how the service populates the agent prompt
   * for an <code>InvokeAgent</code> or <code>InvokeInlineAgent</code> request. You
   * can control which aspects of previous invocations in the same agent session the
   * service uses to populate the agent prompt. This gives you more granular control
   * over the contextual history that is used to process the current
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PromptCreationConfigurations">AWS
   * API Reference</a></p>
   */
  class PromptCreationConfigurations
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PromptCreationConfigurations() = default;
    AWS_BEDROCKAGENTRUNTIME_API PromptCreationConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PromptCreationConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of previous conversations from the ongoing agent session to
     * include in the conversation history of the agent prompt, during the current
     * invocation. This gives you more granular control over the context that the model
     * is made aware of, and helps the model remove older context which is no longer
     * useful during the ongoing agent session.</p>
     */
    inline int GetPreviousConversationTurnsToInclude() const { return m_previousConversationTurnsToInclude; }
    inline bool PreviousConversationTurnsToIncludeHasBeenSet() const { return m_previousConversationTurnsToIncludeHasBeenSet; }
    inline void SetPreviousConversationTurnsToInclude(int value) { m_previousConversationTurnsToIncludeHasBeenSet = true; m_previousConversationTurnsToInclude = value; }
    inline PromptCreationConfigurations& WithPreviousConversationTurnsToInclude(int value) { SetPreviousConversationTurnsToInclude(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the service removes any content between
     * <code>&lt;thinking&gt;</code> tags from previous conversations in an agent
     * session. The service will only remove content from already processed turns. This
     * helps you remove content which might not be useful for current and subsequent
     * invocations. This can reduce the input token count and potentially save costs.
     * The default value is <code>false</code>.</p>
     */
    inline bool GetExcludePreviousThinkingSteps() const { return m_excludePreviousThinkingSteps; }
    inline bool ExcludePreviousThinkingStepsHasBeenSet() const { return m_excludePreviousThinkingStepsHasBeenSet; }
    inline void SetExcludePreviousThinkingSteps(bool value) { m_excludePreviousThinkingStepsHasBeenSet = true; m_excludePreviousThinkingSteps = value; }
    inline PromptCreationConfigurations& WithExcludePreviousThinkingSteps(bool value) { SetExcludePreviousThinkingSteps(value); return *this;}
    ///@}
  private:

    int m_previousConversationTurnsToInclude{0};
    bool m_previousConversationTurnsToIncludeHasBeenSet = false;

    bool m_excludePreviousThinkingSteps{false};
    bool m_excludePreviousThinkingStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

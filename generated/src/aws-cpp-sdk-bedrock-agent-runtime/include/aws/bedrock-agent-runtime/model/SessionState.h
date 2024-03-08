/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains parameters that specify various attributes that persist across a
   * session or prompt. You can define session state attributes as key-value pairs
   * when writing a <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-lambda.html">Lambda
   * function</a> for an action group or pass them when making an <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
   * request. Use session state attributes to control and provide conversational
   * context for your agent and to help customize your agent's behavior. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessionstate.html">Session
   * context</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/SessionState">AWS
   * API Reference</a></p>
   */
  class SessionState
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API SessionState();
    AWS_BEDROCKAGENTRUNTIME_API SessionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API SessionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPromptSessionAttributes() const{ return m_promptSessionAttributes; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline bool PromptSessionAttributesHasBeenSet() const { return m_promptSessionAttributesHasBeenSet; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline void SetPromptSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes = value; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline void SetPromptSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes = std::move(value); }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& WithPromptSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetPromptSessionAttributes(value); return *this;}

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& WithPromptSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetPromptSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(const Aws::String& key, const Aws::String& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(Aws::String&& key, const Aws::String& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(const Aws::String& key, Aws::String&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(Aws::String&& key, Aws::String&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(const char* key, Aws::String&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(Aws::String&& key, const char* value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains attributes that persist across a prompt and the values of those
     * attributes. These attributes replace the $prompt_session_attributes$ placeholder
     * variable in the orchestration prompt template. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-placeholders.html">Prompt
     * template placeholder variables</a>.</p>
     */
    inline SessionState& AddPromptSessionAttributes(const char* key, const char* value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains attributes that persist across a session and the values of those
     * attributes.</p>
     */
    inline SessionState& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_promptSessionAttributes;
    bool m_promptSessionAttributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent-runtime/model/InputFile.h>
#include <aws/bedrock-agent-runtime/model/InvocationResultMember.h>
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
   * <p> Contains parameters that specify various attributes that persist across a
   * session or prompt. You can define session state attributes as key-value pairs
   * when writing a <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-lambda.html">Lambda
   * function</a> for an action group or pass them when making an
   * <code>InvokeInlineAgent</code> request. Use session state attributes to control
   * and provide conversational context for your inline agent and to help customize
   * your agent's behavior. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
   * session context</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InlineSessionState">AWS
   * API Reference</a></p>
   */
  class InlineSessionState
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InlineSessionState();
    AWS_BEDROCKAGENTRUNTIME_API InlineSessionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InlineSessionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Contains information about the files used by code interpreter. </p>
     */
    inline const Aws::Vector<InputFile>& GetFiles() const{ return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    inline void SetFiles(const Aws::Vector<InputFile>& value) { m_filesHasBeenSet = true; m_files = value; }
    inline void SetFiles(Aws::Vector<InputFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }
    inline InlineSessionState& WithFiles(const Aws::Vector<InputFile>& value) { SetFiles(value); return *this;}
    inline InlineSessionState& WithFiles(Aws::Vector<InputFile>&& value) { SetFiles(std::move(value)); return *this;}
    inline InlineSessionState& AddFiles(const InputFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }
    inline InlineSessionState& AddFiles(InputFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The identifier of the invocation of an action. This value must match the
     * <code>invocationId</code> returned in the <code>InvokeInlineAgent</code>
     * response for the action whose results are provided in the
     * <code>returnControlInvocationResults</code> field. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-returncontrol.html">Return
     * control to the agent developer</a>. </p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }
    inline InlineSessionState& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}
    inline InlineSessionState& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}
    inline InlineSessionState& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains attributes that persist across a session and the values of those
     * attributes. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPromptSessionAttributes() const{ return m_promptSessionAttributes; }
    inline bool PromptSessionAttributesHasBeenSet() const { return m_promptSessionAttributesHasBeenSet; }
    inline void SetPromptSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes = value; }
    inline void SetPromptSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes = std::move(value); }
    inline InlineSessionState& WithPromptSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetPromptSessionAttributes(value); return *this;}
    inline InlineSessionState& WithPromptSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetPromptSessionAttributes(std::move(value)); return *this;}
    inline InlineSessionState& AddPromptSessionAttributes(const Aws::String& key, const Aws::String& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, value); return *this; }
    inline InlineSessionState& AddPromptSessionAttributes(Aws::String&& key, const Aws::String& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::move(key), value); return *this; }
    inline InlineSessionState& AddPromptSessionAttributes(const Aws::String& key, Aws::String&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, std::move(value)); return *this; }
    inline InlineSessionState& AddPromptSessionAttributes(Aws::String&& key, Aws::String&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline InlineSessionState& AddPromptSessionAttributes(const char* key, Aws::String&& value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, std::move(value)); return *this; }
    inline InlineSessionState& AddPromptSessionAttributes(Aws::String&& key, const char* value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(std::move(key), value); return *this; }
    inline InlineSessionState& AddPromptSessionAttributes(const char* key, const char* value) { m_promptSessionAttributesHasBeenSet = true; m_promptSessionAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the results from the action group invocation. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-returncontrol.html">Return
     * control to the agent developer</a>. </p>  <p>If you include this field in
     * the <code>sessionState</code> field, the <code>inputText</code> field will be
     * ignored.</p> 
     */
    inline const Aws::Vector<InvocationResultMember>& GetReturnControlInvocationResults() const{ return m_returnControlInvocationResults; }
    inline bool ReturnControlInvocationResultsHasBeenSet() const { return m_returnControlInvocationResultsHasBeenSet; }
    inline void SetReturnControlInvocationResults(const Aws::Vector<InvocationResultMember>& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults = value; }
    inline void SetReturnControlInvocationResults(Aws::Vector<InvocationResultMember>&& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults = std::move(value); }
    inline InlineSessionState& WithReturnControlInvocationResults(const Aws::Vector<InvocationResultMember>& value) { SetReturnControlInvocationResults(value); return *this;}
    inline InlineSessionState& WithReturnControlInvocationResults(Aws::Vector<InvocationResultMember>&& value) { SetReturnControlInvocationResults(std::move(value)); return *this;}
    inline InlineSessionState& AddReturnControlInvocationResults(const InvocationResultMember& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults.push_back(value); return *this; }
    inline InlineSessionState& AddReturnControlInvocationResults(InvocationResultMember&& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains attributes that persist across a session and the values of those
     * attributes. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }
    inline InlineSessionState& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}
    inline InlineSessionState& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}
    inline InlineSessionState& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }
    inline InlineSessionState& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }
    inline InlineSessionState& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }
    inline InlineSessionState& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline InlineSessionState& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }
    inline InlineSessionState& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }
    inline InlineSessionState& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<InputFile> m_files;
    bool m_filesHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_promptSessionAttributes;
    bool m_promptSessionAttributesHasBeenSet = false;

    Aws::Vector<InvocationResultMember> m_returnControlInvocationResults;
    bool m_returnControlInvocationResultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws

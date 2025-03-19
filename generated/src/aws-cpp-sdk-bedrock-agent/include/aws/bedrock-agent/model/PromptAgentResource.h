/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains specifications for an Amazon Bedrock agent with which to use the
   * prompt. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
   * a prompt using Prompt management</a> and <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents.html">Automate
   * tasks in your application using conversational agents</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptAgentResource">AWS
   * API Reference</a></p>
   */
  class PromptAgentResource
  {
  public:
    AWS_BEDROCKAGENT_API PromptAgentResource() = default;
    AWS_BEDROCKAGENT_API PromptAgentResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptAgentResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the agent with which to use the prompt.</p>
     */
    inline const Aws::String& GetAgentIdentifier() const { return m_agentIdentifier; }
    inline bool AgentIdentifierHasBeenSet() const { return m_agentIdentifierHasBeenSet; }
    template<typename AgentIdentifierT = Aws::String>
    void SetAgentIdentifier(AgentIdentifierT&& value) { m_agentIdentifierHasBeenSet = true; m_agentIdentifier = std::forward<AgentIdentifierT>(value); }
    template<typename AgentIdentifierT = Aws::String>
    PromptAgentResource& WithAgentIdentifier(AgentIdentifierT&& value) { SetAgentIdentifier(std::forward<AgentIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentIdentifier;
    bool m_agentIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

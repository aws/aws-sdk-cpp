/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/PromptAgentResource.h>
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
   * <p>Contains specifications for a generative AI resource with which to use the
   * prompt. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
   * a prompt using Prompt management</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PromptGenAiResource">AWS
   * API Reference</a></p>
   */
  class PromptGenAiResource
  {
  public:
    AWS_BEDROCKAGENT_API PromptGenAiResource() = default;
    AWS_BEDROCKAGENT_API PromptGenAiResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API PromptGenAiResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an Amazon Bedrock agent with which to use the prompt.</p>
     */
    inline const PromptAgentResource& GetAgent() const { return m_agent; }
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
    template<typename AgentT = PromptAgentResource>
    void SetAgent(AgentT&& value) { m_agentHasBeenSet = true; m_agent = std::forward<AgentT>(value); }
    template<typename AgentT = PromptAgentResource>
    PromptGenAiResource& WithAgent(AgentT&& value) { SetAgent(std::forward<AgentT>(value)); return *this;}
    ///@}
  private:

    PromptAgentResource m_agent;
    bool m_agentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

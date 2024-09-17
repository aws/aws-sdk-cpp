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
   * <p>Defines an agent node in your flow. You specify the agent to invoke at this
   * point in the flow. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-nodes.html">Node
   * types in Amazon Bedrock works</a> in the Amazon Bedrock User
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentFlowNodeConfiguration">AWS
   * API Reference</a></p>
   */
  class AgentFlowNodeConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API AgentFlowNodeConfiguration();
    AWS_BEDROCKAGENT_API AgentFlowNodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentFlowNodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent to invoke.</p>
     */
    inline const Aws::String& GetAgentAliasArn() const{ return m_agentAliasArn; }
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }
    inline void SetAgentAliasArn(const Aws::String& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = value; }
    inline void SetAgentAliasArn(Aws::String&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::move(value); }
    inline void SetAgentAliasArn(const char* value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn.assign(value); }
    inline AgentFlowNodeConfiguration& WithAgentAliasArn(const Aws::String& value) { SetAgentAliasArn(value); return *this;}
    inline AgentFlowNodeConfiguration& WithAgentAliasArn(Aws::String&& value) { SetAgentAliasArn(std::move(value)); return *this;}
    inline AgentFlowNodeConfiguration& WithAgentAliasArn(const char* value) { SetAgentAliasArn(value); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasArn;
    bool m_agentAliasArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

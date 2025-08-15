/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class GetAgentAliasRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgentAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    GetAgentAliasRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    GetAgentAliasRequest& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

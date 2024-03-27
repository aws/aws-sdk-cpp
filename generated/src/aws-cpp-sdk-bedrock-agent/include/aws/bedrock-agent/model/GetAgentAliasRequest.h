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
    AWS_BEDROCKAGENT_API GetAgentAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgentAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline GetAgentAliasRequest& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline GetAgentAliasRequest& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the alias for which to get information.</p>
     */
    inline GetAgentAliasRequest& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline GetAgentAliasRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline GetAgentAliasRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent to which the alias to get information
     * belongs.</p>
     */
    inline GetAgentAliasRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}

  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

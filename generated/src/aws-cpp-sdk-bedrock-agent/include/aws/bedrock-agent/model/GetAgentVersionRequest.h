﻿/**
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
  class GetAgentVersionRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgentVersion"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline GetAgentVersionRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline GetAgentVersionRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline GetAgentVersionRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline GetAgentVersionRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline GetAgentVersionRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline GetAgentVersionRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

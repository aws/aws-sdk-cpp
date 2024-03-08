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
   * <p>Get Action Group Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentActionGroupRequest">AWS
   * API Reference</a></p>
   */
  class GetAgentActionGroupRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API GetAgentActionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAgentActionGroup"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline GetAgentActionGroupRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline GetAgentActionGroupRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline GetAgentActionGroupRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Version number generated when a version is created</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline GetAgentActionGroupRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline GetAgentActionGroupRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>Version number generated when a version is created</p>
     */
    inline GetAgentActionGroupRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline const Aws::String& GetActionGroupId() const{ return m_actionGroupId; }

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline void SetActionGroupId(const Aws::String& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = value; }

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline void SetActionGroupId(Aws::String&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::move(value); }

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline void SetActionGroupId(const char* value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId.assign(value); }

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline GetAgentActionGroupRequest& WithActionGroupId(const Aws::String& value) { SetActionGroupId(value); return *this;}

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline GetAgentActionGroupRequest& WithActionGroupId(Aws::String&& value) { SetActionGroupId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when an Agent Action Group is created</p>
     */
    inline GetAgentActionGroupRequest& WithActionGroupId(const char* value) { SetActionGroupId(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_actionGroupId;
    bool m_actionGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

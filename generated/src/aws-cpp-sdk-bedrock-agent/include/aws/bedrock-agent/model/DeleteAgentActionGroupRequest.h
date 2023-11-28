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
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Delete Action Group Request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentActionGroupRequest">AWS
   * API Reference</a></p>
   */
  class DeleteAgentActionGroupRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentActionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAgentActionGroup"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline DeleteAgentActionGroupRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline DeleteAgentActionGroupRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when an Agent is created</p>
     */
    inline DeleteAgentActionGroupRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline DeleteAgentActionGroupRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline DeleteAgentActionGroupRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>Draft Version of the Agent.</p>
     */
    inline DeleteAgentActionGroupRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline const Aws::String& GetActionGroupId() const{ return m_actionGroupId; }

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline bool ActionGroupIdHasBeenSet() const { return m_actionGroupIdHasBeenSet; }

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline void SetActionGroupId(const Aws::String& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = value; }

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline void SetActionGroupId(Aws::String&& value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId = std::move(value); }

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline void SetActionGroupId(const char* value) { m_actionGroupIdHasBeenSet = true; m_actionGroupId.assign(value); }

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline DeleteAgentActionGroupRequest& WithActionGroupId(const Aws::String& value) { SetActionGroupId(value); return *this;}

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline DeleteAgentActionGroupRequest& WithActionGroupId(Aws::String&& value) { SetActionGroupId(std::move(value)); return *this;}

    /**
     * <p>Id generated at the server side when an Agent ActionGroup is created</p>
     */
    inline DeleteAgentActionGroupRequest& WithActionGroupId(const char* value) { SetActionGroupId(value); return *this;}


    /**
     * <p>Skips checking if resource is in use when set to true. Defaults to false</p>
     */
    inline bool GetSkipResourceInUseCheck() const{ return m_skipResourceInUseCheck; }

    /**
     * <p>Skips checking if resource is in use when set to true. Defaults to false</p>
     */
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }

    /**
     * <p>Skips checking if resource is in use when set to true. Defaults to false</p>
     */
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }

    /**
     * <p>Skips checking if resource is in use when set to true. Defaults to false</p>
     */
    inline DeleteAgentActionGroupRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_actionGroupId;
    bool m_actionGroupIdHasBeenSet = false;

    bool m_skipResourceInUseCheck;
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

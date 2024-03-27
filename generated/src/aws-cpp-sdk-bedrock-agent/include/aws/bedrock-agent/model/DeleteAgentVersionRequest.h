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
   */
  class DeleteAgentVersionRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DeleteAgentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAgentVersion"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline DeleteAgentVersionRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline DeleteAgentVersionRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent that the version belongs to.</p>
     */
    inline DeleteAgentVersionRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The version of the agent to delete.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline DeleteAgentVersionRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline DeleteAgentVersionRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the agent to delete.</p>
     */
    inline DeleteAgentVersionRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>By default, this value is <code>false</code> and deletion is stopped if the
     * resource is in use. If you set it to <code>true</code>, the resource will be
     * deleted even if the resource is in use.</p>
     */
    inline bool GetSkipResourceInUseCheck() const{ return m_skipResourceInUseCheck; }

    /**
     * <p>By default, this value is <code>false</code> and deletion is stopped if the
     * resource is in use. If you set it to <code>true</code>, the resource will be
     * deleted even if the resource is in use.</p>
     */
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }

    /**
     * <p>By default, this value is <code>false</code> and deletion is stopped if the
     * resource is in use. If you set it to <code>true</code>, the resource will be
     * deleted even if the resource is in use.</p>
     */
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }

    /**
     * <p>By default, this value is <code>false</code> and deletion is stopped if the
     * resource is in use. If you set it to <code>true</code>, the resource will be
     * deleted even if the resource is in use.</p>
     */
    inline DeleteAgentVersionRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    bool m_skipResourceInUseCheck;
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

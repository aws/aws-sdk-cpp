/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class PutUserStatusRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API PutUserStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutUserStatus"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user.</p>
     */
    inline PutUserStatusRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user.</p>
     */
    inline PutUserStatusRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user.</p>
     */
    inline PutUserStatusRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline PutUserStatusRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline PutUserStatusRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline PutUserStatusRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const{ return m_agentStatusId; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline bool AgentStatusIdHasBeenSet() const { return m_agentStatusIdHasBeenSet; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const Aws::String& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = value; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(Aws::String&& value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId = std::move(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const char* value) { m_agentStatusIdHasBeenSet = true; m_agentStatusId.assign(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline PutUserStatusRequest& WithAgentStatusId(const Aws::String& value) { SetAgentStatusId(value); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline PutUserStatusRequest& WithAgentStatusId(Aws::String&& value) { SetAgentStatusId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline PutUserStatusRequest& WithAgentStatusId(const char* value) { SetAgentStatusId(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_agentStatusId;
    bool m_agentStatusIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>DeleteAgentRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteAgentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API DeleteAgentRequest : public DataSyncRequest
  {
  public:
    DeleteAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAgent"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAgentArn() const{ return m_agentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline bool AgentArnHasBeenSet() const { return m_agentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline void SetAgentArn(const Aws::String& value) { m_agentArnHasBeenSet = true; m_agentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline void SetAgentArn(Aws::String&& value) { m_agentArnHasBeenSet = true; m_agentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline void SetAgentArn(const char* value) { m_agentArnHasBeenSet = true; m_agentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline DeleteAgentRequest& WithAgentArn(const Aws::String& value) { SetAgentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline DeleteAgentRequest& WithAgentArn(Aws::String&& value) { SetAgentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent to delete. Use the
     * <code>ListAgents</code> operation to return a list of agents for your account
     * and Amazon Web Services Region.</p>
     */
    inline DeleteAgentRequest& WithAgentArn(const char* value) { SetAgentArn(value); return *this;}

  private:

    Aws::String m_agentArn;
    bool m_agentArnHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws

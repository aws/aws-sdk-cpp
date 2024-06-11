/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AgentStatusType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class ListAgentStatusesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ListAgentStatusesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAgentStatuses"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ListAgentStatusesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ListAgentStatusesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ListAgentStatusesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAgentStatusesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAgentStatusesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAgentStatusesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAgentStatusesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available agent status types.</p>
     */
    inline const Aws::Vector<AgentStatusType>& GetAgentStatusTypes() const{ return m_agentStatusTypes; }
    inline bool AgentStatusTypesHasBeenSet() const { return m_agentStatusTypesHasBeenSet; }
    inline void SetAgentStatusTypes(const Aws::Vector<AgentStatusType>& value) { m_agentStatusTypesHasBeenSet = true; m_agentStatusTypes = value; }
    inline void SetAgentStatusTypes(Aws::Vector<AgentStatusType>&& value) { m_agentStatusTypesHasBeenSet = true; m_agentStatusTypes = std::move(value); }
    inline ListAgentStatusesRequest& WithAgentStatusTypes(const Aws::Vector<AgentStatusType>& value) { SetAgentStatusTypes(value); return *this;}
    inline ListAgentStatusesRequest& WithAgentStatusTypes(Aws::Vector<AgentStatusType>&& value) { SetAgentStatusTypes(std::move(value)); return *this;}
    inline ListAgentStatusesRequest& AddAgentStatusTypes(const AgentStatusType& value) { m_agentStatusTypesHasBeenSet = true; m_agentStatusTypes.push_back(value); return *this; }
    inline ListAgentStatusesRequest& AddAgentStatusTypes(AgentStatusType&& value) { m_agentStatusTypesHasBeenSet = true; m_agentStatusTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<AgentStatusType> m_agentStatusTypes;
    bool m_agentStatusTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

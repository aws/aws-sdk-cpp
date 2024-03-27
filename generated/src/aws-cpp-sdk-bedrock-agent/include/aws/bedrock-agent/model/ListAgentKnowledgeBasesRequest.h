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
  class ListAgentKnowledgeBasesRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API ListAgentKnowledgeBasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAgentKnowledgeBases"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent for which to return information about
     * knowledge bases associated with it.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the agent for which to return information about knowledge
     * bases associated with it.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline ListAgentKnowledgeBasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

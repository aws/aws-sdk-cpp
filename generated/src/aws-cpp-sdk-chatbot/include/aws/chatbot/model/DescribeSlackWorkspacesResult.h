/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/SlackWorkspace.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace chatbot
{
namespace Model
{
  class DescribeSlackWorkspacesResult
  {
  public:
    AWS_CHATBOT_API DescribeSlackWorkspacesResult();
    AWS_CHATBOT_API DescribeSlackWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeSlackWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline const Aws::Vector<SlackWorkspace>& GetSlackWorkspaces() const{ return m_slackWorkspaces; }

    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline void SetSlackWorkspaces(const Aws::Vector<SlackWorkspace>& value) { m_slackWorkspaces = value; }

    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline void SetSlackWorkspaces(Aws::Vector<SlackWorkspace>&& value) { m_slackWorkspaces = std::move(value); }

    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline DescribeSlackWorkspacesResult& WithSlackWorkspaces(const Aws::Vector<SlackWorkspace>& value) { SetSlackWorkspaces(value); return *this;}

    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline DescribeSlackWorkspacesResult& WithSlackWorkspaces(Aws::Vector<SlackWorkspace>&& value) { SetSlackWorkspaces(std::move(value)); return *this;}

    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline DescribeSlackWorkspacesResult& AddSlackWorkspaces(const SlackWorkspace& value) { m_slackWorkspaces.push_back(value); return *this; }

    /**
     * A list of Slack Workspaces registered with AWS Chatbot.
     */
    inline DescribeSlackWorkspacesResult& AddSlackWorkspaces(SlackWorkspace&& value) { m_slackWorkspaces.push_back(std::move(value)); return *this; }


    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSlackWorkspacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSlackWorkspacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSlackWorkspacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SlackWorkspace> m_slackWorkspaces;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws

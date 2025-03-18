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
    AWS_CHATBOT_API DescribeSlackWorkspacesResult() = default;
    AWS_CHATBOT_API DescribeSlackWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeSlackWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Slack workspaces registered with AWS Chatbot.</p>
     */
    inline const Aws::Vector<SlackWorkspace>& GetSlackWorkspaces() const { return m_slackWorkspaces; }
    template<typename SlackWorkspacesT = Aws::Vector<SlackWorkspace>>
    void SetSlackWorkspaces(SlackWorkspacesT&& value) { m_slackWorkspacesHasBeenSet = true; m_slackWorkspaces = std::forward<SlackWorkspacesT>(value); }
    template<typename SlackWorkspacesT = Aws::Vector<SlackWorkspace>>
    DescribeSlackWorkspacesResult& WithSlackWorkspaces(SlackWorkspacesT&& value) { SetSlackWorkspaces(std::forward<SlackWorkspacesT>(value)); return *this;}
    template<typename SlackWorkspacesT = SlackWorkspace>
    DescribeSlackWorkspacesResult& AddSlackWorkspaces(SlackWorkspacesT&& value) { m_slackWorkspacesHasBeenSet = true; m_slackWorkspaces.emplace_back(std::forward<SlackWorkspacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSlackWorkspacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSlackWorkspacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SlackWorkspace> m_slackWorkspaces;
    bool m_slackWorkspacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws

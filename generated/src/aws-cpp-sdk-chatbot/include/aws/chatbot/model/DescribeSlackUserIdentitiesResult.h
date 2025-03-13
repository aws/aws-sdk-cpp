/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chatbot/model/SlackUserIdentity.h>
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
  class DescribeSlackUserIdentitiesResult
  {
  public:
    AWS_CHATBOT_API DescribeSlackUserIdentitiesResult() = default;
    AWS_CHATBOT_API DescribeSlackUserIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeSlackUserIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Slack User Identities.</p>
     */
    inline const Aws::Vector<SlackUserIdentity>& GetSlackUserIdentities() const { return m_slackUserIdentities; }
    template<typename SlackUserIdentitiesT = Aws::Vector<SlackUserIdentity>>
    void SetSlackUserIdentities(SlackUserIdentitiesT&& value) { m_slackUserIdentitiesHasBeenSet = true; m_slackUserIdentities = std::forward<SlackUserIdentitiesT>(value); }
    template<typename SlackUserIdentitiesT = Aws::Vector<SlackUserIdentity>>
    DescribeSlackUserIdentitiesResult& WithSlackUserIdentities(SlackUserIdentitiesT&& value) { SetSlackUserIdentities(std::forward<SlackUserIdentitiesT>(value)); return *this;}
    template<typename SlackUserIdentitiesT = SlackUserIdentity>
    DescribeSlackUserIdentitiesResult& AddSlackUserIdentities(SlackUserIdentitiesT&& value) { m_slackUserIdentitiesHasBeenSet = true; m_slackUserIdentities.emplace_back(std::forward<SlackUserIdentitiesT>(value)); return *this; }
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
    DescribeSlackUserIdentitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSlackUserIdentitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SlackUserIdentity> m_slackUserIdentities;
    bool m_slackUserIdentitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws

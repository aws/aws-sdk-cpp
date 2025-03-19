/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/SlackChannelConfiguration.h>
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
  class DescribeSlackChannelConfigurationsResult
  {
  public:
    AWS_CHATBOT_API DescribeSlackChannelConfigurationsResult() = default;
    AWS_CHATBOT_API DescribeSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeSlackChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSlackChannelConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Slack channel configurations.</p>
     */
    inline const Aws::Vector<SlackChannelConfiguration>& GetSlackChannelConfigurations() const { return m_slackChannelConfigurations; }
    template<typename SlackChannelConfigurationsT = Aws::Vector<SlackChannelConfiguration>>
    void SetSlackChannelConfigurations(SlackChannelConfigurationsT&& value) { m_slackChannelConfigurationsHasBeenSet = true; m_slackChannelConfigurations = std::forward<SlackChannelConfigurationsT>(value); }
    template<typename SlackChannelConfigurationsT = Aws::Vector<SlackChannelConfiguration>>
    DescribeSlackChannelConfigurationsResult& WithSlackChannelConfigurations(SlackChannelConfigurationsT&& value) { SetSlackChannelConfigurations(std::forward<SlackChannelConfigurationsT>(value)); return *this;}
    template<typename SlackChannelConfigurationsT = SlackChannelConfiguration>
    DescribeSlackChannelConfigurationsResult& AddSlackChannelConfigurations(SlackChannelConfigurationsT&& value) { m_slackChannelConfigurationsHasBeenSet = true; m_slackChannelConfigurations.emplace_back(std::forward<SlackChannelConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSlackChannelConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SlackChannelConfiguration> m_slackChannelConfigurations;
    bool m_slackChannelConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws

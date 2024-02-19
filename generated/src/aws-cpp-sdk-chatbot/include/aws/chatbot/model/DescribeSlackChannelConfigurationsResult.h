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
    AWS_CHATBOT_API DescribeSlackChannelConfigurationsResult();
    AWS_CHATBOT_API DescribeSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeSlackChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeSlackChannelConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackChannelConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * An optional token returned from a prior request. Use this token for pagination
     * of results from this action. If this parameter is specified, the response
     * includes only results beyond the token, up to the value specified by MaxResults.
     */
    inline DescribeSlackChannelConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A list of Slack channel configurations.
     */
    inline const Aws::Vector<SlackChannelConfiguration>& GetSlackChannelConfigurations() const{ return m_slackChannelConfigurations; }

    /**
     * A list of Slack channel configurations.
     */
    inline void SetSlackChannelConfigurations(const Aws::Vector<SlackChannelConfiguration>& value) { m_slackChannelConfigurations = value; }

    /**
     * A list of Slack channel configurations.
     */
    inline void SetSlackChannelConfigurations(Aws::Vector<SlackChannelConfiguration>&& value) { m_slackChannelConfigurations = std::move(value); }

    /**
     * A list of Slack channel configurations.
     */
    inline DescribeSlackChannelConfigurationsResult& WithSlackChannelConfigurations(const Aws::Vector<SlackChannelConfiguration>& value) { SetSlackChannelConfigurations(value); return *this;}

    /**
     * A list of Slack channel configurations.
     */
    inline DescribeSlackChannelConfigurationsResult& WithSlackChannelConfigurations(Aws::Vector<SlackChannelConfiguration>&& value) { SetSlackChannelConfigurations(std::move(value)); return *this;}

    /**
     * A list of Slack channel configurations.
     */
    inline DescribeSlackChannelConfigurationsResult& AddSlackChannelConfigurations(const SlackChannelConfiguration& value) { m_slackChannelConfigurations.push_back(value); return *this; }

    /**
     * A list of Slack channel configurations.
     */
    inline DescribeSlackChannelConfigurationsResult& AddSlackChannelConfigurations(SlackChannelConfiguration&& value) { m_slackChannelConfigurations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSlackChannelConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSlackChannelConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSlackChannelConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<SlackChannelConfiguration> m_slackChannelConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws

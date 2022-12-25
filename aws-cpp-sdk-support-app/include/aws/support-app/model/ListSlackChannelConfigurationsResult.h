/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support-app/model/SlackChannelConfiguration.h>
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
namespace SupportApp
{
namespace Model
{
  class ListSlackChannelConfigurationsResult
  {
  public:
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult();
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline ListSlackChannelConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline ListSlackChannelConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline ListSlackChannelConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline const Aws::Vector<SlackChannelConfiguration>& GetSlackChannelConfigurations() const{ return m_slackChannelConfigurations; }

    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline void SetSlackChannelConfigurations(const Aws::Vector<SlackChannelConfiguration>& value) { m_slackChannelConfigurations = value; }

    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline void SetSlackChannelConfigurations(Aws::Vector<SlackChannelConfiguration>&& value) { m_slackChannelConfigurations = std::move(value); }

    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline ListSlackChannelConfigurationsResult& WithSlackChannelConfigurations(const Aws::Vector<SlackChannelConfiguration>& value) { SetSlackChannelConfigurations(value); return *this;}

    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline ListSlackChannelConfigurationsResult& WithSlackChannelConfigurations(Aws::Vector<SlackChannelConfiguration>&& value) { SetSlackChannelConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline ListSlackChannelConfigurationsResult& AddSlackChannelConfigurations(const SlackChannelConfiguration& value) { m_slackChannelConfigurations.push_back(value); return *this; }

    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline ListSlackChannelConfigurationsResult& AddSlackChannelConfigurations(SlackChannelConfiguration&& value) { m_slackChannelConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SlackChannelConfiguration> m_slackChannelConfigurations;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws

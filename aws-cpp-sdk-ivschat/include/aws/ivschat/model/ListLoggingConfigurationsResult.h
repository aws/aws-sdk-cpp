/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/LoggingConfigurationSummary.h>
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
namespace ivschat
{
namespace Model
{
  class ListLoggingConfigurationsResult
  {
  public:
    AWS_IVSCHAT_API ListLoggingConfigurationsResult();
    AWS_IVSCHAT_API ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API ListLoggingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline const Aws::Vector<LoggingConfigurationSummary>& GetLoggingConfigurations() const{ return m_loggingConfigurations; }

    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline void SetLoggingConfigurations(const Aws::Vector<LoggingConfigurationSummary>& value) { m_loggingConfigurations = value; }

    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline void SetLoggingConfigurations(Aws::Vector<LoggingConfigurationSummary>&& value) { m_loggingConfigurations = std::move(value); }

    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(const Aws::Vector<LoggingConfigurationSummary>& value) { SetLoggingConfigurations(value); return *this;}

    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline ListLoggingConfigurationsResult& WithLoggingConfigurations(Aws::Vector<LoggingConfigurationSummary>&& value) { SetLoggingConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(const LoggingConfigurationSummary& value) { m_loggingConfigurations.push_back(value); return *this; }

    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline ListLoggingConfigurationsResult& AddLoggingConfigurations(LoggingConfigurationSummary&& value) { m_loggingConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListLoggingConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LoggingConfigurationSummary> m_loggingConfigurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws

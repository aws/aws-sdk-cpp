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
    AWS_IVSCHAT_API ListLoggingConfigurationsResult() = default;
    AWS_IVSCHAT_API ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API ListLoggingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching logging configurations (summary information only). There
     * is only one type of destination (<code>cloudWatchLogs</code>,
     * <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline const Aws::Vector<LoggingConfigurationSummary>& GetLoggingConfigurations() const { return m_loggingConfigurations; }
    template<typename LoggingConfigurationsT = Aws::Vector<LoggingConfigurationSummary>>
    void SetLoggingConfigurations(LoggingConfigurationsT&& value) { m_loggingConfigurationsHasBeenSet = true; m_loggingConfigurations = std::forward<LoggingConfigurationsT>(value); }
    template<typename LoggingConfigurationsT = Aws::Vector<LoggingConfigurationSummary>>
    ListLoggingConfigurationsResult& WithLoggingConfigurations(LoggingConfigurationsT&& value) { SetLoggingConfigurations(std::forward<LoggingConfigurationsT>(value)); return *this;}
    template<typename LoggingConfigurationsT = LoggingConfigurationSummary>
    ListLoggingConfigurationsResult& AddLoggingConfigurations(LoggingConfigurationsT&& value) { m_loggingConfigurationsHasBeenSet = true; m_loggingConfigurations.emplace_back(std::forward<LoggingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more logging configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLoggingConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLoggingConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoggingConfigurationSummary> m_loggingConfigurations;
    bool m_loggingConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws

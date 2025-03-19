/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/MetricFilterMatchRecord.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class TestMetricFilterResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API TestMetricFilterResult() = default;
    AWS_CLOUDWATCHLOGS_API TestMetricFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API TestMetricFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The matched events.</p>
     */
    inline const Aws::Vector<MetricFilterMatchRecord>& GetMatches() const { return m_matches; }
    template<typename MatchesT = Aws::Vector<MetricFilterMatchRecord>>
    void SetMatches(MatchesT&& value) { m_matchesHasBeenSet = true; m_matches = std::forward<MatchesT>(value); }
    template<typename MatchesT = Aws::Vector<MetricFilterMatchRecord>>
    TestMetricFilterResult& WithMatches(MatchesT&& value) { SetMatches(std::forward<MatchesT>(value)); return *this;}
    template<typename MatchesT = MetricFilterMatchRecord>
    TestMetricFilterResult& AddMatches(MatchesT&& value) { m_matchesHasBeenSet = true; m_matches.emplace_back(std::forward<MatchesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestMetricFilterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricFilterMatchRecord> m_matches;
    bool m_matchesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingsStatistics.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetFindingsStatisticsResult
  {
  public:
    AWS_ACCESSANALYZER_API GetFindingsStatisticsResult() = default;
    AWS_ACCESSANALYZER_API GetFindingsStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingsStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A group of external access or unused access findings statistics.</p>
     */
    inline const Aws::Vector<FindingsStatistics>& GetFindingsStatistics() const { return m_findingsStatistics; }
    template<typename FindingsStatisticsT = Aws::Vector<FindingsStatistics>>
    void SetFindingsStatistics(FindingsStatisticsT&& value) { m_findingsStatisticsHasBeenSet = true; m_findingsStatistics = std::forward<FindingsStatisticsT>(value); }
    template<typename FindingsStatisticsT = Aws::Vector<FindingsStatistics>>
    GetFindingsStatisticsResult& WithFindingsStatistics(FindingsStatisticsT&& value) { SetFindingsStatistics(std::forward<FindingsStatisticsT>(value)); return *this;}
    template<typename FindingsStatisticsT = FindingsStatistics>
    GetFindingsStatisticsResult& AddFindingsStatistics(FindingsStatisticsT&& value) { m_findingsStatisticsHasBeenSet = true; m_findingsStatistics.emplace_back(std::forward<FindingsStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the retrieval of the findings statistics was last updated.
     * If the findings statistics have not been previously retrieved for the specified
     * analyzer, this field will not be populated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetFindingsStatisticsResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingsStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingsStatistics> m_findingsStatistics;
    bool m_findingsStatisticsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

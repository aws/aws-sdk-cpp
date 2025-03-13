/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/FindingsReportSummary.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the ListFindingsReportsResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListFindingsReportsResponse">AWS
   * API Reference</a></p>
   */
  class ListFindingsReportsResult
  {
  public:
    AWS_CODEGURUPROFILER_API ListFindingsReportsResult() = default;
    AWS_CODEGURUPROFILER_API ListFindingsReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ListFindingsReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline const Aws::Vector<FindingsReportSummary>& GetFindingsReportSummaries() const { return m_findingsReportSummaries; }
    template<typename FindingsReportSummariesT = Aws::Vector<FindingsReportSummary>>
    void SetFindingsReportSummaries(FindingsReportSummariesT&& value) { m_findingsReportSummariesHasBeenSet = true; m_findingsReportSummaries = std::forward<FindingsReportSummariesT>(value); }
    template<typename FindingsReportSummariesT = Aws::Vector<FindingsReportSummary>>
    ListFindingsReportsResult& WithFindingsReportSummaries(FindingsReportSummariesT&& value) { SetFindingsReportSummaries(std::forward<FindingsReportSummariesT>(value)); return *this;}
    template<typename FindingsReportSummariesT = FindingsReportSummary>
    ListFindingsReportsResult& AddFindingsReportSummaries(FindingsReportSummariesT&& value) { m_findingsReportSummariesHasBeenSet = true; m_findingsReportSummaries.emplace_back(std::forward<FindingsReportSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingsReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFindingsReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingsReportSummary> m_findingsReportSummaries;
    bool m_findingsReportSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

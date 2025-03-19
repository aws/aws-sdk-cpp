/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The structure representing the
   * GetFindingsReportAccountSummaryResponse.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetFindingsReportAccountSummaryResponse">AWS
   * API Reference</a></p>
   */
  class GetFindingsReportAccountSummaryResult
  {
  public:
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryResult() = default;
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFindingsReportAccountSummaryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline const Aws::Vector<FindingsReportSummary>& GetReportSummaries() const { return m_reportSummaries; }
    template<typename ReportSummariesT = Aws::Vector<FindingsReportSummary>>
    void SetReportSummaries(ReportSummariesT&& value) { m_reportSummariesHasBeenSet = true; m_reportSummaries = std::forward<ReportSummariesT>(value); }
    template<typename ReportSummariesT = Aws::Vector<FindingsReportSummary>>
    GetFindingsReportAccountSummaryResult& WithReportSummaries(ReportSummariesT&& value) { SetReportSummaries(std::forward<ReportSummariesT>(value)); return *this;}
    template<typename ReportSummariesT = FindingsReportSummary>
    GetFindingsReportAccountSummaryResult& AddReportSummaries(ReportSummariesT&& value) { m_reportSummariesHasBeenSet = true; m_reportSummaries.emplace_back(std::forward<ReportSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingsReportAccountSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FindingsReportSummary> m_reportSummaries;
    bool m_reportSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

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
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryResult();
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline GetFindingsReportAccountSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline GetFindingsReportAccountSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetFindingsReportAccountSummary</code> request. When the results of a
     * <code>GetFindingsReportAccountSummary</code> request exceed
     * <code>maxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline GetFindingsReportAccountSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline const Aws::Vector<FindingsReportSummary>& GetReportSummaries() const{ return m_reportSummaries; }

    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline void SetReportSummaries(const Aws::Vector<FindingsReportSummary>& value) { m_reportSummaries = value; }

    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline void SetReportSummaries(Aws::Vector<FindingsReportSummary>&& value) { m_reportSummaries = std::move(value); }

    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline GetFindingsReportAccountSummaryResult& WithReportSummaries(const Aws::Vector<FindingsReportSummary>& value) { SetReportSummaries(value); return *this;}

    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline GetFindingsReportAccountSummaryResult& WithReportSummaries(Aws::Vector<FindingsReportSummary>&& value) { SetReportSummaries(std::move(value)); return *this;}

    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline GetFindingsReportAccountSummaryResult& AddReportSummaries(const FindingsReportSummary& value) { m_reportSummaries.push_back(value); return *this; }

    /**
     * <p>The return list of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
     * <code>FindingsReportSummary</code> </a> objects taht contain summaries of
     * analysis results for all profiling groups in your AWS account.</p>
     */
    inline GetFindingsReportAccountSummaryResult& AddReportSummaries(FindingsReportSummary&& value) { m_reportSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FindingsReportSummary> m_reportSummaries;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

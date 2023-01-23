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
    AWS_CODEGURUPROFILER_API ListFindingsReportsResult();
    AWS_CODEGURUPROFILER_API ListFindingsReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ListFindingsReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline const Aws::Vector<FindingsReportSummary>& GetFindingsReportSummaries() const{ return m_findingsReportSummaries; }

    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline void SetFindingsReportSummaries(const Aws::Vector<FindingsReportSummary>& value) { m_findingsReportSummaries = value; }

    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline void SetFindingsReportSummaries(Aws::Vector<FindingsReportSummary>&& value) { m_findingsReportSummaries = std::move(value); }

    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline ListFindingsReportsResult& WithFindingsReportSummaries(const Aws::Vector<FindingsReportSummary>& value) { SetFindingsReportSummaries(value); return *this;}

    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline ListFindingsReportsResult& WithFindingsReportSummaries(Aws::Vector<FindingsReportSummary>&& value) { SetFindingsReportSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline ListFindingsReportsResult& AddFindingsReportSummaries(const FindingsReportSummary& value) { m_findingsReportSummaries.push_back(value); return *this; }

    /**
     * <p>The list of analysis results summaries.</p>
     */
    inline ListFindingsReportsResult& AddFindingsReportSummaries(FindingsReportSummary&& value) { m_findingsReportSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListFindingsReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListFindingsReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListFindingsReports</code> request. When the results of a
     * <code>ListFindingsReports</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListFindingsReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FindingsReportSummary> m_findingsReportSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

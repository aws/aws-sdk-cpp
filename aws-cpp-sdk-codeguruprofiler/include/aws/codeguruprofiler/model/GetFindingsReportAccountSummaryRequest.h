/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the
   * GetFindingsReportAccountSummaryRequest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetFindingsReportAccountSummaryRequest">AWS
   * API Reference</a></p>
   */
  class GetFindingsReportAccountSummaryRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API GetFindingsReportAccountSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingsReportAccountSummary"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A <code>Boolean</code> value indicating whether to only return reports from
     * daily profiles. If set to <code>True</code>, only analysis data from daily
     * profiles is returned. If set to <code>False</code>, analysis data is returned
     * from smaller time windows (for example, one hour).</p>
     */
    inline bool GetDailyReportsOnly() const{ return m_dailyReportsOnly; }

    /**
     * <p>A <code>Boolean</code> value indicating whether to only return reports from
     * daily profiles. If set to <code>True</code>, only analysis data from daily
     * profiles is returned. If set to <code>False</code>, analysis data is returned
     * from smaller time windows (for example, one hour).</p>
     */
    inline bool DailyReportsOnlyHasBeenSet() const { return m_dailyReportsOnlyHasBeenSet; }

    /**
     * <p>A <code>Boolean</code> value indicating whether to only return reports from
     * daily profiles. If set to <code>True</code>, only analysis data from daily
     * profiles is returned. If set to <code>False</code>, analysis data is returned
     * from smaller time windows (for example, one hour).</p>
     */
    inline void SetDailyReportsOnly(bool value) { m_dailyReportsOnlyHasBeenSet = true; m_dailyReportsOnly = value; }

    /**
     * <p>A <code>Boolean</code> value indicating whether to only return reports from
     * daily profiles. If set to <code>True</code>, only analysis data from daily
     * profiles is returned. If set to <code>False</code>, analysis data is returned
     * from smaller time windows (for example, one hour).</p>
     */
    inline GetFindingsReportAccountSummaryRequest& WithDailyReportsOnly(bool value) { SetDailyReportsOnly(value); return *this;}


    /**
     * <p>The maximum number of results returned by <code>
     * GetFindingsReportAccountSummary</code> in paginated output. When this parameter
     * is used, <code>GetFindingsReportAccountSummary</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another
     * <code>GetFindingsReportAccountSummary</code> request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results returned by <code>
     * GetFindingsReportAccountSummary</code> in paginated output. When this parameter
     * is used, <code>GetFindingsReportAccountSummary</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another
     * <code>GetFindingsReportAccountSummary</code> request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results returned by <code>
     * GetFindingsReportAccountSummary</code> in paginated output. When this parameter
     * is used, <code>GetFindingsReportAccountSummary</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another
     * <code>GetFindingsReportAccountSummary</code> request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results returned by <code>
     * GetFindingsReportAccountSummary</code> in paginated output. When this parameter
     * is used, <code>GetFindingsReportAccountSummary</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another
     * <code>GetFindingsReportAccountSummary</code> request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline GetFindingsReportAccountSummaryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline GetFindingsReportAccountSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline GetFindingsReportAccountSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>GetFindingsReportAccountSummary</code> request where
     * <code>maxResults</code> was used and the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. </p>  <p>This token should be
     * treated as an opaque identifier that is only used to retrieve the next items in
     * a list and not for other programmatic purposes.</p> 
     */
    inline GetFindingsReportAccountSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dailyReportsOnly;
    bool m_dailyReportsOnlyHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

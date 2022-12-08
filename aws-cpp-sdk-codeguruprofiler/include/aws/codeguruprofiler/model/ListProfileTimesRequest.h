/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/OrderBy.h>
#include <aws/codeguruprofiler/model/AggregationPeriod.h>
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
   * <p>The structure representing the listProfileTimesRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimesRequest">AWS
   * API Reference</a></p>
   */
  class ListProfileTimesRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API ListProfileTimesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfileTimes"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The end time of the time range from which to list the profiles.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the time range from which to list the profiles.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the time range from which to list the profiles.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the time range from which to list the profiles.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the time range from which to list the profiles.</p>
     */
    inline ListProfileTimesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the time range from which to list the profiles.</p>
     */
    inline ListProfileTimesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The maximum number of profile time results returned by
     * <code>ListProfileTimes</code> in paginated output. When this parameter is used,
     * <code>ListProfileTimes</code> only returns <code>maxResults</code> results in a
     * single page with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListProfileTimes</code> request with the returned <code>nextToken</code>
     * value. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of profile time results returned by
     * <code>ListProfileTimes</code> in paginated output. When this parameter is used,
     * <code>ListProfileTimes</code> only returns <code>maxResults</code> results in a
     * single page with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListProfileTimes</code> request with the returned <code>nextToken</code>
     * value. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of profile time results returned by
     * <code>ListProfileTimes</code> in paginated output. When this parameter is used,
     * <code>ListProfileTimes</code> only returns <code>maxResults</code> results in a
     * single page with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListProfileTimes</code> request with the returned <code>nextToken</code>
     * value. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of profile time results returned by
     * <code>ListProfileTimes</code> in paginated output. When this parameter is used,
     * <code>ListProfileTimes</code> only returns <code>maxResults</code> results in a
     * single page with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListProfileTimes</code> request with the returned <code>nextToken</code>
     * value. </p>
     */
    inline ListProfileTimesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListProfileTimesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListProfileTimesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListProfileTimes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. </p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListProfileTimesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The order (ascending or descending by start time of the profile) to use when
     * listing profiles. Defaults to <code>TIMESTAMP_DESCENDING</code>. </p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The order (ascending or descending by start time of the profile) to use when
     * listing profiles. Defaults to <code>TIMESTAMP_DESCENDING</code>. </p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The order (ascending or descending by start time of the profile) to use when
     * listing profiles. Defaults to <code>TIMESTAMP_DESCENDING</code>. </p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The order (ascending or descending by start time of the profile) to use when
     * listing profiles. Defaults to <code>TIMESTAMP_DESCENDING</code>. </p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The order (ascending or descending by start time of the profile) to use when
     * listing profiles. Defaults to <code>TIMESTAMP_DESCENDING</code>. </p>
     */
    inline ListProfileTimesRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The order (ascending or descending by start time of the profile) to use when
     * listing profiles. Defaults to <code>TIMESTAMP_DESCENDING</code>. </p>
     */
    inline ListProfileTimesRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}


    /**
     * <p> The aggregation period. This specifies the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. There
     * are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li>
     * <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline const AggregationPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p> The aggregation period. This specifies the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. There
     * are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li>
     * <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p> The aggregation period. This specifies the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. There
     * are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li>
     * <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline void SetPeriod(const AggregationPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p> The aggregation period. This specifies the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. There
     * are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li>
     * <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline void SetPeriod(AggregationPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p> The aggregation period. This specifies the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. There
     * are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li>
     * <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline ListProfileTimesRequest& WithPeriod(const AggregationPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p> The aggregation period. This specifies the period during which an
     * aggregation profile collects posted agent profiles for a profiling group. There
     * are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li>
     * <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline ListProfileTimesRequest& WithPeriod(AggregationPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>The name of the profiling group.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline ListProfileTimesRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline ListProfileTimesRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline ListProfileTimesRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>The start time of the time range from which to list the profiles.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the time range from which to list the profiles.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the time range from which to list the profiles.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the time range from which to list the profiles.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the time range from which to list the profiles.</p>
     */
    inline ListProfileTimesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the time range from which to list the profiles.</p>
     */
    inline ListProfileTimesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;

    AggregationPeriod m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

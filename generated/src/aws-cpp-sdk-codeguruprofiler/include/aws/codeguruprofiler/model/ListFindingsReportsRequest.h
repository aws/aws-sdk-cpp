/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The structure representing the ListFindingsReportsRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListFindingsReportsRequest">AWS
   * API Reference</a></p>
   */
  class ListFindingsReportsRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API ListFindingsReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindingsReports"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A <code>Boolean</code> value indicating whether to only return reports from
     * daily profiles. If set to <code>True</code>, only analysis data from daily
     * profiles is returned. If set to <code>False</code>, analysis data is returned
     * from smaller time windows (for example, one hour).</p>
     */
    inline bool GetDailyReportsOnly() const{ return m_dailyReportsOnly; }
    inline bool DailyReportsOnlyHasBeenSet() const { return m_dailyReportsOnlyHasBeenSet; }
    inline void SetDailyReportsOnly(bool value) { m_dailyReportsOnlyHasBeenSet = true; m_dailyReportsOnly = value; }
    inline ListFindingsReportsRequest& WithDailyReportsOnly(bool value) { SetDailyReportsOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListFindingsReportsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListFindingsReportsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of report results returned by
     * <code>ListFindingsReports</code> in paginated output. When this parameter is
     * used, <code>ListFindingsReports</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListFindingsReports</code> request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFindingsReportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListFindingsReportsRequest</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFindingsReportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingsReportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingsReportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group from which to search for analysis data.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }
    inline ListFindingsReportsRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}
    inline ListFindingsReportsRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}
    inline ListFindingsReportsRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the profile to get analysis data about. You must specify
     * <code>startTime</code> and <code>endTime</code>. This is specified using the ISO
     * 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past
     * June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListFindingsReportsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListFindingsReportsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}
  private:

    bool m_dailyReportsOnly;
    bool m_dailyReportsOnlyHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

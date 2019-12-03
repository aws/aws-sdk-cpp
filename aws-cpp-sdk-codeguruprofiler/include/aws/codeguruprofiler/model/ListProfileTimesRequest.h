/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Request for ListProfileTimes operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API ListProfileTimesRequest : public CodeGuruProfilerRequest
  {
  public:
    ListProfileTimesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfileTimes"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The end time of the time range to list profiles until.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the time range to list profiles until.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the time range to list profiles until.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the time range to list profiles until.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the time range to list profiles until.</p>
     */
    inline ListProfileTimesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the time range to list profiles until.</p>
     */
    inline ListProfileTimesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListProfileTimesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListProfileTimesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfileTimesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfileTimesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The order (ascending or descending by start time of the profile) to list the
     * profiles by. Defaults to TIMESTAMP_DESCENDING.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The order (ascending or descending by start time of the profile) to list the
     * profiles by. Defaults to TIMESTAMP_DESCENDING.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The order (ascending or descending by start time of the profile) to list the
     * profiles by. Defaults to TIMESTAMP_DESCENDING.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The order (ascending or descending by start time of the profile) to list the
     * profiles by. Defaults to TIMESTAMP_DESCENDING.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The order (ascending or descending by start time of the profile) to list the
     * profiles by. Defaults to TIMESTAMP_DESCENDING.</p>
     */
    inline ListProfileTimesRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The order (ascending or descending by start time of the profile) to list the
     * profiles by. Defaults to TIMESTAMP_DESCENDING.</p>
     */
    inline ListProfileTimesRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}


    /**
     * <p>The aggregation period to list the profiles for.</p>
     */
    inline const AggregationPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>The aggregation period to list the profiles for.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The aggregation period to list the profiles for.</p>
     */
    inline void SetPeriod(const AggregationPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The aggregation period to list the profiles for.</p>
     */
    inline void SetPeriod(AggregationPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The aggregation period to list the profiles for.</p>
     */
    inline ListProfileTimesRequest& WithPeriod(const AggregationPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>The aggregation period to list the profiles for.</p>
     */
    inline ListProfileTimesRequest& WithPeriod(AggregationPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    
    inline ListProfileTimesRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    
    inline ListProfileTimesRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    
    inline ListProfileTimesRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>The start time of the time range to list the profiles from.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the time range to list the profiles from.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the time range to list the profiles from.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the time range to list the profiles from.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the time range to list the profiles from.</p>
     */
    inline ListProfileTimesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the time range to list the profiles from.</p>
     */
    inline ListProfileTimesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet;

    AggregationPeriod m_period;
    bool m_periodHasBeenSet;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws

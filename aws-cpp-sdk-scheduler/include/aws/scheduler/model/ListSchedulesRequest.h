/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Scheduler
{
namespace Model
{

  /**
   */
  class ListSchedulesRequest : public SchedulerRequest
  {
  public:
    AWS_SCHEDULER_API ListSchedulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchedules"; }

    AWS_SCHEDULER_API Aws::String SerializePayload() const override;

    AWS_SCHEDULER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline ListSchedulesRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline ListSchedulesRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>If specified, only lists the schedules whose associated schedule group
     * matches the given filter.</p>
     */
    inline ListSchedulesRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline ListSchedulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline ListSchedulesRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline ListSchedulesRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Schedule name prefix to return the filtered list of resources.</p>
     */
    inline ListSchedulesRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListSchedulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListSchedulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListSchedulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>If specified, only lists the schedules whose current state matches the given
     * filter.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }

    /**
     * <p>If specified, only lists the schedules whose current state matches the given
     * filter.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>If specified, only lists the schedules whose current state matches the given
     * filter.</p>
     */
    inline void SetState(const ScheduleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>If specified, only lists the schedules whose current state matches the given
     * filter.</p>
     */
    inline void SetState(ScheduleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>If specified, only lists the schedules whose current state matches the given
     * filter.</p>
     */
    inline ListSchedulesRequest& WithState(const ScheduleState& value) { SetState(value); return *this;}

    /**
     * <p>If specified, only lists the schedules whose current state matches the given
     * filter.</p>
     */
    inline ListSchedulesRequest& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScheduleState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws

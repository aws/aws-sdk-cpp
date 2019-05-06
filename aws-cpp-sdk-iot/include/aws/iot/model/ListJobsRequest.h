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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/JobStatus.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API ListJobsRequest : public IoTRequest
  {
  public:
    ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline ListJobsRequest& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline ListJobsRequest& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>
     */
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>
     */
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>
     */
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>
     */
    inline ListJobsRequest& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}

    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>
     */
    inline ListJobsRequest& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per request.</p>
     */
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline ListJobsRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline ListJobsRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline ListJobsRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline bool ThingGroupIdHasBeenSet() const { return m_thingGroupIdHasBeenSet; }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = value; }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::move(value); }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline void SetThingGroupId(const char* value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId.assign(value); }

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline ListJobsRequest& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline ListJobsRequest& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}

    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline ListJobsRequest& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}

  private:

    JobStatus m_status;
    bool m_statusHasBeenSet;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet;

    Aws::String m_thingGroupId;
    bool m_thingGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

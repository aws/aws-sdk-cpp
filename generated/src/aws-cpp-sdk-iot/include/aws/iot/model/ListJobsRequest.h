﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListJobsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>An optional filter that lets you search for jobs that have the specified
     * status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListJobsRequest& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline ListJobsRequest& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group. </p>  <p>We recommend that you use continuous
     * jobs instead of snapshot jobs for dynamic thing group targets. By using
     * continuous jobs, devices that join the group receive the job execution even
     * after the job has been created.</p> 
     */
    inline const TargetSelection& GetTargetSelection() const{ return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(const TargetSelection& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline void SetTargetSelection(TargetSelection&& value) { m_targetSelectionHasBeenSet = true; m_targetSelection = std::move(value); }
    inline ListJobsRequest& WithTargetSelection(const TargetSelection& value) { SetTargetSelection(value); return *this;}
    inline ListJobsRequest& WithTargetSelection(TargetSelection&& value) { SetTargetSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }
    inline ListJobsRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}
    inline ListJobsRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}
    inline ListJobsRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that limits the returned jobs to those for the specified group.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }
    inline bool ThingGroupIdHasBeenSet() const { return m_thingGroupIdHasBeenSet; }
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = value; }
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::move(value); }
    inline void SetThingGroupId(const char* value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId.assign(value); }
    inline ListJobsRequest& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}
    inline ListJobsRequest& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}
    inline ListJobsRequest& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace used to indicate that a job is a customer-managed job.</p>
     * <p>When you specify a value for this parameter, Amazon Web Services IoT Core
     * sends jobs notifications to MQTT topics that contain the value in the following
     * format.</p> <p>
     * <code>$aws/things/<i>THING_NAME</i>/jobs/<i>JOB_ID</i>/notify-namespace-<i>NAMESPACE_ID</i>/</code>
     * </p>  <p>The <code>namespaceId</code> feature is only supported by IoT
     * Greengrass at this time. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/setting-up.html">Setting
     * up IoT Greengrass core devices.</a> </p> 
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }
    inline ListJobsRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}
    inline ListJobsRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}
    inline ListJobsRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}
    ///@}
  private:

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    TargetSelection m_targetSelection;
    bool m_targetSelectionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    Aws::String m_thingGroupId;
    bool m_thingGroupIdHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class ListDetectMitigationActionsExecutionsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListDetectMitigationActionsExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDetectMitigationActionsExecutions"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline const Aws::String& GetViolationId() const{ return m_violationId; }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline void SetViolationId(const Aws::String& value) { m_violationIdHasBeenSet = true; m_violationId = value; }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline void SetViolationId(Aws::String&& value) { m_violationIdHasBeenSet = true; m_violationId = std::move(value); }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline void SetViolationId(const char* value) { m_violationIdHasBeenSet = true; m_violationId.assign(value); }

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithViolationId(const Aws::String& value) { SetViolationId(value); return *this;}

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithViolationId(Aws::String&& value) { SetViolationId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the violation. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithViolationId(const char* value) { SetViolationId(value); return *this;}


    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p> The name of the thing whose mitigation actions are listed. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p> A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The end of the time period for which ML Detect mitigation actions executions
     * are returned. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end of the time period for which ML Detect mitigation actions executions
     * are returned. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end of the time period for which ML Detect mitigation actions executions
     * are returned. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end of the time period for which ML Detect mitigation actions executions
     * are returned. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end of the time period for which ML Detect mitigation actions executions
     * are returned. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end of the time period for which ML Detect mitigation actions executions
     * are returned. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token for the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. </p>
     */
    inline ListDetectMitigationActionsExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_violationId;
    bool m_violationIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

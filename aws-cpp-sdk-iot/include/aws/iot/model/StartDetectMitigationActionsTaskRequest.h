/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DetectMitigationActionsTaskTarget.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ViolationEventOccurrenceRange.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class StartDetectMitigationActionsTaskRequest : public IoTRequest
  {
  public:
    AWS_IOT_API StartDetectMitigationActionsTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDetectMitigationActionsTask"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


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
    inline StartDetectMitigationActionsTaskRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline const DetectMitigationActionsTaskTarget& GetTarget() const{ return m_target; }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline void SetTarget(const DetectMitigationActionsTaskTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline void SetTarget(DetectMitigationActionsTaskTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithTarget(const DetectMitigationActionsTaskTarget& value) { SetTarget(value); return *this;}

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithTarget(DetectMitigationActionsTaskTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }


    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline const ViolationEventOccurrenceRange& GetViolationEventOccurrenceRange() const{ return m_violationEventOccurrenceRange; }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline bool ViolationEventOccurrenceRangeHasBeenSet() const { return m_violationEventOccurrenceRangeHasBeenSet; }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline void SetViolationEventOccurrenceRange(const ViolationEventOccurrenceRange& value) { m_violationEventOccurrenceRangeHasBeenSet = true; m_violationEventOccurrenceRange = value; }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline void SetViolationEventOccurrenceRange(ViolationEventOccurrenceRange&& value) { m_violationEventOccurrenceRangeHasBeenSet = true; m_violationEventOccurrenceRange = std::move(value); }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithViolationEventOccurrenceRange(const ViolationEventOccurrenceRange& value) { SetViolationEventOccurrenceRange(value); return *this;}

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithViolationEventOccurrenceRange(ViolationEventOccurrenceRange&& value) { SetViolationEventOccurrenceRange(std::move(value)); return *this;}


    /**
     * <p> Specifies to list only active violations. </p>
     */
    inline bool GetIncludeOnlyActiveViolations() const{ return m_includeOnlyActiveViolations; }

    /**
     * <p> Specifies to list only active violations. </p>
     */
    inline bool IncludeOnlyActiveViolationsHasBeenSet() const { return m_includeOnlyActiveViolationsHasBeenSet; }

    /**
     * <p> Specifies to list only active violations. </p>
     */
    inline void SetIncludeOnlyActiveViolations(bool value) { m_includeOnlyActiveViolationsHasBeenSet = true; m_includeOnlyActiveViolations = value; }

    /**
     * <p> Specifies to list only active violations. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithIncludeOnlyActiveViolations(bool value) { SetIncludeOnlyActiveViolations(value); return *this;}


    /**
     * <p> Specifies to include suppressed alerts. </p>
     */
    inline bool GetIncludeSuppressedAlerts() const{ return m_includeSuppressedAlerts; }

    /**
     * <p> Specifies to include suppressed alerts. </p>
     */
    inline bool IncludeSuppressedAlertsHasBeenSet() const { return m_includeSuppressedAlertsHasBeenSet; }

    /**
     * <p> Specifies to include suppressed alerts. </p>
     */
    inline void SetIncludeSuppressedAlerts(bool value) { m_includeSuppressedAlertsHasBeenSet = true; m_includeSuppressedAlerts = value; }

    /**
     * <p> Specifies to include suppressed alerts. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithIncludeSuppressedAlerts(bool value) { SetIncludeSuppressedAlerts(value); return *this;}


    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline StartDetectMitigationActionsTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    DetectMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    ViolationEventOccurrenceRange m_violationEventOccurrenceRange;
    bool m_violationEventOccurrenceRangeHasBeenSet = false;

    bool m_includeOnlyActiveViolations;
    bool m_includeOnlyActiveViolationsHasBeenSet = false;

    bool m_includeSuppressedAlerts;
    bool m_includeSuppressedAlertsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

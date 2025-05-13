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
    AWS_IOT_API StartDetectMitigationActionsTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDetectMitigationActionsTask"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    StartDetectMitigationActionsTaskRequest& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline const DetectMitigationActionsTaskTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = DetectMitigationActionsTaskTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = DetectMitigationActionsTaskTarget>
    StartDetectMitigationActionsTaskRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The actions to be performed when a device has unexpected behavior. </p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    StartDetectMitigationActionsTaskRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Aws::String>
    StartDetectMitigationActionsTaskRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline const ViolationEventOccurrenceRange& GetViolationEventOccurrenceRange() const { return m_violationEventOccurrenceRange; }
    inline bool ViolationEventOccurrenceRangeHasBeenSet() const { return m_violationEventOccurrenceRangeHasBeenSet; }
    template<typename ViolationEventOccurrenceRangeT = ViolationEventOccurrenceRange>
    void SetViolationEventOccurrenceRange(ViolationEventOccurrenceRangeT&& value) { m_violationEventOccurrenceRangeHasBeenSet = true; m_violationEventOccurrenceRange = std::forward<ViolationEventOccurrenceRangeT>(value); }
    template<typename ViolationEventOccurrenceRangeT = ViolationEventOccurrenceRange>
    StartDetectMitigationActionsTaskRequest& WithViolationEventOccurrenceRange(ViolationEventOccurrenceRangeT&& value) { SetViolationEventOccurrenceRange(std::forward<ViolationEventOccurrenceRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies to list only active violations. </p>
     */
    inline bool GetIncludeOnlyActiveViolations() const { return m_includeOnlyActiveViolations; }
    inline bool IncludeOnlyActiveViolationsHasBeenSet() const { return m_includeOnlyActiveViolationsHasBeenSet; }
    inline void SetIncludeOnlyActiveViolations(bool value) { m_includeOnlyActiveViolationsHasBeenSet = true; m_includeOnlyActiveViolations = value; }
    inline StartDetectMitigationActionsTaskRequest& WithIncludeOnlyActiveViolations(bool value) { SetIncludeOnlyActiveViolations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies to include suppressed alerts. </p>
     */
    inline bool GetIncludeSuppressedAlerts() const { return m_includeSuppressedAlerts; }
    inline bool IncludeSuppressedAlertsHasBeenSet() const { return m_includeSuppressedAlertsHasBeenSet; }
    inline void SetIncludeSuppressedAlerts(bool value) { m_includeSuppressedAlertsHasBeenSet = true; m_includeSuppressedAlerts = value; }
    inline StartDetectMitigationActionsTaskRequest& WithIncludeSuppressedAlerts(bool value) { SetIncludeSuppressedAlerts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Each mitigation action task must have a unique client request token. If you
     * try to create a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, Amazon Web Services SDKs will
     * automatically generate a unique client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartDetectMitigationActionsTaskRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    DetectMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    ViolationEventOccurrenceRange m_violationEventOccurrenceRange;
    bool m_violationEventOccurrenceRangeHasBeenSet = false;

    bool m_includeOnlyActiveViolations{false};
    bool m_includeOnlyActiveViolationsHasBeenSet = false;

    bool m_includeSuppressedAlerts{false};
    bool m_includeSuppressedAlertsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

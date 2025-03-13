/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TargetStatus.h>
#include <aws/codedeploy/model/LifecycleEvent.h>
#include <aws/codedeploy/model/ECSTaskSet.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Information about the target of an Amazon ECS deployment. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ECSTarget">AWS
   * API Reference</a></p>
   */
  class ECSTarget
  {
  public:
    AWS_CODEDEPLOY_API ECSTarget() = default;
    AWS_CODEDEPLOY_API ECSTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ECSTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    ECSTarget& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    ECSTarget& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    ECSTarget& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ECSTarget& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const { return m_lifecycleEvents; }
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    void SetLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::forward<LifecycleEventsT>(value); }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    ECSTarget& WithLifecycleEvents(LifecycleEventsT&& value) { SetLifecycleEvents(std::forward<LifecycleEventsT>(value)); return *this;}
    template<typename LifecycleEventsT = LifecycleEvent>
    ECSTarget& AddLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.emplace_back(std::forward<LifecycleEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline TargetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ECSTarget& WithStatus(TargetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline const Aws::Vector<ECSTaskSet>& GetTaskSetsInfo() const { return m_taskSetsInfo; }
    inline bool TaskSetsInfoHasBeenSet() const { return m_taskSetsInfoHasBeenSet; }
    template<typename TaskSetsInfoT = Aws::Vector<ECSTaskSet>>
    void SetTaskSetsInfo(TaskSetsInfoT&& value) { m_taskSetsInfoHasBeenSet = true; m_taskSetsInfo = std::forward<TaskSetsInfoT>(value); }
    template<typename TaskSetsInfoT = Aws::Vector<ECSTaskSet>>
    ECSTarget& WithTaskSetsInfo(TaskSetsInfoT&& value) { SetTaskSetsInfo(std::forward<TaskSetsInfoT>(value)); return *this;}
    template<typename TaskSetsInfoT = ECSTaskSet>
    ECSTarget& AddTaskSetsInfo(TaskSetsInfoT&& value) { m_taskSetsInfoHasBeenSet = true; m_taskSetsInfo.emplace_back(std::forward<TaskSetsInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet = false;

    TargetStatus m_status{TargetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ECSTaskSet> m_taskSetsInfo;
    bool m_taskSetsInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

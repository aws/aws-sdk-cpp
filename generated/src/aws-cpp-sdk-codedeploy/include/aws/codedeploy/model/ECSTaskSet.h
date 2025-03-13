/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TargetGroupInfo.h>
#include <aws/codedeploy/model/TargetLabel.h>
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
   * <p> Information about a set of Amazon ECS tasks in an CodeDeploy deployment. An
   * Amazon ECS task set includes details such as the desired number of tasks, how
   * many tasks are running, and whether the task set serves production traffic. An
   * CodeDeploy application that uses the Amazon ECS compute platform deploys a
   * containerized application in an Amazon ECS service as a task set. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ECSTaskSet">AWS
   * API Reference</a></p>
   */
  class ECSTaskSet
  {
  public:
    AWS_CODEDEPLOY_API ECSTaskSet() = default;
    AWS_CODEDEPLOY_API ECSTaskSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ECSTaskSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline const Aws::String& GetIdentifer() const { return m_identifer; }
    inline bool IdentiferHasBeenSet() const { return m_identiferHasBeenSet; }
    template<typename IdentiferT = Aws::String>
    void SetIdentifer(IdentiferT&& value) { m_identiferHasBeenSet = true; m_identifer = std::forward<IdentiferT>(value); }
    template<typename IdentiferT = Aws::String>
    ECSTaskSet& WithIdentifer(IdentiferT&& value) { SetIdentifer(std::forward<IdentiferT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of tasks in a task set. During a deployment that uses the Amazon
     * ECS compute type, CodeDeploy instructs Amazon ECS to create a new task set and
     * uses this value to determine how many tasks to create. After the updated task
     * set is created, CodeDeploy shifts traffic to the new task set. </p>
     */
    inline long long GetDesiredCount() const { return m_desiredCount; }
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }
    inline void SetDesiredCount(long long value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }
    inline ECSTaskSet& WithDesiredCount(long long value) { SetDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of tasks in the task set that are in the <code>PENDING</code>
     * status during an Amazon ECS deployment. A task in the <code>PENDING</code> state
     * is preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time, or when it is
     * restarted after being in the <code>STOPPED</code> state. </p>
     */
    inline long long GetPendingCount() const { return m_pendingCount; }
    inline bool PendingCountHasBeenSet() const { return m_pendingCountHasBeenSet; }
    inline void SetPendingCount(long long value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }
    inline ECSTaskSet& WithPendingCount(long long value) { SetPendingCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during an Amazon ECS deployment. A task in the <code>RUNNING</code> state
     * is running and ready for use. </p>
     */
    inline long long GetRunningCount() const { return m_runningCount; }
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }
    inline void SetRunningCount(long long value) { m_runningCountHasBeenSet = true; m_runningCount = value; }
    inline ECSTaskSet& WithRunningCount(long long value) { SetRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ECSTaskSet& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of traffic served by this task set. </p>
     */
    inline double GetTrafficWeight() const { return m_trafficWeight; }
    inline bool TrafficWeightHasBeenSet() const { return m_trafficWeightHasBeenSet; }
    inline void SetTrafficWeight(double value) { m_trafficWeightHasBeenSet = true; m_trafficWeight = value; }
    inline ECSTaskSet& WithTrafficWeight(double value) { SetTrafficWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline const TargetGroupInfo& GetTargetGroup() const { return m_targetGroup; }
    inline bool TargetGroupHasBeenSet() const { return m_targetGroupHasBeenSet; }
    template<typename TargetGroupT = TargetGroupInfo>
    void SetTargetGroup(TargetGroupT&& value) { m_targetGroupHasBeenSet = true; m_targetGroup = std::forward<TargetGroupT>(value); }
    template<typename TargetGroupT = TargetGroupInfo>
    ECSTaskSet& WithTargetGroup(TargetGroupT&& value) { SetTargetGroup(std::forward<TargetGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline TargetLabel GetTaskSetLabel() const { return m_taskSetLabel; }
    inline bool TaskSetLabelHasBeenSet() const { return m_taskSetLabelHasBeenSet; }
    inline void SetTaskSetLabel(TargetLabel value) { m_taskSetLabelHasBeenSet = true; m_taskSetLabel = value; }
    inline ECSTaskSet& WithTaskSetLabel(TargetLabel value) { SetTaskSetLabel(value); return *this;}
    ///@}
  private:

    Aws::String m_identifer;
    bool m_identiferHasBeenSet = false;

    long long m_desiredCount{0};
    bool m_desiredCountHasBeenSet = false;

    long long m_pendingCount{0};
    bool m_pendingCountHasBeenSet = false;

    long long m_runningCount{0};
    bool m_runningCountHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    double m_trafficWeight{0.0};
    bool m_trafficWeightHasBeenSet = false;

    TargetGroupInfo m_targetGroup;
    bool m_targetGroupHasBeenSet = false;

    TargetLabel m_taskSetLabel{TargetLabel::NOT_SET};
    bool m_taskSetLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

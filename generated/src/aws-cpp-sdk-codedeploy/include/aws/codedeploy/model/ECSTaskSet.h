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
    AWS_CODEDEPLOY_API ECSTaskSet();
    AWS_CODEDEPLOY_API ECSTaskSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API ECSTaskSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline const Aws::String& GetIdentifer() const{ return m_identifer; }

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline bool IdentiferHasBeenSet() const { return m_identiferHasBeenSet; }

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline void SetIdentifer(const Aws::String& value) { m_identiferHasBeenSet = true; m_identifer = value; }

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline void SetIdentifer(Aws::String&& value) { m_identiferHasBeenSet = true; m_identifer = std::move(value); }

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline void SetIdentifer(const char* value) { m_identiferHasBeenSet = true; m_identifer.assign(value); }

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline ECSTaskSet& WithIdentifer(const Aws::String& value) { SetIdentifer(value); return *this;}

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline ECSTaskSet& WithIdentifer(Aws::String&& value) { SetIdentifer(std::move(value)); return *this;}

    /**
     * <p> A unique ID of an <code>ECSTaskSet</code>. </p>
     */
    inline ECSTaskSet& WithIdentifer(const char* value) { SetIdentifer(value); return *this;}


    /**
     * <p> The number of tasks in a task set. During a deployment that uses the Amazon
     * ECS compute type, CodeDeploy instructs Amazon ECS to create a new task set and
     * uses this value to determine how many tasks to create. After the updated task
     * set is created, CodeDeploy shifts traffic to the new task set. </p>
     */
    inline long long GetDesiredCount() const{ return m_desiredCount; }

    /**
     * <p> The number of tasks in a task set. During a deployment that uses the Amazon
     * ECS compute type, CodeDeploy instructs Amazon ECS to create a new task set and
     * uses this value to determine how many tasks to create. After the updated task
     * set is created, CodeDeploy shifts traffic to the new task set. </p>
     */
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }

    /**
     * <p> The number of tasks in a task set. During a deployment that uses the Amazon
     * ECS compute type, CodeDeploy instructs Amazon ECS to create a new task set and
     * uses this value to determine how many tasks to create. After the updated task
     * set is created, CodeDeploy shifts traffic to the new task set. </p>
     */
    inline void SetDesiredCount(long long value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }

    /**
     * <p> The number of tasks in a task set. During a deployment that uses the Amazon
     * ECS compute type, CodeDeploy instructs Amazon ECS to create a new task set and
     * uses this value to determine how many tasks to create. After the updated task
     * set is created, CodeDeploy shifts traffic to the new task set. </p>
     */
    inline ECSTaskSet& WithDesiredCount(long long value) { SetDesiredCount(value); return *this;}


    /**
     * <p> The number of tasks in the task set that are in the <code>PENDING</code>
     * status during an Amazon ECS deployment. A task in the <code>PENDING</code> state
     * is preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time, or when it is
     * restarted after being in the <code>STOPPED</code> state. </p>
     */
    inline long long GetPendingCount() const{ return m_pendingCount; }

    /**
     * <p> The number of tasks in the task set that are in the <code>PENDING</code>
     * status during an Amazon ECS deployment. A task in the <code>PENDING</code> state
     * is preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time, or when it is
     * restarted after being in the <code>STOPPED</code> state. </p>
     */
    inline bool PendingCountHasBeenSet() const { return m_pendingCountHasBeenSet; }

    /**
     * <p> The number of tasks in the task set that are in the <code>PENDING</code>
     * status during an Amazon ECS deployment. A task in the <code>PENDING</code> state
     * is preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time, or when it is
     * restarted after being in the <code>STOPPED</code> state. </p>
     */
    inline void SetPendingCount(long long value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }

    /**
     * <p> The number of tasks in the task set that are in the <code>PENDING</code>
     * status during an Amazon ECS deployment. A task in the <code>PENDING</code> state
     * is preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time, or when it is
     * restarted after being in the <code>STOPPED</code> state. </p>
     */
    inline ECSTaskSet& WithPendingCount(long long value) { SetPendingCount(value); return *this;}


    /**
     * <p> The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during an Amazon ECS deployment. A task in the <code>RUNNING</code> state
     * is running and ready for use. </p>
     */
    inline long long GetRunningCount() const{ return m_runningCount; }

    /**
     * <p> The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during an Amazon ECS deployment. A task in the <code>RUNNING</code> state
     * is running and ready for use. </p>
     */
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }

    /**
     * <p> The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during an Amazon ECS deployment. A task in the <code>RUNNING</code> state
     * is running and ready for use. </p>
     */
    inline void SetRunningCount(long long value) { m_runningCountHasBeenSet = true; m_runningCount = value; }

    /**
     * <p> The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during an Amazon ECS deployment. A task in the <code>RUNNING</code> state
     * is running and ready for use. </p>
     */
    inline ECSTaskSet& WithRunningCount(long long value) { SetRunningCount(value); return *this;}


    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline ECSTaskSet& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline ECSTaskSet& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the task set. There are three valid task set statuses: </p>
     * <ul> <li> <p> <code>PRIMARY</code>: Indicates the task set is serving production
     * traffic. </p> </li> <li> <p> <code>ACTIVE</code>: Indicates the task set is not
     * serving production traffic. </p> </li> <li> <p> <code>DRAINING</code>: Indicates
     * the tasks in the task set are being stopped and their corresponding targets are
     * being deregistered from their target group. </p> </li> </ul>
     */
    inline ECSTaskSet& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> The percentage of traffic served by this task set. </p>
     */
    inline double GetTrafficWeight() const{ return m_trafficWeight; }

    /**
     * <p> The percentage of traffic served by this task set. </p>
     */
    inline bool TrafficWeightHasBeenSet() const { return m_trafficWeightHasBeenSet; }

    /**
     * <p> The percentage of traffic served by this task set. </p>
     */
    inline void SetTrafficWeight(double value) { m_trafficWeightHasBeenSet = true; m_trafficWeight = value; }

    /**
     * <p> The percentage of traffic served by this task set. </p>
     */
    inline ECSTaskSet& WithTrafficWeight(double value) { SetTrafficWeight(value); return *this;}


    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline const TargetGroupInfo& GetTargetGroup() const{ return m_targetGroup; }

    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline bool TargetGroupHasBeenSet() const { return m_targetGroupHasBeenSet; }

    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline void SetTargetGroup(const TargetGroupInfo& value) { m_targetGroupHasBeenSet = true; m_targetGroup = value; }

    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline void SetTargetGroup(TargetGroupInfo&& value) { m_targetGroupHasBeenSet = true; m_targetGroup = std::move(value); }

    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline ECSTaskSet& WithTargetGroup(const TargetGroupInfo& value) { SetTargetGroup(value); return *this;}

    /**
     * <p> The target group associated with the task set. The target group is used by
     * CodeDeploy to manage traffic to a task set. </p>
     */
    inline ECSTaskSet& WithTargetGroup(TargetGroupInfo&& value) { SetTargetGroup(std::move(value)); return *this;}


    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline const TargetLabel& GetTaskSetLabel() const{ return m_taskSetLabel; }

    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline bool TaskSetLabelHasBeenSet() const { return m_taskSetLabelHasBeenSet; }

    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline void SetTaskSetLabel(const TargetLabel& value) { m_taskSetLabelHasBeenSet = true; m_taskSetLabel = value; }

    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline void SetTaskSetLabel(TargetLabel&& value) { m_taskSetLabelHasBeenSet = true; m_taskSetLabel = std::move(value); }

    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline ECSTaskSet& WithTaskSetLabel(const TargetLabel& value) { SetTaskSetLabel(value); return *this;}

    /**
     * <p> A label that identifies whether the ECS task set is an original target
     * (<code>BLUE</code>) or a replacement target (<code>GREEN</code>). </p>
     */
    inline ECSTaskSet& WithTaskSetLabel(TargetLabel&& value) { SetTaskSetLabel(std::move(value)); return *this;}

  private:

    Aws::String m_identifer;
    bool m_identiferHasBeenSet = false;

    long long m_desiredCount;
    bool m_desiredCountHasBeenSet = false;

    long long m_pendingCount;
    bool m_pendingCountHasBeenSet = false;

    long long m_runningCount;
    bool m_runningCountHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    double m_trafficWeight;
    bool m_trafficWeightHasBeenSet = false;

    TargetGroupInfo m_targetGroup;
    bool m_targetGroupHasBeenSet = false;

    TargetLabel m_taskSetLabel;
    bool m_taskSetLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

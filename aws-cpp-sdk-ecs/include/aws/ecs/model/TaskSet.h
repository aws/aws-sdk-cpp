/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/Scale.h>
#include <aws/ecs/model/StabilityStatus.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/Tag.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
   * <code>EXTERNAL</code> deployment. An Amazon ECS task set includes details such
   * as the desired number of tasks, how many tasks are running, and whether the task
   * set serves production traffic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskSet">AWS API
   * Reference</a></p>
   */
  class TaskSet
  {
  public:
    AWS_ECS_API TaskSet();
    AWS_ECS_API TaskSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the task set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the task set.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the task set.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the task set.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the task set.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the task set.</p>
     */
    inline TaskSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the task set.</p>
     */
    inline TaskSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task set.</p>
     */
    inline TaskSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline const Aws::String& GetTaskSetArn() const{ return m_taskSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline bool TaskSetArnHasBeenSet() const { return m_taskSetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline void SetTaskSetArn(const Aws::String& value) { m_taskSetArnHasBeenSet = true; m_taskSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline void SetTaskSetArn(Aws::String&& value) { m_taskSetArnHasBeenSet = true; m_taskSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline void SetTaskSetArn(const char* value) { m_taskSetArnHasBeenSet = true; m_taskSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline TaskSet& WithTaskSetArn(const Aws::String& value) { SetTaskSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline TaskSet& WithTaskSetArn(Aws::String&& value) { SetTaskSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task set.</p>
     */
    inline TaskSet& WithTaskSetArn(const char* value) { SetTaskSetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline TaskSet& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline TaskSet& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service the task set exists in.</p>
     */
    inline TaskSet& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline TaskSet& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline TaskSet& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that the service that hosts the
     * task set exists in.</p>
     */
    inline TaskSet& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline TaskSet& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline TaskSet& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The tag specified when a task set is started. If an CodeDeploy deployment
     * created the task set, the <code>startedBy</code> parameter is
     * <code>CODE_DEPLOY</code>. If an external deployment created the task set, the
     * <code>startedBy</code> field isn't used.</p>
     */
    inline TaskSet& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline TaskSet& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline TaskSet& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID associated with the task set.</p> <p>If an CodeDeploy
     * deployment created a task set, the <code>externalId</code> parameter contains
     * the CodeDeploy deployment ID.</p> <p>If a task set is created for an external
     * deployment and is associated with a service discovery registry, the
     * <code>externalId</code> parameter contains the
     * <code>ECS_TASK_SET_EXTERNAL_ID</code> Cloud Map attribute.</p>
     */
    inline TaskSet& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline TaskSet& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline TaskSet& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the task set. The following describes each state.</p> <dl>
     * <dt>PRIMARY</dt> <dd> <p>The task set is serving production traffic.</p> </dd>
     * <dt>ACTIVE</dt> <dd> <p>The task set isn't serving production traffic.</p> </dd>
     * <dt>DRAINING</dt> <dd> <p>The tasks in the task set are being stopped, and their
     * corresponding targets are being deregistered from their target group.</p> </dd>
     * </dl>
     */
    inline TaskSet& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline TaskSet& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline TaskSet& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The task definition that the task set is using.</p>
     */
    inline TaskSet& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}


    /**
     * <p>The computed desired count for the task set. This is calculated by
     * multiplying the service's <code>desiredCount</code> by the task set's
     * <code>scale</code> percentage. The result is always rounded up. For example, if
     * the computed desired count is 1.2, it rounds up to 2 tasks.</p>
     */
    inline int GetComputedDesiredCount() const{ return m_computedDesiredCount; }

    /**
     * <p>The computed desired count for the task set. This is calculated by
     * multiplying the service's <code>desiredCount</code> by the task set's
     * <code>scale</code> percentage. The result is always rounded up. For example, if
     * the computed desired count is 1.2, it rounds up to 2 tasks.</p>
     */
    inline bool ComputedDesiredCountHasBeenSet() const { return m_computedDesiredCountHasBeenSet; }

    /**
     * <p>The computed desired count for the task set. This is calculated by
     * multiplying the service's <code>desiredCount</code> by the task set's
     * <code>scale</code> percentage. The result is always rounded up. For example, if
     * the computed desired count is 1.2, it rounds up to 2 tasks.</p>
     */
    inline void SetComputedDesiredCount(int value) { m_computedDesiredCountHasBeenSet = true; m_computedDesiredCount = value; }

    /**
     * <p>The computed desired count for the task set. This is calculated by
     * multiplying the service's <code>desiredCount</code> by the task set's
     * <code>scale</code> percentage. The result is always rounded up. For example, if
     * the computed desired count is 1.2, it rounds up to 2 tasks.</p>
     */
    inline TaskSet& WithComputedDesiredCount(int value) { SetComputedDesiredCount(value); return *this;}


    /**
     * <p>The number of tasks in the task set that are in the <code>PENDING</code>
     * status during a deployment. A task in the <code>PENDING</code> state is
     * preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time or when it's
     * restarted after being in the <code>STOPPED</code> state.</p>
     */
    inline int GetPendingCount() const{ return m_pendingCount; }

    /**
     * <p>The number of tasks in the task set that are in the <code>PENDING</code>
     * status during a deployment. A task in the <code>PENDING</code> state is
     * preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time or when it's
     * restarted after being in the <code>STOPPED</code> state.</p>
     */
    inline bool PendingCountHasBeenSet() const { return m_pendingCountHasBeenSet; }

    /**
     * <p>The number of tasks in the task set that are in the <code>PENDING</code>
     * status during a deployment. A task in the <code>PENDING</code> state is
     * preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time or when it's
     * restarted after being in the <code>STOPPED</code> state.</p>
     */
    inline void SetPendingCount(int value) { m_pendingCountHasBeenSet = true; m_pendingCount = value; }

    /**
     * <p>The number of tasks in the task set that are in the <code>PENDING</code>
     * status during a deployment. A task in the <code>PENDING</code> state is
     * preparing to enter the <code>RUNNING</code> state. A task set enters the
     * <code>PENDING</code> status when it launches for the first time or when it's
     * restarted after being in the <code>STOPPED</code> state.</p>
     */
    inline TaskSet& WithPendingCount(int value) { SetPendingCount(value); return *this;}


    /**
     * <p>The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during a deployment. A task in the <code>RUNNING</code> state is running
     * and ready for use.</p>
     */
    inline int GetRunningCount() const{ return m_runningCount; }

    /**
     * <p>The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during a deployment. A task in the <code>RUNNING</code> state is running
     * and ready for use.</p>
     */
    inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }

    /**
     * <p>The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during a deployment. A task in the <code>RUNNING</code> state is running
     * and ready for use.</p>
     */
    inline void SetRunningCount(int value) { m_runningCountHasBeenSet = true; m_runningCount = value; }

    /**
     * <p>The number of tasks in the task set that are in the <code>RUNNING</code>
     * status during a deployment. A task in the <code>RUNNING</code> state is running
     * and ready for use.</p>
     */
    inline TaskSet& WithRunningCount(int value) { SetRunningCount(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline TaskSet& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task set was created.</p>
     */
    inline TaskSet& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline TaskSet& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task set was last updated.</p>
     */
    inline TaskSet& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskSet& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The launch type the tasks in the task set are using. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskSet& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}


    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline TaskSet& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline TaskSet& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline TaskSet& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }

    /**
     * <p>The capacity provider strategy that are associated with the task set.</p>
     */
    inline TaskSet& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }


    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskSet& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskSet& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The Fargate platform version where the tasks in the task set are running. A
     * platform version is only specified for tasks run on Fargate. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskSet& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline const Aws::String& GetPlatformFamily() const{ return m_platformFamily; }

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline bool PlatformFamilyHasBeenSet() const { return m_platformFamilyHasBeenSet; }

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline void SetPlatformFamily(const Aws::String& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = value; }

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline void SetPlatformFamily(Aws::String&& value) { m_platformFamilyHasBeenSet = true; m_platformFamily = std::move(value); }

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline void SetPlatformFamily(const char* value) { m_platformFamilyHasBeenSet = true; m_platformFamily.assign(value); }

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline TaskSet& WithPlatformFamily(const Aws::String& value) { SetPlatformFamily(value); return *this;}

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline TaskSet& WithPlatformFamily(Aws::String&& value) { SetPlatformFamily(std::move(value)); return *this;}

    /**
     * <p>The operating system that your tasks in the set are running on. A platform
     * family is specified only for tasks that use the Fargate launch type. </p> <p>
     * All tasks in the set must have the same value.</p>
     */
    inline TaskSet& WithPlatformFamily(const char* value) { SetPlatformFamily(value); return *this;}


    /**
     * <p>The network configuration for the task set.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The network configuration for the task set.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The network configuration for the task set.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The network configuration for the task set.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The network configuration for the task set.</p>
     */
    inline TaskSet& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for the task set.</p>
     */
    inline TaskSet& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline TaskSet& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline TaskSet& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline TaskSet& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>Details on a load balancer that are used with a task set.</p>
     */
    inline TaskSet& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }


    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline TaskSet& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline TaskSet& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline TaskSet& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }

    /**
     * <p>The details for the service discovery registries to assign to this task set.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>
     */
    inline TaskSet& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }


    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline const Scale& GetScale() const{ return m_scale; }

    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline void SetScale(const Scale& value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline void SetScale(Scale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }

    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline TaskSet& WithScale(const Scale& value) { SetScale(value); return *this;}

    /**
     * <p>A floating-point percentage of your desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline TaskSet& WithScale(Scale&& value) { SetScale(std::move(value)); return *this;}


    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline const StabilityStatus& GetStabilityStatus() const{ return m_stabilityStatus; }

    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline bool StabilityStatusHasBeenSet() const { return m_stabilityStatusHasBeenSet; }

    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline void SetStabilityStatus(const StabilityStatus& value) { m_stabilityStatusHasBeenSet = true; m_stabilityStatus = value; }

    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline void SetStabilityStatus(StabilityStatus&& value) { m_stabilityStatusHasBeenSet = true; m_stabilityStatus = std::move(value); }

    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline TaskSet& WithStabilityStatus(const StabilityStatus& value) { SetStabilityStatus(value); return *this;}

    /**
     * <p>The stability status. This indicates whether the task set has reached a
     * steady state. If the following conditions are met, the task set are in
     * <code>STEADY_STATE</code>:</p> <ul> <li> <p>The task <code>runningCount</code>
     * is equal to the <code>computedDesiredCount</code>.</p> </li> <li> <p>The
     * <code>pendingCount</code> is <code>0</code>.</p> </li> <li> <p>There are no
     * tasks that are running on container instances in the <code>DRAINING</code>
     * status.</p> </li> <li> <p>All tasks are reporting a healthy status from the load
     * balancers, service discovery, and container health checks.</p> </li> </ul> <p>If
     * any of those conditions aren't met, the stability status returns
     * <code>STABILIZING</code>.</p>
     */
    inline TaskSet& WithStabilityStatus(StabilityStatus&& value) { SetStabilityStatus(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetStabilityStatusAt() const{ return m_stabilityStatusAt; }

    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline bool StabilityStatusAtHasBeenSet() const { return m_stabilityStatusAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline void SetStabilityStatusAt(const Aws::Utils::DateTime& value) { m_stabilityStatusAtHasBeenSet = true; m_stabilityStatusAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline void SetStabilityStatusAt(Aws::Utils::DateTime&& value) { m_stabilityStatusAtHasBeenSet = true; m_stabilityStatusAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline TaskSet& WithStabilityStatusAt(const Aws::Utils::DateTime& value) { SetStabilityStatusAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task set stability status was
     * retrieved.</p>
     */
    inline TaskSet& WithStabilityStatusAt(Aws::Utils::DateTime&& value) { SetStabilityStatusAt(std::move(value)); return *this;}


    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline TaskSet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline TaskSet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline TaskSet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the task set to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline TaskSet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_taskSetArn;
    bool m_taskSetArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    int m_computedDesiredCount;
    bool m_computedDesiredCountHasBeenSet = false;

    int m_pendingCount;
    bool m_pendingCountHasBeenSet = false;

    int m_runningCount;
    bool m_runningCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_platformFamily;
    bool m_platformFamilyHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    Scale m_scale;
    bool m_scaleHasBeenSet = false;

    StabilityStatus m_stabilityStatus;
    bool m_stabilityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_stabilityStatusAt;
    bool m_stabilityStatusAtHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

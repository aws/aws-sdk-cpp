/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskOverride.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementStrategy.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API RunTaskRequest : public ECSRequest
  {
  public:
    RunTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline RunTaskRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline RunTaskRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster on which to
     * run your task. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline RunTaskRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline RunTaskRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline RunTaskRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task
     * definition to run. If a <code>revision</code> is not specified, the latest
     * <code>ACTIVE</code> revision is used.</p>
     */
    inline RunTaskRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <note> <p>A total of 8192
     * characters are allowed for overrides. This limit includes the JSON formatting
     * characters of the override structure.</p> </note>
     */
    inline const TaskOverride& GetOverrides() const{ return m_overrides; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <note> <p>A total of 8192
     * characters are allowed for overrides. This limit includes the JSON formatting
     * characters of the override structure.</p> </note>
     */
    inline void SetOverrides(const TaskOverride& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <note> <p>A total of 8192
     * characters are allowed for overrides. This limit includes the JSON formatting
     * characters of the override structure.</p> </note>
     */
    inline void SetOverrides(TaskOverride&& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <note> <p>A total of 8192
     * characters are allowed for overrides. This limit includes the JSON formatting
     * characters of the override structure.</p> </note>
     */
    inline RunTaskRequest& WithOverrides(const TaskOverride& value) { SetOverrides(value); return *this;}

    /**
     * <p>A list of container overrides in JSON format that specify the name of a
     * container in the specified task definition and the overrides it should receive.
     * You can override the default command for a container (that is specified in the
     * task definition or Docker image) with a <code>command</code> override. You can
     * also override existing environment variables (that are specified in the task
     * definition or Docker image) on a container or add new environment variables to
     * it with an <code>environment</code> override.</p> <note> <p>A total of 8192
     * characters are allowed for overrides. This limit includes the JSON formatting
     * characters of the override structure.</p> </note>
     */
    inline RunTaskRequest& WithOverrides(TaskOverride&& value) { SetOverrides(value); return *this;}

    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks per call.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks per call.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of instantiations of the specified task to place on your cluster.
     * You can specify up to 10 tasks per call.</p>
     */
    inline RunTaskRequest& WithCount(int value) { SetCount(value); return *this;}

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline RunTaskRequest& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline RunTaskRequest& WithStartedBy(Aws::String&& value) { SetStartedBy(value); return *this;}

    /**
     * <p>An optional tag specified when a task is started. For example if you
     * automatically trigger a task to run a batch process job, you could apply a
     * unique identifier for that job to your task with the <code>startedBy</code>
     * parameter. You can then identify which tasks belong to that job by filtering the
     * results of a <a>ListTasks</a> call with the <code>startedBy</code> value. Up to
     * 36 letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed.</p> <p>If a task is started by an Amazon ECS service, then the
     * <code>startedBy</code> parameter contains the deployment ID of the service that
     * starts it.</p>
     */
    inline RunTaskRequest& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline RunTaskRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline RunTaskRequest& WithGroup(Aws::String&& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the task group to associate with the task. The default value is
     * the family name of the task definition (for example, family:my-family-name).</p>
     */
    inline RunTaskRequest& WithGroup(const char* value) { SetGroup(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline void SetPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline void SetPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline RunTaskRequest& WithPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline RunTaskRequest& WithPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { SetPlacementConstraints(value); return *this;}

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline RunTaskRequest& AddPlacementConstraints(const PlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>An array of placement constraint objects to use for the task. You can specify
     * up to 10 constraints per task (including constraints in the task definition and
     * those specified at run time).</p>
     */
    inline RunTaskRequest& AddPlacementConstraints(PlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const{ return m_placementStrategy; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline void SetPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline void SetPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline RunTaskRequest& WithPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { SetPlacementStrategy(value); return *this;}

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline RunTaskRequest& WithPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { SetPlacementStrategy(value); return *this;}

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline RunTaskRequest& AddPlacementStrategy(const PlacementStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }

    /**
     * <p>The placement strategy objects to use for the task. You can specify a maximum
     * of 5 strategy rules per task.</p>
     */
    inline RunTaskRequest& AddPlacementStrategy(PlacementStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;
    TaskOverride m_overrides;
    bool m_overridesHasBeenSet;
    int m_count;
    bool m_countHasBeenSet;
    Aws::String m_startedBy;
    bool m_startedByHasBeenSet;
    Aws::String m_group;
    bool m_groupHasBeenSet;
    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet;
    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

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
     * <p>The number of instantiations of the specified task to place on your
     * cluster.</p> <important> <p>The <code>count</code> parameter is limited to 10
     * tasks per call.</p> </important>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of instantiations of the specified task to place on your
     * cluster.</p> <important> <p>The <code>count</code> parameter is limited to 10
     * tasks per call.</p> </important>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of instantiations of the specified task to place on your
     * cluster.</p> <important> <p>The <code>count</code> parameter is limited to 10
     * tasks per call.</p> </important>
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
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

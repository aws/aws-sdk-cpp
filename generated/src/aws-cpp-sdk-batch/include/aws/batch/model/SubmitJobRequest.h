﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ArrayProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/ContainerOverrides.h>
#include <aws/batch/model/NodeOverrides.h>
#include <aws/batch/model/RetryStrategy.h>
#include <aws/batch/model/JobTimeout.h>
#include <aws/batch/model/EksPropertiesOverride.h>
#include <aws/batch/model/EcsPropertiesOverride.h>
#include <aws/batch/model/ConsumableResourceProperties.h>
#include <aws/batch/model/JobDependency.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for <code>SubmitJob</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/SubmitJobRequest">AWS
   * API Reference</a></p>
   */
  class SubmitJobRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API SubmitJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitJob"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline SubmitJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline SubmitJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline SubmitJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job queue where the job is submitted. You can specify either the name or
     * the Amazon Resource Name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::move(value); }
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }
    inline SubmitJobRequest& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}
    inline SubmitJobRequest& WithJobQueue(Aws::String&& value) { SetJobQueue(std::move(value)); return *this;}
    inline SubmitJobRequest& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The share identifier for the job. Don't specify this parameter if the job
     * queue doesn't have a scheduling policy. If the job queue has a scheduling
     * policy, then this parameter must be specified.</p> <p>This string is limited to
     * 255 alphanumeric characters, and can be followed by an asterisk (*).</p>
     */
    inline const Aws::String& GetShareIdentifier() const{ return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    inline void SetShareIdentifier(const Aws::String& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = value; }
    inline void SetShareIdentifier(Aws::String&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::move(value); }
    inline void SetShareIdentifier(const char* value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier.assign(value); }
    inline SubmitJobRequest& WithShareIdentifier(const Aws::String& value) { SetShareIdentifier(value); return *this;}
    inline SubmitJobRequest& WithShareIdentifier(Aws::String&& value) { SetShareIdentifier(std::move(value)); return *this;}
    inline SubmitJobRequest& WithShareIdentifier(const char* value) { SetShareIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling priority for the job. This only affects jobs in job queues
     * with a fair share policy. Jobs with a higher scheduling priority are scheduled
     * before jobs with a lower scheduling priority. This overrides any scheduling
     * priority in the job definition and works only within a single share
     * identifier.</p> <p>The minimum supported value is 0 and the maximum supported
     * value is 9999.</p>
     */
    inline int GetSchedulingPriorityOverride() const{ return m_schedulingPriorityOverride; }
    inline bool SchedulingPriorityOverrideHasBeenSet() const { return m_schedulingPriorityOverrideHasBeenSet; }
    inline void SetSchedulingPriorityOverride(int value) { m_schedulingPriorityOverrideHasBeenSet = true; m_schedulingPriorityOverride = value; }
    inline SubmitJobRequest& WithSchedulingPriorityOverride(int value) { SetSchedulingPriorityOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/array_jobs.html">Array
     * Jobs</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ArrayProperties& GetArrayProperties() const{ return m_arrayProperties; }
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }
    inline void SetArrayProperties(const ArrayProperties& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }
    inline void SetArrayProperties(ArrayProperties&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }
    inline SubmitJobRequest& WithArrayProperties(const ArrayProperties& value) { SetArrayProperties(value); return *this;}
    inline SubmitJobRequest& WithArrayProperties(ArrayProperties&& value) { SetArrayProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline const Aws::Vector<JobDependency>& GetDependsOn() const{ return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    inline void SetDependsOn(const Aws::Vector<JobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }
    inline void SetDependsOn(Aws::Vector<JobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }
    inline SubmitJobRequest& WithDependsOn(const Aws::Vector<JobDependency>& value) { SetDependsOn(value); return *this;}
    inline SubmitJobRequest& WithDependsOn(Aws::Vector<JobDependency>&& value) { SetDependsOn(std::move(value)); return *this;}
    inline SubmitJobRequest& AddDependsOn(const JobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    inline SubmitJobRequest& AddDependsOn(JobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>definition-name</code>, <code>definition-name:revision</code>, or the
     * Amazon Resource Name (ARN) for the job definition, with or without the revision
     * (<code>arn:aws:batch:<i>region</i>:<i>account</i>:job-definition/<i>definition-name</i>:<i>revision</i>
     * </code>, or
     * <code>arn:aws:batch:<i>region</i>:<i>account</i>:job-definition/<i>definition-name</i>
     * </code>).</p> <p>If the revision is not specified, then the latest active
     * revision is used.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }
    inline SubmitJobRequest& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}
    inline SubmitJobRequest& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}
    inline SubmitJobRequest& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters in a <code>SubmitJob</code> request
     * override any corresponding parameter defaults from the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline SubmitJobRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline SubmitJobRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline SubmitJobRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline SubmitJobRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline SubmitJobRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SubmitJobRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SubmitJobRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline SubmitJobRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline SubmitJobRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object with properties that override the defaults for the job definition
     * that specify the name of a container in the specified job definition and the
     * overrides it should receive. You can override the default command for a
     * container, which is specified in the job definition or the Docker image, with a
     * <code>command</code> override. You can also override existing environment
     * variables on a container or add new environment variables to it with an
     * <code>environment</code> override.</p>
     */
    inline const ContainerOverrides& GetContainerOverrides() const{ return m_containerOverrides; }
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }
    inline void SetContainerOverrides(const ContainerOverrides& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }
    inline void SetContainerOverrides(ContainerOverrides&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }
    inline SubmitJobRequest& WithContainerOverrides(const ContainerOverrides& value) { SetContainerOverrides(value); return *this;}
    inline SubmitJobRequest& WithContainerOverrides(ContainerOverrides&& value) { SetContainerOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node overrides in JSON format that specify the node range to target
     * and the container overrides for that node range.</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources; use
     * <code>containerOverrides</code> instead.</p> 
     */
    inline const NodeOverrides& GetNodeOverrides() const{ return m_nodeOverrides; }
    inline bool NodeOverridesHasBeenSet() const { return m_nodeOverridesHasBeenSet; }
    inline void SetNodeOverrides(const NodeOverrides& value) { m_nodeOverridesHasBeenSet = true; m_nodeOverrides = value; }
    inline void SetNodeOverrides(NodeOverrides&& value) { m_nodeOverridesHasBeenSet = true; m_nodeOverrides = std::move(value); }
    inline SubmitJobRequest& WithNodeOverrides(const NodeOverrides& value) { SetNodeOverrides(value); return *this;}
    inline SubmitJobRequest& WithNodeOverrides(NodeOverrides&& value) { SetNodeOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed jobs from this <a>SubmitJob</a>
     * operation. When a retry strategy is specified here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }
    inline SubmitJobRequest& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}
    inline SubmitJobRequest& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the job or job definition to the
     * corresponding Amazon ECS task. If no value is specified, the tags aren't
     * propagated. Tags can only be propagated to the tasks during task creation. For
     * tags with the same name, job tags are given priority over job definitions tags.
     * If the total number of combined tags from the job and job definition is over 50,
     * the job is moved to the <code>FAILED</code> state. When specified, this
     * overrides the tag propagation setting in the job definition.</p>
     */
    inline bool GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(bool value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline SubmitJobRequest& WithPropagateTags(bool value) { SetPropagateTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for this <a>SubmitJob</a> operation. You can
     * specify a timeout duration after which Batch terminates your jobs if they
     * haven't finished. If a job is terminated due to a timeout, it isn't retried. The
     * minimum value for the timeout is 60 seconds. This configuration overrides any
     * timeout configuration specified in the job definition. For array jobs, child
     * jobs have the same timeout configuration as the parent job. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/job_timeouts.html">Job
     * Timeouts</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const JobTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const JobTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(JobTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline SubmitJobRequest& WithTimeout(const JobTimeout& value) { SetTimeout(value); return *this;}
    inline SubmitJobRequest& WithTimeout(JobTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the job request to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SubmitJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SubmitJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SubmitJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SubmitJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SubmitJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SubmitJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SubmitJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SubmitJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SubmitJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object, with properties that override defaults for the job definition, can
     * only be specified for jobs that are run on Amazon EKS resources.</p>
     */
    inline const EksPropertiesOverride& GetEksPropertiesOverride() const{ return m_eksPropertiesOverride; }
    inline bool EksPropertiesOverrideHasBeenSet() const { return m_eksPropertiesOverrideHasBeenSet; }
    inline void SetEksPropertiesOverride(const EksPropertiesOverride& value) { m_eksPropertiesOverrideHasBeenSet = true; m_eksPropertiesOverride = value; }
    inline void SetEksPropertiesOverride(EksPropertiesOverride&& value) { m_eksPropertiesOverrideHasBeenSet = true; m_eksPropertiesOverride = std::move(value); }
    inline SubmitJobRequest& WithEksPropertiesOverride(const EksPropertiesOverride& value) { SetEksPropertiesOverride(value); return *this;}
    inline SubmitJobRequest& WithEksPropertiesOverride(EksPropertiesOverride&& value) { SetEksPropertiesOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object, with properties that override defaults for the job definition, can
     * only be specified for jobs that are run on Amazon ECS resources.</p>
     */
    inline const EcsPropertiesOverride& GetEcsPropertiesOverride() const{ return m_ecsPropertiesOverride; }
    inline bool EcsPropertiesOverrideHasBeenSet() const { return m_ecsPropertiesOverrideHasBeenSet; }
    inline void SetEcsPropertiesOverride(const EcsPropertiesOverride& value) { m_ecsPropertiesOverrideHasBeenSet = true; m_ecsPropertiesOverride = value; }
    inline void SetEcsPropertiesOverride(EcsPropertiesOverride&& value) { m_ecsPropertiesOverrideHasBeenSet = true; m_ecsPropertiesOverride = std::move(value); }
    inline SubmitJobRequest& WithEcsPropertiesOverride(const EcsPropertiesOverride& value) { SetEcsPropertiesOverride(value); return *this;}
    inline SubmitJobRequest& WithEcsPropertiesOverride(EcsPropertiesOverride&& value) { SetEcsPropertiesOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains overrides for the consumable resources of a job.</p>
     */
    inline const ConsumableResourceProperties& GetConsumableResourcePropertiesOverride() const{ return m_consumableResourcePropertiesOverride; }
    inline bool ConsumableResourcePropertiesOverrideHasBeenSet() const { return m_consumableResourcePropertiesOverrideHasBeenSet; }
    inline void SetConsumableResourcePropertiesOverride(const ConsumableResourceProperties& value) { m_consumableResourcePropertiesOverrideHasBeenSet = true; m_consumableResourcePropertiesOverride = value; }
    inline void SetConsumableResourcePropertiesOverride(ConsumableResourceProperties&& value) { m_consumableResourcePropertiesOverrideHasBeenSet = true; m_consumableResourcePropertiesOverride = std::move(value); }
    inline SubmitJobRequest& WithConsumableResourcePropertiesOverride(const ConsumableResourceProperties& value) { SetConsumableResourcePropertiesOverride(value); return *this;}
    inline SubmitJobRequest& WithConsumableResourcePropertiesOverride(ConsumableResourceProperties&& value) { SetConsumableResourcePropertiesOverride(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    int m_schedulingPriorityOverride;
    bool m_schedulingPriorityOverrideHasBeenSet = false;

    ArrayProperties m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet = false;

    Aws::Vector<JobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    ContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    NodeOverrides m_nodeOverrides;
    bool m_nodeOverridesHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    bool m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    JobTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    EksPropertiesOverride m_eksPropertiesOverride;
    bool m_eksPropertiesOverrideHasBeenSet = false;

    EcsPropertiesOverride m_ecsPropertiesOverride;
    bool m_ecsPropertiesOverrideHasBeenSet = false;

    ConsumableResourceProperties m_consumableResourcePropertiesOverride;
    bool m_consumableResourcePropertiesOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws

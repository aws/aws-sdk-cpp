/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/BatchArrayProperties.h>
#include <aws/pipes/model/BatchContainerOverrides.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pipes/model/BatchRetryStrategy.h>
#include <aws/pipes/model/BatchJobDependency.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an Batch job as a target.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetBatchJobParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetBatchJobParameters
  {
  public:
    AWS_PIPES_API PipeTargetBatchJobParameters();
    AWS_PIPES_API PipeTargetBatchJobParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetBatchJobParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline const BatchArrayProperties& GetArrayProperties() const{ return m_arrayProperties; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline void SetArrayProperties(const BatchArrayProperties& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline void SetArrayProperties(BatchArrayProperties&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline PipeTargetBatchJobParameters& WithArrayProperties(const BatchArrayProperties& value) { SetArrayProperties(value); return *this;}

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline PipeTargetBatchJobParameters& WithArrayProperties(BatchArrayProperties&& value) { SetArrayProperties(std::move(value)); return *this;}


    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline const BatchContainerOverrides& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline void SetContainerOverrides(const BatchContainerOverrides& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline void SetContainerOverrides(BatchContainerOverrides&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline PipeTargetBatchJobParameters& WithContainerOverrides(const BatchContainerOverrides& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>The overrides that are sent to a container.</p>
     */
    inline PipeTargetBatchJobParameters& WithContainerOverrides(BatchContainerOverrides&& value) { SetContainerOverrides(std::move(value)); return *this;}


    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline const Aws::Vector<BatchJobDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline void SetDependsOn(const Aws::Vector<BatchJobDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline void SetDependsOn(Aws::Vector<BatchJobDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline PipeTargetBatchJobParameters& WithDependsOn(const Aws::Vector<BatchJobDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline PipeTargetBatchJobParameters& WithDependsOn(Aws::Vector<BatchJobDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline PipeTargetBatchJobParameters& AddDependsOn(const BatchJobDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of dependencies for the job. A job can depend upon a maximum of 20
     * jobs. You can specify a <code>SEQUENTIAL</code> type dependency without
     * specifying a job ID for array jobs so that each child array job completes
     * sequentially, starting at index 0. You can also specify an <code>N_TO_N</code>
     * type dependency with a job ID for array jobs. In that case, each index child of
     * this job must wait for the corresponding index child of each dependency to
     * complete before it can begin.</p>
     */
    inline PipeTargetBatchJobParameters& AddDependsOn(BatchJobDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }


    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline PipeTargetBatchJobParameters& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline PipeTargetBatchJobParameters& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}

    /**
     * <p>The job definition used by this job. This value can be one of
     * <code>name</code>, <code>name:revision</code>, or the Amazon Resource Name (ARN)
     * for the job definition. If name is specified without a revision then the latest
     * active revision is used.</p>
     */
    inline PipeTargetBatchJobParameters& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}


    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline PipeTargetBatchJobParameters& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline PipeTargetBatchJobParameters& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job. It can be up to 128 letters long. The first character
     * must be alphanumeric, can contain uppercase and lowercase letters, numbers,
     * hyphens (-), and underscores (_).</p>
     */
    inline PipeTargetBatchJobParameters& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional parameters passed to the job that replace parameter substitution
     * placeholders that are set in the job definition. Parameters are specified as a
     * key and value pair mapping. Parameters included here override any corresponding
     * parameter defaults from the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline const BatchRetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline void SetRetryStrategy(const BatchRetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline void SetRetryStrategy(BatchRetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& WithRetryStrategy(const BatchRetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs. When a retry strategy is specified
     * here, it overrides the retry strategy defined in the job definition.</p>
     */
    inline PipeTargetBatchJobParameters& WithRetryStrategy(BatchRetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}

  private:

    BatchArrayProperties m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet = false;

    BatchContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet = false;

    Aws::Vector<BatchJobDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    BatchRetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws

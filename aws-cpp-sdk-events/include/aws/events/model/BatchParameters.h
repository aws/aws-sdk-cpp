/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/BatchArrayProperties.h>
#include <aws/events/model/BatchRetryStrategy.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The custom parameters to be used when the target is an AWS Batch
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/BatchParameters">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API BatchParameters
  {
  public:
    BatchParameters();
    BatchParameters(Aws::Utils::Json::JsonView jsonValue);
    BatchParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline BatchParameters& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline BatchParameters& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the job definition to use if the event target is an AWS
     * Batch job. This job definition must already exist.</p>
     */
    inline BatchParameters& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}


    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline BatchParameters& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline BatchParameters& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name to use for this execution of the job, if the target is an AWS Batch
     * job.</p>
     */
    inline BatchParameters& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * AWS Batch job.</p>
     */
    inline const BatchArrayProperties& GetArrayProperties() const{ return m_arrayProperties; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * AWS Batch job.</p>
     */
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * AWS Batch job.</p>
     */
    inline void SetArrayProperties(const BatchArrayProperties& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * AWS Batch job.</p>
     */
    inline void SetArrayProperties(BatchArrayProperties&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * AWS Batch job.</p>
     */
    inline BatchParameters& WithArrayProperties(const BatchArrayProperties& value) { SetArrayProperties(value); return *this;}

    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * AWS Batch job.</p>
     */
    inline BatchParameters& WithArrayProperties(BatchArrayProperties&& value) { SetArrayProperties(std::move(value)); return *this;}


    /**
     * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
     * The retry strategy is the number of times to retry the failed job execution.
     * Valid values are 1–10. When you specify a retry strategy here, it overrides the
     * retry strategy defined in the job definition.</p>
     */
    inline const BatchRetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
     * The retry strategy is the number of times to retry the failed job execution.
     * Valid values are 1–10. When you specify a retry strategy here, it overrides the
     * retry strategy defined in the job definition.</p>
     */
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

    /**
     * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
     * The retry strategy is the number of times to retry the failed job execution.
     * Valid values are 1–10. When you specify a retry strategy here, it overrides the
     * retry strategy defined in the job definition.</p>
     */
    inline void SetRetryStrategy(const BatchRetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
     * The retry strategy is the number of times to retry the failed job execution.
     * Valid values are 1–10. When you specify a retry strategy here, it overrides the
     * retry strategy defined in the job definition.</p>
     */
    inline void SetRetryStrategy(BatchRetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

    /**
     * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
     * The retry strategy is the number of times to retry the failed job execution.
     * Valid values are 1–10. When you specify a retry strategy here, it overrides the
     * retry strategy defined in the job definition.</p>
     */
    inline BatchParameters& WithRetryStrategy(const BatchRetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
     * The retry strategy is the number of times to retry the failed job execution.
     * Valid values are 1–10. When you specify a retry strategy here, it overrides the
     * retry strategy defined in the job definition.</p>
     */
    inline BatchParameters& WithRetryStrategy(BatchRetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    BatchArrayProperties m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet;

    BatchRetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

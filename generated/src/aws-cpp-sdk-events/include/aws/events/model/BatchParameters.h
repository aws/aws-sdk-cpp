/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The custom parameters to be used when the target is an Batch
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/BatchParameters">AWS
   * API Reference</a></p>
   */
  class BatchParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API BatchParameters() = default;
    AWS_CLOUDWATCHEVENTS_API BatchParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API BatchParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN or name of the job definition to use if the event target is an Batch
     * job. This job definition must already exist.</p>
     */
    inline const Aws::String& GetJobDefinition() const { return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    template<typename JobDefinitionT = Aws::String>
    void SetJobDefinition(JobDefinitionT&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::forward<JobDefinitionT>(value); }
    template<typename JobDefinitionT = Aws::String>
    BatchParameters& WithJobDefinition(JobDefinitionT&& value) { SetJobDefinition(std::forward<JobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to use for this execution of the job, if the target is an Batch
     * job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    BatchParameters& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array properties for the submitted job, such as the size of the array.
     * The array size can be between 2 and 10,000. If you specify array properties for
     * a job, it becomes an array job. This parameter is used only if the target is an
     * Batch job.</p>
     */
    inline const BatchArrayProperties& GetArrayProperties() const { return m_arrayProperties; }
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }
    template<typename ArrayPropertiesT = BatchArrayProperties>
    void SetArrayProperties(ArrayPropertiesT&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::forward<ArrayPropertiesT>(value); }
    template<typename ArrayPropertiesT = BatchArrayProperties>
    BatchParameters& WithArrayProperties(ArrayPropertiesT&& value) { SetArrayProperties(std::forward<ArrayPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry strategy to use for failed jobs, if the target is an Batch job. The
     * retry strategy is the number of times to retry the failed job execution. Valid
     * values are 1–10. When you specify a retry strategy here, it overrides the retry
     * strategy defined in the job definition.</p>
     */
    inline const BatchRetryStrategy& GetRetryStrategy() const { return m_retryStrategy; }
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }
    template<typename RetryStrategyT = BatchRetryStrategy>
    void SetRetryStrategy(RetryStrategyT&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::forward<RetryStrategyT>(value); }
    template<typename RetryStrategyT = BatchRetryStrategy>
    BatchParameters& WithRetryStrategy(RetryStrategyT&& value) { SetRetryStrategy(std::forward<RetryStrategyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    BatchArrayProperties m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet = false;

    BatchRetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws

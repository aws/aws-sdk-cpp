﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a limit to how long a model training job, model compilation job, or
   * hyperparameter tuning job can run. It also specifies how long a managed Spot
   * training job has to complete. When the job reaches the time limit, Amazon
   * SageMaker ends the training or compilation job. Use this API to cap model
   * training costs.</p> <p>To stop a training job, Amazon SageMaker sends the
   * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
   * seconds. Algorithms can use this 120-second window to save the model artifacts,
   * so the results of training are not lost. </p> <p>The training algorithms
   * provided by Amazon SageMaker automatically save the intermediate results of a
   * model training job when possible. This attempt to save artifacts is only a best
   * effort case as model might not be in a state from which it can be saved. For
   * example, if training has just started, the model might not be ready to save.
   * When saved, this intermediate data is a valid model artifact. You can use it to
   * create a model with <code>CreateModel</code>.</p>  <p>The Neural Topic
   * Model (NTM) currently does not support saving intermediate model artifacts. When
   * training NTMs, make sure that the maximum runtime is sufficient for the training
   * job to complete.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StoppingCondition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API StoppingCondition
  {
  public:
    StoppingCondition();
    StoppingCondition(Aws::Utils::Json::JsonView jsonValue);
    StoppingCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum length of time, in seconds, that a training or compilation job
     * can run.</p> <p>For compilation jobs, if the job does not complete during this
     * time, you will receive a <code>TimeOut</code> error. We recommend starting with
     * 900 seconds and increase as necessary based on your model.</p> <p>For all other
     * jobs, if the job does not complete during this time, Amazon SageMaker ends the
     * job. When <code>RetryStrategy</code> is specified in the job request,
     * <code>MaxRuntimeInSeconds</code> specifies the maximum time for all of the
     * attempts in total, not each individual attempt. The default value is 1 day. The
     * maximum value is 28 days.</p>
     */
    inline int GetMaxRuntimeInSeconds() const{ return m_maxRuntimeInSeconds; }

    /**
     * <p>The maximum length of time, in seconds, that a training or compilation job
     * can run.</p> <p>For compilation jobs, if the job does not complete during this
     * time, you will receive a <code>TimeOut</code> error. We recommend starting with
     * 900 seconds and increase as necessary based on your model.</p> <p>For all other
     * jobs, if the job does not complete during this time, Amazon SageMaker ends the
     * job. When <code>RetryStrategy</code> is specified in the job request,
     * <code>MaxRuntimeInSeconds</code> specifies the maximum time for all of the
     * attempts in total, not each individual attempt. The default value is 1 day. The
     * maximum value is 28 days.</p>
     */
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of time, in seconds, that a training or compilation job
     * can run.</p> <p>For compilation jobs, if the job does not complete during this
     * time, you will receive a <code>TimeOut</code> error. We recommend starting with
     * 900 seconds and increase as necessary based on your model.</p> <p>For all other
     * jobs, if the job does not complete during this time, Amazon SageMaker ends the
     * job. When <code>RetryStrategy</code> is specified in the job request,
     * <code>MaxRuntimeInSeconds</code> specifies the maximum time for all of the
     * attempts in total, not each individual attempt. The default value is 1 day. The
     * maximum value is 28 days.</p>
     */
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }

    /**
     * <p>The maximum length of time, in seconds, that a training or compilation job
     * can run.</p> <p>For compilation jobs, if the job does not complete during this
     * time, you will receive a <code>TimeOut</code> error. We recommend starting with
     * 900 seconds and increase as necessary based on your model.</p> <p>For all other
     * jobs, if the job does not complete during this time, Amazon SageMaker ends the
     * job. When <code>RetryStrategy</code> is specified in the job request,
     * <code>MaxRuntimeInSeconds</code> specifies the maximum time for all of the
     * attempts in total, not each individual attempt. The default value is 1 day. The
     * maximum value is 28 days.</p>
     */
    inline StoppingCondition& WithMaxRuntimeInSeconds(int value) { SetMaxRuntimeInSeconds(value); return *this;}


    /**
     * <p>The maximum length of time, in seconds, that a managed Spot training job has
     * to complete. It is the amount of time spent waiting for Spot capacity plus the
     * amount of time the job can run. It must be equal to or greater than
     * <code>MaxRuntimeInSeconds</code>. If the job does not complete during this time,
     * Amazon SageMaker ends the job.</p> <p>When <code>RetryStrategy</code> is
     * specified in the job request, <code>MaxWaitTimeInSeconds</code> specifies the
     * maximum time for all of the attempts in total, not each individual attempt.</p>
     */
    inline int GetMaxWaitTimeInSeconds() const{ return m_maxWaitTimeInSeconds; }

    /**
     * <p>The maximum length of time, in seconds, that a managed Spot training job has
     * to complete. It is the amount of time spent waiting for Spot capacity plus the
     * amount of time the job can run. It must be equal to or greater than
     * <code>MaxRuntimeInSeconds</code>. If the job does not complete during this time,
     * Amazon SageMaker ends the job.</p> <p>When <code>RetryStrategy</code> is
     * specified in the job request, <code>MaxWaitTimeInSeconds</code> specifies the
     * maximum time for all of the attempts in total, not each individual attempt.</p>
     */
    inline bool MaxWaitTimeInSecondsHasBeenSet() const { return m_maxWaitTimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of time, in seconds, that a managed Spot training job has
     * to complete. It is the amount of time spent waiting for Spot capacity plus the
     * amount of time the job can run. It must be equal to or greater than
     * <code>MaxRuntimeInSeconds</code>. If the job does not complete during this time,
     * Amazon SageMaker ends the job.</p> <p>When <code>RetryStrategy</code> is
     * specified in the job request, <code>MaxWaitTimeInSeconds</code> specifies the
     * maximum time for all of the attempts in total, not each individual attempt.</p>
     */
    inline void SetMaxWaitTimeInSeconds(int value) { m_maxWaitTimeInSecondsHasBeenSet = true; m_maxWaitTimeInSeconds = value; }

    /**
     * <p>The maximum length of time, in seconds, that a managed Spot training job has
     * to complete. It is the amount of time spent waiting for Spot capacity plus the
     * amount of time the job can run. It must be equal to or greater than
     * <code>MaxRuntimeInSeconds</code>. If the job does not complete during this time,
     * Amazon SageMaker ends the job.</p> <p>When <code>RetryStrategy</code> is
     * specified in the job request, <code>MaxWaitTimeInSeconds</code> specifies the
     * maximum time for all of the attempts in total, not each individual attempt.</p>
     */
    inline StoppingCondition& WithMaxWaitTimeInSeconds(int value) { SetMaxWaitTimeInSeconds(value); return *this;}

  private:

    int m_maxRuntimeInSeconds;
    bool m_maxRuntimeInSecondsHasBeenSet;

    int m_maxWaitTimeInSeconds;
    bool m_maxWaitTimeInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
   * <p>Specifies a limit to how long a model training or compilation job can run.
   * When the job reaches the time limit, Amazon SageMaker ends the training or
   * compilation job. Use this API to cap model training costs.</p> <p>To stop a job,
   * Amazon SageMaker sends the algorithm the <code>SIGTERM</code> signal, which
   * delays job termination for 120 seconds. Algorithms can use this 120-second
   * window to save the model artifacts, so the results of training are not lost.
   * </p> <p>The training algorithms provided by Amazon SageMaker automatically save
   * the intermediate results of a model training job when possible. This attempt to
   * save artifacts is only a best effort case as model might not be in a state from
   * which it can be saved. For example, if training has just started, the model
   * might not be ready to save. When saved, this intermediate data is a valid model
   * artifact. You can use it to create a model with <code>CreateModel</code>.</p>
   * <note> <p>The Neural Topic Model (NTM) currently does not support saving
   * intermediate model artifacts. When training NTMs, make sure that the maximum
   * runtime is sufficient for the training job to complete.</p> </note><p><h3>See
   * Also:</h3>   <a
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
     * <p>The maximum length of time, in seconds, that the training or compilation job
     * can run. If job does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. The maximum value is 28
     * days.</p>
     */
    inline int GetMaxRuntimeInSeconds() const{ return m_maxRuntimeInSeconds; }

    /**
     * <p>The maximum length of time, in seconds, that the training or compilation job
     * can run. If job does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. The maximum value is 28
     * days.</p>
     */
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of time, in seconds, that the training or compilation job
     * can run. If job does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. The maximum value is 28
     * days.</p>
     */
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }

    /**
     * <p>The maximum length of time, in seconds, that the training or compilation job
     * can run. If job does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. The maximum value is 28
     * days.</p>
     */
    inline StoppingCondition& WithMaxRuntimeInSeconds(int value) { SetMaxRuntimeInSeconds(value); return *this;}

  private:

    int m_maxRuntimeInSeconds;
    bool m_maxRuntimeInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

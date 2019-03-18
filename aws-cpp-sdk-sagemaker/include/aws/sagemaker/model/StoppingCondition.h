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
   * <p>Specifies how long model training can run. When model training reaches the
   * limit, Amazon SageMaker ends the training job. Use this API to cap model
   * training cost.</p> <p>To stop a job, Amazon SageMaker sends the algorithm the
   * <code>SIGTERM</code> signal, which delays job termination for120 seconds.
   * Algorithms might use this 120-second window to save the model artifacts, so the
   * results of training is not lost. </p> <p>Training algorithms provided by Amazon
   * SageMaker automatically saves the intermediate results of a model training job
   * (it is best effort case, as model might not be ready to save as some stages, for
   * example training just started). This intermediate data is a valid model
   * artifact. You can use it to create a model (<code>CreateModel</code>).
   * </p><p><h3>See Also:</h3>   <a
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
     * <p>The maximum length of time, in seconds, that the training job can run. If
     * model training does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. Maximum value is 28
     * days.</p>
     */
    inline int GetMaxRuntimeInSeconds() const{ return m_maxRuntimeInSeconds; }

    /**
     * <p>The maximum length of time, in seconds, that the training job can run. If
     * model training does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. Maximum value is 28
     * days.</p>
     */
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of time, in seconds, that the training job can run. If
     * model training does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. Maximum value is 28
     * days.</p>
     */
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }

    /**
     * <p>The maximum length of time, in seconds, that the training job can run. If
     * model training does not complete during this time, Amazon SageMaker ends the
     * job. If value is not specified, default value is 1 day. Maximum value is 28
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

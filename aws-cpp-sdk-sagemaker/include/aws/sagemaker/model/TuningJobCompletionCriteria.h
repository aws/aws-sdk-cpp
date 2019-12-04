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
   * <p>The job completion criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TuningJobCompletionCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TuningJobCompletionCriteria
  {
  public:
    TuningJobCompletionCriteria();
    TuningJobCompletionCriteria(Aws::Utils::Json::JsonView jsonValue);
    TuningJobCompletionCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The objective metric's value.</p>
     */
    inline double GetTargetObjectiveMetricValue() const{ return m_targetObjectiveMetricValue; }

    /**
     * <p>The objective metric's value.</p>
     */
    inline bool TargetObjectiveMetricValueHasBeenSet() const { return m_targetObjectiveMetricValueHasBeenSet; }

    /**
     * <p>The objective metric's value.</p>
     */
    inline void SetTargetObjectiveMetricValue(double value) { m_targetObjectiveMetricValueHasBeenSet = true; m_targetObjectiveMetricValue = value; }

    /**
     * <p>The objective metric's value.</p>
     */
    inline TuningJobCompletionCriteria& WithTargetObjectiveMetricValue(double value) { SetTargetObjectiveMetricValue(value); return *this;}

  private:

    double m_targetObjectiveMetricValue;
    bool m_targetObjectiveMetricValueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
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
     * <p>The value of the objective metric.</p>
     */
    inline double GetTargetObjectiveMetricValue() const{ return m_targetObjectiveMetricValue; }

    /**
     * <p>The value of the objective metric.</p>
     */
    inline bool TargetObjectiveMetricValueHasBeenSet() const { return m_targetObjectiveMetricValueHasBeenSet; }

    /**
     * <p>The value of the objective metric.</p>
     */
    inline void SetTargetObjectiveMetricValue(double value) { m_targetObjectiveMetricValueHasBeenSet = true; m_targetObjectiveMetricValue = value; }

    /**
     * <p>The value of the objective metric.</p>
     */
    inline TuningJobCompletionCriteria& WithTargetObjectiveMetricValue(double value) { SetTargetObjectiveMetricValue(value); return *this;}

  private:

    double m_targetObjectiveMetricValue;
    bool m_targetObjectiveMetricValueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

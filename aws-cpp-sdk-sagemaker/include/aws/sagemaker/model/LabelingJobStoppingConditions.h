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
   * <p>A set of conditions for stopping a labeling job. If any of the conditions are
   * met, the job is automatically stopped. You can use these conditions to control
   * the cost of data labeling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobStoppingConditions">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobStoppingConditions
  {
  public:
    LabelingJobStoppingConditions();
    LabelingJobStoppingConditions(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobStoppingConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline int GetMaxHumanLabeledObjectCount() const{ return m_maxHumanLabeledObjectCount; }

    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline bool MaxHumanLabeledObjectCountHasBeenSet() const { return m_maxHumanLabeledObjectCountHasBeenSet; }

    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline void SetMaxHumanLabeledObjectCount(int value) { m_maxHumanLabeledObjectCountHasBeenSet = true; m_maxHumanLabeledObjectCount = value; }

    /**
     * <p>The maximum number of objects that can be labeled by human workers.</p>
     */
    inline LabelingJobStoppingConditions& WithMaxHumanLabeledObjectCount(int value) { SetMaxHumanLabeledObjectCount(value); return *this;}


    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline int GetMaxPercentageOfInputDatasetLabeled() const{ return m_maxPercentageOfInputDatasetLabeled; }

    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline bool MaxPercentageOfInputDatasetLabeledHasBeenSet() const { return m_maxPercentageOfInputDatasetLabeledHasBeenSet; }

    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline void SetMaxPercentageOfInputDatasetLabeled(int value) { m_maxPercentageOfInputDatasetLabeledHasBeenSet = true; m_maxPercentageOfInputDatasetLabeled = value; }

    /**
     * <p>The maximum number of input data objects that should be labeled.</p>
     */
    inline LabelingJobStoppingConditions& WithMaxPercentageOfInputDatasetLabeled(int value) { SetMaxPercentageOfInputDatasetLabeled(value); return *this;}

  private:

    int m_maxHumanLabeledObjectCount;
    bool m_maxHumanLabeledObjectCountHasBeenSet;

    int m_maxPercentageOfInputDatasetLabeled;
    bool m_maxPercentageOfInputDatasetLabeledHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

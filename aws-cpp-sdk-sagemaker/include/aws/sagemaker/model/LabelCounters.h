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
   * <p>Provides a breakdown of the number of objects labeled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelCounters">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelCounters
  {
  public:
    LabelCounters();
    LabelCounters(Aws::Utils::Json::JsonView jsonValue);
    LabelCounters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of objects labeled.</p>
     */
    inline int GetTotalLabeled() const{ return m_totalLabeled; }

    /**
     * <p>The total number of objects labeled.</p>
     */
    inline bool TotalLabeledHasBeenSet() const { return m_totalLabeledHasBeenSet; }

    /**
     * <p>The total number of objects labeled.</p>
     */
    inline void SetTotalLabeled(int value) { m_totalLabeledHasBeenSet = true; m_totalLabeled = value; }

    /**
     * <p>The total number of objects labeled.</p>
     */
    inline LabelCounters& WithTotalLabeled(int value) { SetTotalLabeled(value); return *this;}


    /**
     * <p>The total number of objects labeled by a human worker.</p>
     */
    inline int GetHumanLabeled() const{ return m_humanLabeled; }

    /**
     * <p>The total number of objects labeled by a human worker.</p>
     */
    inline bool HumanLabeledHasBeenSet() const { return m_humanLabeledHasBeenSet; }

    /**
     * <p>The total number of objects labeled by a human worker.</p>
     */
    inline void SetHumanLabeled(int value) { m_humanLabeledHasBeenSet = true; m_humanLabeled = value; }

    /**
     * <p>The total number of objects labeled by a human worker.</p>
     */
    inline LabelCounters& WithHumanLabeled(int value) { SetHumanLabeled(value); return *this;}


    /**
     * <p>The total number of objects labeled by automated data labeling.</p>
     */
    inline int GetMachineLabeled() const{ return m_machineLabeled; }

    /**
     * <p>The total number of objects labeled by automated data labeling.</p>
     */
    inline bool MachineLabeledHasBeenSet() const { return m_machineLabeledHasBeenSet; }

    /**
     * <p>The total number of objects labeled by automated data labeling.</p>
     */
    inline void SetMachineLabeled(int value) { m_machineLabeledHasBeenSet = true; m_machineLabeled = value; }

    /**
     * <p>The total number of objects labeled by automated data labeling.</p>
     */
    inline LabelCounters& WithMachineLabeled(int value) { SetMachineLabeled(value); return *this;}


    /**
     * <p>The total number of objects that could not be labeled due to an error.</p>
     */
    inline int GetFailedNonRetryableError() const{ return m_failedNonRetryableError; }

    /**
     * <p>The total number of objects that could not be labeled due to an error.</p>
     */
    inline bool FailedNonRetryableErrorHasBeenSet() const { return m_failedNonRetryableErrorHasBeenSet; }

    /**
     * <p>The total number of objects that could not be labeled due to an error.</p>
     */
    inline void SetFailedNonRetryableError(int value) { m_failedNonRetryableErrorHasBeenSet = true; m_failedNonRetryableError = value; }

    /**
     * <p>The total number of objects that could not be labeled due to an error.</p>
     */
    inline LabelCounters& WithFailedNonRetryableError(int value) { SetFailedNonRetryableError(value); return *this;}


    /**
     * <p>The total number of objects not yet labeled.</p>
     */
    inline int GetUnlabeled() const{ return m_unlabeled; }

    /**
     * <p>The total number of objects not yet labeled.</p>
     */
    inline bool UnlabeledHasBeenSet() const { return m_unlabeledHasBeenSet; }

    /**
     * <p>The total number of objects not yet labeled.</p>
     */
    inline void SetUnlabeled(int value) { m_unlabeledHasBeenSet = true; m_unlabeled = value; }

    /**
     * <p>The total number of objects not yet labeled.</p>
     */
    inline LabelCounters& WithUnlabeled(int value) { SetUnlabeled(value); return *this;}

  private:

    int m_totalLabeled;
    bool m_totalLabeledHasBeenSet;

    int m_humanLabeled;
    bool m_humanLabeledHasBeenSet;

    int m_machineLabeled;
    bool m_machineLabeledHasBeenSet;

    int m_failedNonRetryableError;
    bool m_failedNonRetryableErrorHasBeenSet;

    int m_unlabeled;
    bool m_unlabeledHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

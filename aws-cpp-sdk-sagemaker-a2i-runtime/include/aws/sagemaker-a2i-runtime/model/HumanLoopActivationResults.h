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
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopActivationReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Information about the corresponding flow definition's human loop activation
   * condition evaluation. Null if <code>StartHumanLoop</code> was invoked
   * directly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopActivationResults">AWS
   * API Reference</a></p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API HumanLoopActivationResults
  {
  public:
    HumanLoopActivationResults();
    HumanLoopActivationResults(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopActivationResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object containing information about why a human loop was triggered.</p>
     */
    inline const HumanLoopActivationReason& GetHumanLoopActivationReason() const{ return m_humanLoopActivationReason; }

    /**
     * <p>An object containing information about why a human loop was triggered.</p>
     */
    inline bool HumanLoopActivationReasonHasBeenSet() const { return m_humanLoopActivationReasonHasBeenSet; }

    /**
     * <p>An object containing information about why a human loop was triggered.</p>
     */
    inline void SetHumanLoopActivationReason(const HumanLoopActivationReason& value) { m_humanLoopActivationReasonHasBeenSet = true; m_humanLoopActivationReason = value; }

    /**
     * <p>An object containing information about why a human loop was triggered.</p>
     */
    inline void SetHumanLoopActivationReason(HumanLoopActivationReason&& value) { m_humanLoopActivationReasonHasBeenSet = true; m_humanLoopActivationReason = std::move(value); }

    /**
     * <p>An object containing information about why a human loop was triggered.</p>
     */
    inline HumanLoopActivationResults& WithHumanLoopActivationReason(const HumanLoopActivationReason& value) { SetHumanLoopActivationReason(value); return *this;}

    /**
     * <p>An object containing information about why a human loop was triggered.</p>
     */
    inline HumanLoopActivationResults& WithHumanLoopActivationReason(HumanLoopActivationReason&& value) { SetHumanLoopActivationReason(std::move(value)); return *this;}


    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline const Aws::String& GetHumanLoopActivationConditionsEvaluationResults() const{ return m_humanLoopActivationConditionsEvaluationResults; }

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline bool HumanLoopActivationConditionsEvaluationResultsHasBeenSet() const { return m_humanLoopActivationConditionsEvaluationResultsHasBeenSet; }

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline void SetHumanLoopActivationConditionsEvaluationResults(const Aws::String& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = value; }

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline void SetHumanLoopActivationConditionsEvaluationResults(Aws::String&& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = std::move(value); }

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline void SetHumanLoopActivationConditionsEvaluationResults(const char* value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults.assign(value); }

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline HumanLoopActivationResults& WithHumanLoopActivationConditionsEvaluationResults(const Aws::String& value) { SetHumanLoopActivationConditionsEvaluationResults(value); return *this;}

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline HumanLoopActivationResults& WithHumanLoopActivationConditionsEvaluationResults(Aws::String&& value) { SetHumanLoopActivationConditionsEvaluationResults(std::move(value)); return *this;}

    /**
     * <p>A copy of the human loop activation conditions of the flow definition,
     * augmented with the results of evaluating those conditions on the input provided
     * to the <code>StartHumanLoop</code> operation.</p>
     */
    inline HumanLoopActivationResults& WithHumanLoopActivationConditionsEvaluationResults(const char* value) { SetHumanLoopActivationConditionsEvaluationResults(value); return *this;}

  private:

    HumanLoopActivationReason m_humanLoopActivationReason;
    bool m_humanLoopActivationReasonHasBeenSet;

    Aws::String m_humanLoopActivationConditionsEvaluationResults;
    bool m_humanLoopActivationConditionsEvaluationResultsHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws

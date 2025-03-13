/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ExecutionStepResult.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the steps in the workflow, as well as the steps to execute in case
   * of any errors during workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ExecutionResults">AWS
   * API Reference</a></p>
   */
  class ExecutionResults
  {
  public:
    AWS_TRANSFER_API ExecutionResults() = default;
    AWS_TRANSFER_API ExecutionResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ExecutionResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline const Aws::Vector<ExecutionStepResult>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<ExecutionStepResult>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<ExecutionStepResult>>
    ExecutionResults& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = ExecutionStepResult>
    ExecutionResults& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline const Aws::Vector<ExecutionStepResult>& GetOnExceptionSteps() const { return m_onExceptionSteps; }
    inline bool OnExceptionStepsHasBeenSet() const { return m_onExceptionStepsHasBeenSet; }
    template<typename OnExceptionStepsT = Aws::Vector<ExecutionStepResult>>
    void SetOnExceptionSteps(OnExceptionStepsT&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = std::forward<OnExceptionStepsT>(value); }
    template<typename OnExceptionStepsT = Aws::Vector<ExecutionStepResult>>
    ExecutionResults& WithOnExceptionSteps(OnExceptionStepsT&& value) { SetOnExceptionSteps(std::forward<OnExceptionStepsT>(value)); return *this;}
    template<typename OnExceptionStepsT = ExecutionStepResult>
    ExecutionResults& AddOnExceptionSteps(OnExceptionStepsT&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.emplace_back(std::forward<OnExceptionStepsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ExecutionStepResult> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Vector<ExecutionStepResult> m_onExceptionSteps;
    bool m_onExceptionStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

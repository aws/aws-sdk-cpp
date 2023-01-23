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
    AWS_TRANSFER_API ExecutionResults();
    AWS_TRANSFER_API ExecutionResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ExecutionResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline const Aws::Vector<ExecutionStepResult>& GetSteps() const{ return m_steps; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline void SetSteps(const Aws::Vector<ExecutionStepResult>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline void SetSteps(Aws::Vector<ExecutionStepResult>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline ExecutionResults& WithSteps(const Aws::Vector<ExecutionStepResult>& value) { SetSteps(value); return *this;}

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline ExecutionResults& WithSteps(Aws::Vector<ExecutionStepResult>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline ExecutionResults& AddSteps(const ExecutionStepResult& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>Specifies the details for the steps that are in the specified workflow.</p>
     */
    inline ExecutionResults& AddSteps(ExecutionStepResult&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline const Aws::Vector<ExecutionStepResult>& GetOnExceptionSteps() const{ return m_onExceptionSteps; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline bool OnExceptionStepsHasBeenSet() const { return m_onExceptionStepsHasBeenSet; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline void SetOnExceptionSteps(const Aws::Vector<ExecutionStepResult>& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = value; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline void SetOnExceptionSteps(Aws::Vector<ExecutionStepResult>&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps = std::move(value); }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline ExecutionResults& WithOnExceptionSteps(const Aws::Vector<ExecutionStepResult>& value) { SetOnExceptionSteps(value); return *this;}

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline ExecutionResults& WithOnExceptionSteps(Aws::Vector<ExecutionStepResult>&& value) { SetOnExceptionSteps(std::move(value)); return *this;}

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline ExecutionResults& AddOnExceptionSteps(const ExecutionStepResult& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.push_back(value); return *this; }

    /**
     * <p>Specifies the steps (actions) to take if errors are encountered during
     * execution of the workflow.</p>
     */
    inline ExecutionResults& AddOnExceptionSteps(ExecutionStepResult&& value) { m_onExceptionStepsHasBeenSet = true; m_onExceptionSteps.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ExecutionStepResult> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Vector<ExecutionStepResult> m_onExceptionSteps;
    bool m_onExceptionStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

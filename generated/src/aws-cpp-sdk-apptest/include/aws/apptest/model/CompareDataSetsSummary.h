/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CompareDataSetsStepInput.h>
#include <aws/apptest/model/CompareDataSetsStepOutput.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Compares data sets summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareDataSetsSummary">AWS
   * API Reference</a></p>
   */
  class CompareDataSetsSummary
  {
  public:
    AWS_APPTEST_API CompareDataSetsSummary() = default;
    AWS_APPTEST_API CompareDataSetsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDataSetsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the compare data sets summary.</p>
     */
    inline const CompareDataSetsStepInput& GetStepInput() const { return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    template<typename StepInputT = CompareDataSetsStepInput>
    void SetStepInput(StepInputT&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::forward<StepInputT>(value); }
    template<typename StepInputT = CompareDataSetsStepInput>
    CompareDataSetsSummary& WithStepInput(StepInputT&& value) { SetStepInput(std::forward<StepInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the compare data sets summary.</p>
     */
    inline const CompareDataSetsStepOutput& GetStepOutput() const { return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    template<typename StepOutputT = CompareDataSetsStepOutput>
    void SetStepOutput(StepOutputT&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::forward<StepOutputT>(value); }
    template<typename StepOutputT = CompareDataSetsStepOutput>
    CompareDataSetsSummary& WithStepOutput(StepOutputT&& value) { SetStepOutput(std::forward<StepOutputT>(value)); return *this;}
    ///@}
  private:

    CompareDataSetsStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    CompareDataSetsStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

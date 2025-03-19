/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CompareDatabaseCDCStepInput.h>
#include <aws/apptest/model/CompareDatabaseCDCStepOutput.h>
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
   * <p>Compares the database CDC summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareDatabaseCDCSummary">AWS
   * API Reference</a></p>
   */
  class CompareDatabaseCDCSummary
  {
  public:
    AWS_APPTEST_API CompareDatabaseCDCSummary() = default;
    AWS_APPTEST_API CompareDatabaseCDCSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDatabaseCDCSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the compare database CDC summary.</p>
     */
    inline const CompareDatabaseCDCStepInput& GetStepInput() const { return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    template<typename StepInputT = CompareDatabaseCDCStepInput>
    void SetStepInput(StepInputT&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::forward<StepInputT>(value); }
    template<typename StepInputT = CompareDatabaseCDCStepInput>
    CompareDatabaseCDCSummary& WithStepInput(StepInputT&& value) { SetStepInput(std::forward<StepInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the compare database CDC summary.</p>
     */
    inline const CompareDatabaseCDCStepOutput& GetStepOutput() const { return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    template<typename StepOutputT = CompareDatabaseCDCStepOutput>
    void SetStepOutput(StepOutputT&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::forward<StepOutputT>(value); }
    template<typename StepOutputT = CompareDatabaseCDCStepOutput>
    CompareDatabaseCDCSummary& WithStepOutput(StepOutputT&& value) { SetStepOutput(std::forward<StepOutputT>(value)); return *this;}
    ///@}
  private:

    CompareDatabaseCDCStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    CompareDatabaseCDCStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

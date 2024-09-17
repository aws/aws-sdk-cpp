/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/TN3270StepInput.h>
#include <aws/apptest/model/TN3270StepOutput.h>
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
   * <p>Specifies a TN3270 summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TN3270Summary">AWS
   * API Reference</a></p>
   */
  class TN3270Summary
  {
  public:
    AWS_APPTEST_API TN3270Summary();
    AWS_APPTEST_API TN3270Summary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the TN3270 summary.</p>
     */
    inline const TN3270StepInput& GetStepInput() const{ return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    inline void SetStepInput(const TN3270StepInput& value) { m_stepInputHasBeenSet = true; m_stepInput = value; }
    inline void SetStepInput(TN3270StepInput&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::move(value); }
    inline TN3270Summary& WithStepInput(const TN3270StepInput& value) { SetStepInput(value); return *this;}
    inline TN3270Summary& WithStepInput(TN3270StepInput&& value) { SetStepInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the TN3270 summary.</p>
     */
    inline const TN3270StepOutput& GetStepOutput() const{ return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    inline void SetStepOutput(const TN3270StepOutput& value) { m_stepOutputHasBeenSet = true; m_stepOutput = value; }
    inline void SetStepOutput(TN3270StepOutput&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::move(value); }
    inline TN3270Summary& WithStepOutput(const TN3270StepOutput& value) { SetStepOutput(value); return *this;}
    inline TN3270Summary& WithStepOutput(TN3270StepOutput&& value) { SetStepOutput(std::move(value)); return *this;}
    ///@}
  private:

    TN3270StepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    TN3270StepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/M2NonManagedApplicationStepInput.h>
#include <aws/apptest/model/M2NonManagedApplicationStepOutput.h>
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
   * <p>Specifies the AWS Mainframe Modernization non-managed application step
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2NonManagedApplicationStepSummary">AWS
   * API Reference</a></p>
   */
  class M2NonManagedApplicationStepSummary
  {
  public:
    AWS_APPTEST_API M2NonManagedApplicationStepSummary();
    AWS_APPTEST_API M2NonManagedApplicationStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2NonManagedApplicationStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the AWS Mainframe Modernization non-managed application
     * step summary.</p>
     */
    inline const M2NonManagedApplicationStepInput& GetStepInput() const{ return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    inline void SetStepInput(const M2NonManagedApplicationStepInput& value) { m_stepInputHasBeenSet = true; m_stepInput = value; }
    inline void SetStepInput(M2NonManagedApplicationStepInput&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::move(value); }
    inline M2NonManagedApplicationStepSummary& WithStepInput(const M2NonManagedApplicationStepInput& value) { SetStepInput(value); return *this;}
    inline M2NonManagedApplicationStepSummary& WithStepInput(M2NonManagedApplicationStepInput&& value) { SetStepInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the AWS Mainframe Modernization non-managed application
     * step summary.</p>
     */
    inline const M2NonManagedApplicationStepOutput& GetStepOutput() const{ return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    inline void SetStepOutput(const M2NonManagedApplicationStepOutput& value) { m_stepOutputHasBeenSet = true; m_stepOutput = value; }
    inline void SetStepOutput(M2NonManagedApplicationStepOutput&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::move(value); }
    inline M2NonManagedApplicationStepSummary& WithStepOutput(const M2NonManagedApplicationStepOutput& value) { SetStepOutput(value); return *this;}
    inline M2NonManagedApplicationStepSummary& WithStepOutput(M2NonManagedApplicationStepOutput&& value) { SetStepOutput(std::move(value)); return *this;}
    ///@}
  private:

    M2NonManagedApplicationStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    M2NonManagedApplicationStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

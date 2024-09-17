/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/M2ManagedApplicationStepInput.h>
#include <aws/apptest/model/M2ManagedApplicationStepOutput.h>
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
   * <p>Specifies the AWS Mainframe Modernization managed application step
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2ManagedApplicationStepSummary">AWS
   * API Reference</a></p>
   */
  class M2ManagedApplicationStepSummary
  {
  public:
    AWS_APPTEST_API M2ManagedApplicationStepSummary();
    AWS_APPTEST_API M2ManagedApplicationStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplicationStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the AWS Mainframe Modernization managed application step
     * summary.</p>
     */
    inline const M2ManagedApplicationStepInput& GetStepInput() const{ return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    inline void SetStepInput(const M2ManagedApplicationStepInput& value) { m_stepInputHasBeenSet = true; m_stepInput = value; }
    inline void SetStepInput(M2ManagedApplicationStepInput&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::move(value); }
    inline M2ManagedApplicationStepSummary& WithStepInput(const M2ManagedApplicationStepInput& value) { SetStepInput(value); return *this;}
    inline M2ManagedApplicationStepSummary& WithStepInput(M2ManagedApplicationStepInput&& value) { SetStepInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the AWS Mainframe Modernization managed application step
     * summary.</p>
     */
    inline const M2ManagedApplicationStepOutput& GetStepOutput() const{ return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    inline void SetStepOutput(const M2ManagedApplicationStepOutput& value) { m_stepOutputHasBeenSet = true; m_stepOutput = value; }
    inline void SetStepOutput(M2ManagedApplicationStepOutput&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::move(value); }
    inline M2ManagedApplicationStepSummary& WithStepOutput(const M2ManagedApplicationStepOutput& value) { SetStepOutput(value); return *this;}
    inline M2ManagedApplicationStepSummary& WithStepOutput(M2ManagedApplicationStepOutput&& value) { SetStepOutput(std::move(value)); return *this;}
    ///@}
  private:

    M2ManagedApplicationStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    M2ManagedApplicationStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

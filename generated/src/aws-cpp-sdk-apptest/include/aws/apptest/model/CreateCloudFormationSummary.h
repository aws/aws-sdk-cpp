/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CreateCloudFormationStepInput.h>
#include <aws/apptest/model/CreateCloudFormationStepOutput.h>
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
   * <p>Creates a CloudFormation summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CreateCloudFormationSummary">AWS
   * API Reference</a></p>
   */
  class CreateCloudFormationSummary
  {
  public:
    AWS_APPTEST_API CreateCloudFormationSummary() = default;
    AWS_APPTEST_API CreateCloudFormationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CreateCloudFormationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the CloudFormation summary.</p>
     */
    inline const CreateCloudFormationStepInput& GetStepInput() const { return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    template<typename StepInputT = CreateCloudFormationStepInput>
    void SetStepInput(StepInputT&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::forward<StepInputT>(value); }
    template<typename StepInputT = CreateCloudFormationStepInput>
    CreateCloudFormationSummary& WithStepInput(StepInputT&& value) { SetStepInput(std::forward<StepInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the CloudFormation summary.</p>
     */
    inline const CreateCloudFormationStepOutput& GetStepOutput() const { return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    template<typename StepOutputT = CreateCloudFormationStepOutput>
    void SetStepOutput(StepOutputT&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::forward<StepOutputT>(value); }
    template<typename StepOutputT = CreateCloudFormationStepOutput>
    CreateCloudFormationSummary& WithStepOutput(StepOutputT&& value) { SetStepOutput(std::forward<StepOutputT>(value)); return *this;}
    ///@}
  private:

    CreateCloudFormationStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    CreateCloudFormationStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

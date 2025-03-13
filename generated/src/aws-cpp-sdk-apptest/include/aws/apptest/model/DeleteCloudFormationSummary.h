/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/DeleteCloudFormationStepInput.h>
#include <aws/apptest/model/DeleteCloudFormationStepOutput.h>
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
   * <p>Deletes the CloudFormation summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteCloudFormationSummary">AWS
   * API Reference</a></p>
   */
  class DeleteCloudFormationSummary
  {
  public:
    AWS_APPTEST_API DeleteCloudFormationSummary() = default;
    AWS_APPTEST_API DeleteCloudFormationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DeleteCloudFormationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the deleted CloudFormation summary.</p>
     */
    inline const DeleteCloudFormationStepInput& GetStepInput() const { return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    template<typename StepInputT = DeleteCloudFormationStepInput>
    void SetStepInput(StepInputT&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::forward<StepInputT>(value); }
    template<typename StepInputT = DeleteCloudFormationStepInput>
    DeleteCloudFormationSummary& WithStepInput(StepInputT&& value) { SetStepInput(std::forward<StepInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the deleted CloudFormation summary.</p>
     */
    inline const DeleteCloudFormationStepOutput& GetStepOutput() const { return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    template<typename StepOutputT = DeleteCloudFormationStepOutput>
    void SetStepOutput(StepOutputT&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::forward<StepOutputT>(value); }
    template<typename StepOutputT = DeleteCloudFormationStepOutput>
    DeleteCloudFormationSummary& WithStepOutput(StepOutputT&& value) { SetStepOutput(std::forward<StepOutputT>(value)); return *this;}
    ///@}
  private:

    DeleteCloudFormationStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    DeleteCloudFormationStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

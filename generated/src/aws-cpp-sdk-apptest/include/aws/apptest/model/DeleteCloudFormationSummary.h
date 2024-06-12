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
    AWS_APPTEST_API DeleteCloudFormationSummary();
    AWS_APPTEST_API DeleteCloudFormationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DeleteCloudFormationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the deleted CloudFormation summary.</p>
     */
    inline const DeleteCloudFormationStepInput& GetStepInput() const{ return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    inline void SetStepInput(const DeleteCloudFormationStepInput& value) { m_stepInputHasBeenSet = true; m_stepInput = value; }
    inline void SetStepInput(DeleteCloudFormationStepInput&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::move(value); }
    inline DeleteCloudFormationSummary& WithStepInput(const DeleteCloudFormationStepInput& value) { SetStepInput(value); return *this;}
    inline DeleteCloudFormationSummary& WithStepInput(DeleteCloudFormationStepInput&& value) { SetStepInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the deleted CloudFormation summary.</p>
     */
    inline const DeleteCloudFormationStepOutput& GetStepOutput() const{ return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    inline void SetStepOutput(const DeleteCloudFormationStepOutput& value) { m_stepOutputHasBeenSet = true; m_stepOutput = value; }
    inline void SetStepOutput(DeleteCloudFormationStepOutput&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::move(value); }
    inline DeleteCloudFormationSummary& WithStepOutput(const DeleteCloudFormationStepOutput& value) { SetStepOutput(value); return *this;}
    inline DeleteCloudFormationSummary& WithStepOutput(DeleteCloudFormationStepOutput&& value) { SetStepOutput(std::move(value)); return *this;}
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

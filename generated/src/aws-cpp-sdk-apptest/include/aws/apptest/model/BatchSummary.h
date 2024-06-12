/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/BatchStepInput.h>
#include <aws/apptest/model/BatchStepOutput.h>
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
   * <p>Summarizes a batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/BatchSummary">AWS
   * API Reference</a></p>
   */
  class BatchSummary
  {
  public:
    AWS_APPTEST_API BatchSummary();
    AWS_APPTEST_API BatchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API BatchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the batch summary.</p>
     */
    inline const BatchStepInput& GetStepInput() const{ return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    inline void SetStepInput(const BatchStepInput& value) { m_stepInputHasBeenSet = true; m_stepInput = value; }
    inline void SetStepInput(BatchStepInput&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::move(value); }
    inline BatchSummary& WithStepInput(const BatchStepInput& value) { SetStepInput(value); return *this;}
    inline BatchSummary& WithStepInput(BatchStepInput&& value) { SetStepInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the batch summary.</p>
     */
    inline const BatchStepOutput& GetStepOutput() const{ return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    inline void SetStepOutput(const BatchStepOutput& value) { m_stepOutputHasBeenSet = true; m_stepOutput = value; }
    inline void SetStepOutput(BatchStepOutput&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::move(value); }
    inline BatchSummary& WithStepOutput(const BatchStepOutput& value) { SetStepOutput(value); return *this;}
    inline BatchSummary& WithStepOutput(BatchStepOutput&& value) { SetStepOutput(std::move(value)); return *this;}
    ///@}
  private:

    BatchStepInput m_stepInput;
    bool m_stepInputHasBeenSet = false;

    BatchStepOutput m_stepOutput;
    bool m_stepOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

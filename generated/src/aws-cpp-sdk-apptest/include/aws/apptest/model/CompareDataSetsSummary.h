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
    AWS_APPTEST_API CompareDataSetsSummary();
    AWS_APPTEST_API CompareDataSetsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDataSetsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step input of the compare data sets summary.</p>
     */
    inline const CompareDataSetsStepInput& GetStepInput() const{ return m_stepInput; }
    inline bool StepInputHasBeenSet() const { return m_stepInputHasBeenSet; }
    inline void SetStepInput(const CompareDataSetsStepInput& value) { m_stepInputHasBeenSet = true; m_stepInput = value; }
    inline void SetStepInput(CompareDataSetsStepInput&& value) { m_stepInputHasBeenSet = true; m_stepInput = std::move(value); }
    inline CompareDataSetsSummary& WithStepInput(const CompareDataSetsStepInput& value) { SetStepInput(value); return *this;}
    inline CompareDataSetsSummary& WithStepInput(CompareDataSetsStepInput&& value) { SetStepInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step output of the compare data sets summary.</p>
     */
    inline const CompareDataSetsStepOutput& GetStepOutput() const{ return m_stepOutput; }
    inline bool StepOutputHasBeenSet() const { return m_stepOutputHasBeenSet; }
    inline void SetStepOutput(const CompareDataSetsStepOutput& value) { m_stepOutputHasBeenSet = true; m_stepOutput = value; }
    inline void SetStepOutput(CompareDataSetsStepOutput&& value) { m_stepOutputHasBeenSet = true; m_stepOutput = std::move(value); }
    inline CompareDataSetsSummary& WithStepOutput(const CompareDataSetsStepOutput& value) { SetStepOutput(value); return *this;}
    inline CompareDataSetsSummary& WithStepOutput(CompareDataSetsStepOutput&& value) { SetStepOutput(std::move(value)); return *this;}
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

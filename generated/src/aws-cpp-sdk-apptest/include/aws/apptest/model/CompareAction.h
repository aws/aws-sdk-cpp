/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/Input.h>
#include <aws/apptest/model/Output.h>
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
   * <p>Compares the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareAction">AWS
   * API Reference</a></p>
   */
  class CompareAction
  {
  public:
    AWS_APPTEST_API CompareAction();
    AWS_APPTEST_API CompareAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input of the compare action.</p>
     */
    inline const Input& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Input& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Input&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline CompareAction& WithInput(const Input& value) { SetInput(value); return *this;}
    inline CompareAction& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output of the compare action.</p>
     */
    inline const Output& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const Output& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(Output&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline CompareAction& WithOutput(const Output& value) { SetOutput(value); return *this;}
    inline CompareAction& WithOutput(Output&& value) { SetOutput(std::move(value)); return *this;}
    ///@}
  private:

    Input m_input;
    bool m_inputHasBeenSet = false;

    Output m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

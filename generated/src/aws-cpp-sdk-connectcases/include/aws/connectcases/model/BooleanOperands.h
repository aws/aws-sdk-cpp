/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/OperandOne.h>
#include <aws/connectcases/model/OperandTwo.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Boolean operands for a condition. In the Amazon Connect admin website, case
   * rules are known as <i>case field conditions</i>. For more information about case
   * field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BooleanOperands">AWS
   * API Reference</a></p>
   */
  class BooleanOperands
  {
  public:
    AWS_CONNECTCASES_API BooleanOperands() = default;
    AWS_CONNECTCASES_API BooleanOperands(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API BooleanOperands& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the left hand operand in the condition.</p>
     */
    inline const OperandOne& GetOperandOne() const { return m_operandOne; }
    inline bool OperandOneHasBeenSet() const { return m_operandOneHasBeenSet; }
    template<typename OperandOneT = OperandOne>
    void SetOperandOne(OperandOneT&& value) { m_operandOneHasBeenSet = true; m_operandOne = std::forward<OperandOneT>(value); }
    template<typename OperandOneT = OperandOne>
    BooleanOperands& WithOperandOne(OperandOneT&& value) { SetOperandOne(std::forward<OperandOneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the right hand operand in the condition.</p>
     */
    inline const OperandTwo& GetOperandTwo() const { return m_operandTwo; }
    inline bool OperandTwoHasBeenSet() const { return m_operandTwoHasBeenSet; }
    template<typename OperandTwoT = OperandTwo>
    void SetOperandTwo(OperandTwoT&& value) { m_operandTwoHasBeenSet = true; m_operandTwo = std::forward<OperandTwoT>(value); }
    template<typename OperandTwoT = OperandTwo>
    BooleanOperands& WithOperandTwo(OperandTwoT&& value) { SetOperandTwo(std::forward<OperandTwoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the outer rule if the condition evaluates to true.</p>
     */
    inline bool GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(bool value) { m_resultHasBeenSet = true; m_result = value; }
    inline BooleanOperands& WithResult(bool value) { SetResult(value); return *this;}
    ///@}
  private:

    OperandOne m_operandOne;
    bool m_operandOneHasBeenSet = false;

    OperandTwo m_operandTwo;
    bool m_operandTwoHasBeenSet = false;

    bool m_result{false};
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws

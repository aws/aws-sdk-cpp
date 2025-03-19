/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Stores information for generating Amplify DataStore queries. Use a
   * <code>Predicate</code> to retrieve a subset of the data in a
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/Predicate">AWS
   * API Reference</a></p>
   */
  class Predicate
  {
  public:
    AWS_AMPLIFYUIBUILDER_API Predicate() = default;
    AWS_AMPLIFYUIBUILDER_API Predicate(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Predicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline const Aws::Vector<Predicate>& GetOr() const { return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    template<typename OrT = Aws::Vector<Predicate>>
    void SetOr(OrT&& value) { m_orHasBeenSet = true; m_or = std::forward<OrT>(value); }
    template<typename OrT = Aws::Vector<Predicate>>
    Predicate& WithOr(OrT&& value) { SetOr(std::forward<OrT>(value)); return *this;}
    template<typename OrT = Predicate>
    Predicate& AddOr(OrT&& value) { m_orHasBeenSet = true; m_or.emplace_back(std::forward<OrT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline const Aws::Vector<Predicate>& GetAnd() const { return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    template<typename AndT = Aws::Vector<Predicate>>
    void SetAnd(AndT&& value) { m_andHasBeenSet = true; m_and = std::forward<AndT>(value); }
    template<typename AndT = Aws::Vector<Predicate>>
    Predicate& WithAnd(AndT&& value) { SetAnd(std::forward<AndT>(value)); return *this;}
    template<typename AndT = Predicate>
    Predicate& AddAnd(AndT&& value) { m_andHasBeenSet = true; m_and.emplace_back(std::forward<AndT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field to query.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    Predicate& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline const Aws::String& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = Aws::String>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = Aws::String>
    Predicate& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline const Aws::String& GetOperand() const { return m_operand; }
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }
    template<typename OperandT = Aws::String>
    void SetOperand(OperandT&& value) { m_operandHasBeenSet = true; m_operand = std::forward<OperandT>(value); }
    template<typename OperandT = Aws::String>
    Predicate& WithOperand(OperandT&& value) { SetOperand(std::forward<OperandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of value to use when performing the evaluation.</p>
     */
    inline const Aws::String& GetOperandType() const { return m_operandType; }
    inline bool OperandTypeHasBeenSet() const { return m_operandTypeHasBeenSet; }
    template<typename OperandTypeT = Aws::String>
    void SetOperandType(OperandTypeT&& value) { m_operandTypeHasBeenSet = true; m_operandType = std::forward<OperandTypeT>(value); }
    template<typename OperandTypeT = Aws::String>
    Predicate& WithOperandType(OperandTypeT&& value) { SetOperandType(std::forward<OperandTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Predicate> m_or;
    bool m_orHasBeenSet = false;

    Aws::Vector<Predicate> m_and;
    bool m_andHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_operand;
    bool m_operandHasBeenSet = false;

    Aws::String m_operandType;
    bool m_operandTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws

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
    AWS_AMPLIFYUIBUILDER_API Predicate();
    AWS_AMPLIFYUIBUILDER_API Predicate(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Predicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline const Aws::Vector<Predicate>& GetOr() const{ return m_or; }
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }
    inline void SetOr(const Aws::Vector<Predicate>& value) { m_orHasBeenSet = true; m_or = value; }
    inline void SetOr(Aws::Vector<Predicate>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }
    inline Predicate& WithOr(const Aws::Vector<Predicate>& value) { SetOr(value); return *this;}
    inline Predicate& WithOr(Aws::Vector<Predicate>&& value) { SetOr(std::move(value)); return *this;}
    inline Predicate& AddOr(const Predicate& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }
    inline Predicate& AddOr(Predicate&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline const Aws::Vector<Predicate>& GetAnd() const{ return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    inline void SetAnd(const Aws::Vector<Predicate>& value) { m_andHasBeenSet = true; m_and = value; }
    inline void SetAnd(Aws::Vector<Predicate>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }
    inline Predicate& WithAnd(const Aws::Vector<Predicate>& value) { SetAnd(value); return *this;}
    inline Predicate& WithAnd(Aws::Vector<Predicate>&& value) { SetAnd(std::move(value)); return *this;}
    inline Predicate& AddAnd(const Predicate& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }
    inline Predicate& AddAnd(Predicate&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field to query.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }
    inline Predicate& WithField(const Aws::String& value) { SetField(value); return *this;}
    inline Predicate& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}
    inline Predicate& WithField(const char* value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }
    inline Predicate& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}
    inline Predicate& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}
    inline Predicate& WithOperator(const char* value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline const Aws::String& GetOperand() const{ return m_operand; }
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }
    inline void SetOperand(const Aws::String& value) { m_operandHasBeenSet = true; m_operand = value; }
    inline void SetOperand(Aws::String&& value) { m_operandHasBeenSet = true; m_operand = std::move(value); }
    inline void SetOperand(const char* value) { m_operandHasBeenSet = true; m_operand.assign(value); }
    inline Predicate& WithOperand(const Aws::String& value) { SetOperand(value); return *this;}
    inline Predicate& WithOperand(Aws::String&& value) { SetOperand(std::move(value)); return *this;}
    inline Predicate& WithOperand(const char* value) { SetOperand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of value to use when performing the evaluation.</p>
     */
    inline const Aws::String& GetOperandType() const{ return m_operandType; }
    inline bool OperandTypeHasBeenSet() const { return m_operandTypeHasBeenSet; }
    inline void SetOperandType(const Aws::String& value) { m_operandTypeHasBeenSet = true; m_operandType = value; }
    inline void SetOperandType(Aws::String&& value) { m_operandTypeHasBeenSet = true; m_operandType = std::move(value); }
    inline void SetOperandType(const char* value) { m_operandTypeHasBeenSet = true; m_operandType.assign(value); }
    inline Predicate& WithOperandType(const Aws::String& value) { SetOperandType(value); return *this;}
    inline Predicate& WithOperandType(Aws::String&& value) { SetOperandType(std::move(value)); return *this;}
    inline Predicate& WithOperandType(const char* value) { SetOperandType(value); return *this;}
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

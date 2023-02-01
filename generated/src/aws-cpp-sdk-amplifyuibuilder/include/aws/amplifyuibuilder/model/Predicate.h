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


    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline const Aws::Vector<Predicate>& GetAnd() const{ return m_and; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline void SetAnd(const Aws::Vector<Predicate>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline void SetAnd(Aws::Vector<Predicate>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& WithAnd(const Aws::Vector<Predicate>& value) { SetAnd(value); return *this;}

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& WithAnd(Aws::Vector<Predicate>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& AddAnd(const Predicate& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& AddAnd(Predicate&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }


    /**
     * <p>The field to query.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field to query.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to query.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to query.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to query.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field to query.</p>
     */
    inline Predicate& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field to query.</p>
     */
    inline Predicate& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field to query.</p>
     */
    inline Predicate& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline const Aws::String& GetOperand() const{ return m_operand; }

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline void SetOperand(const Aws::String& value) { m_operandHasBeenSet = true; m_operand = value; }

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline void SetOperand(Aws::String&& value) { m_operandHasBeenSet = true; m_operand = std::move(value); }

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline void SetOperand(const char* value) { m_operandHasBeenSet = true; m_operand.assign(value); }

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline Predicate& WithOperand(const Aws::String& value) { SetOperand(value); return *this;}

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline Predicate& WithOperand(Aws::String&& value) { SetOperand(std::move(value)); return *this;}

    /**
     * <p>The value to use when performing the evaluation.</p>
     */
    inline Predicate& WithOperand(const char* value) { SetOperand(value); return *this;}


    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline Predicate& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline Predicate& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}

    /**
     * <p>The operator to use to perform the evaluation.</p>
     */
    inline Predicate& WithOperator(const char* value) { SetOperator(value); return *this;}


    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline const Aws::Vector<Predicate>& GetOr() const{ return m_or; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline bool OrHasBeenSet() const { return m_orHasBeenSet; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline void SetOr(const Aws::Vector<Predicate>& value) { m_orHasBeenSet = true; m_or = value; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline void SetOr(Aws::Vector<Predicate>&& value) { m_orHasBeenSet = true; m_or = std::move(value); }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& WithOr(const Aws::Vector<Predicate>& value) { SetOr(value); return *this;}

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& WithOr(Aws::Vector<Predicate>&& value) { SetOr(std::move(value)); return *this;}

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& AddOr(const Predicate& value) { m_orHasBeenSet = true; m_or.push_back(value); return *this; }

    /**
     * <p>A list of predicates to combine logically.</p>
     */
    inline Predicate& AddOr(Predicate&& value) { m_orHasBeenSet = true; m_or.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Predicate> m_and;
    bool m_andHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_operand;
    bool m_operandHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Predicate> m_or;
    bool m_orHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws

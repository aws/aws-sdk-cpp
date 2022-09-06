/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/Value.h>
#include <aws/lexv2-runtime/model/Shape.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>A value that Amazon Lex V2 uses to fulfill an intent. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Slot">AWS
   * API Reference</a></p>
   */
  class AWS_LEXRUNTIMEV2_API Slot
  {
  public:
    Slot();
    Slot(Aws::Utils::Json::JsonView jsonValue);
    Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current value of the slot.</p>
     */
    inline const Value& GetValue() const{ return m_value; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline void SetValue(const Value& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline void SetValue(Value&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current value of the slot.</p>
     */
    inline Slot& WithValue(const Value& value) { SetValue(value); return *this;}

    /**
     * <p>The current value of the slot.</p>
     */
    inline Slot& WithValue(Value&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline const Shape& GetShape() const{ return m_shape; }

    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }

    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline void SetShape(const Shape& value) { m_shapeHasBeenSet = true; m_shape = value; }

    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline void SetShape(Shape&& value) { m_shapeHasBeenSet = true; m_shape = std::move(value); }

    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline Slot& WithShape(const Shape& value) { SetShape(value); return *this;}

    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline Slot& WithShape(Shape&& value) { SetShape(std::move(value)); return *this;}


    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline const Aws::Vector<Slot>& GetValues() const{ return m_values; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline void SetValues(const Aws::Vector<Slot>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline void SetValues(Aws::Vector<Slot>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline Slot& WithValues(const Aws::Vector<Slot>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline Slot& WithValues(Aws::Vector<Slot>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline Slot& AddValues(const Slot& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline Slot& AddValues(Slot&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Value m_value;
    bool m_valueHasBeenSet = false;

    Shape m_shape;
    bool m_shapeHasBeenSet = false;

    Aws::Vector<Slot> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws

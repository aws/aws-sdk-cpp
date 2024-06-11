/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/Value.h>
#include <aws/lexv2-runtime/model/Shape.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class Slot
  {
  public:
    AWS_LEXRUNTIMEV2_API Slot();
    AWS_LEXRUNTIMEV2_API Slot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current value of the slot.</p>
     */
    inline const Value& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Value& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Value&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline Slot& WithValue(const Value& value) { SetValue(value); return *this;}
    inline Slot& WithValue(Value&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline const Shape& GetShape() const{ return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    inline void SetShape(const Shape& value) { m_shapeHasBeenSet = true; m_shape = value; }
    inline void SetShape(Shape&& value) { m_shapeHasBeenSet = true; m_shape = std::move(value); }
    inline Slot& WithShape(const Shape& value) { SetShape(value); return *this;}
    inline Slot& WithShape(Shape&& value) { SetShape(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline const Aws::Vector<Slot>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Slot>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Slot>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline Slot& WithValues(const Aws::Vector<Slot>& value) { SetValues(value); return *this;}
    inline Slot& WithValues(Aws::Vector<Slot>&& value) { SetValues(std::move(value)); return *this;}
    inline Slot& AddValues(const Slot& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline Slot& AddValues(Slot&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The constituent sub slots of a composite slot.</p>
     */
    inline const Aws::Map<Aws::String, Slot>& GetSubSlots() const{ return m_subSlots; }
    inline bool SubSlotsHasBeenSet() const { return m_subSlotsHasBeenSet; }
    inline void SetSubSlots(const Aws::Map<Aws::String, Slot>& value) { m_subSlotsHasBeenSet = true; m_subSlots = value; }
    inline void SetSubSlots(Aws::Map<Aws::String, Slot>&& value) { m_subSlotsHasBeenSet = true; m_subSlots = std::move(value); }
    inline Slot& WithSubSlots(const Aws::Map<Aws::String, Slot>& value) { SetSubSlots(value); return *this;}
    inline Slot& WithSubSlots(Aws::Map<Aws::String, Slot>&& value) { SetSubSlots(std::move(value)); return *this;}
    inline Slot& AddSubSlots(const Aws::String& key, const Slot& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, value); return *this; }
    inline Slot& AddSubSlots(Aws::String&& key, const Slot& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(std::move(key), value); return *this; }
    inline Slot& AddSubSlots(const Aws::String& key, Slot&& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, std::move(value)); return *this; }
    inline Slot& AddSubSlots(Aws::String&& key, Slot&& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(std::move(key), std::move(value)); return *this; }
    inline Slot& AddSubSlots(const char* key, Slot&& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, std::move(value)); return *this; }
    inline Slot& AddSubSlots(const char* key, const Slot& value) { m_subSlotsHasBeenSet = true; m_subSlots.emplace(key, value); return *this; }
    ///@}
  private:

    Value m_value;
    bool m_valueHasBeenSet = false;

    Shape m_shape;
    bool m_shapeHasBeenSet = false;

    Aws::Vector<Slot> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Map<Aws::String, Slot> m_subSlots;
    bool m_subSlotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws

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
    AWS_LEXRUNTIMEV2_API Slot() = default;
    AWS_LEXRUNTIMEV2_API Slot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current value of the slot.</p>
     */
    inline const Value& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Value>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Value>
    Slot& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>shape</code> value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline Shape GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    inline void SetShape(Shape value) { m_shapeHasBeenSet = true; m_shape = value; }
    inline Slot& WithShape(Shape value) { SetShape(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, if a for a slot that elicits pizza toppings, the values might be
     * "pepperoni" and "pineapple." </p>
     */
    inline const Aws::Vector<Slot>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Slot>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Slot>>
    Slot& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Slot>
    Slot& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The constituent sub slots of a composite slot.</p>
     */
    inline const Aws::Map<Aws::String, Slot>& GetSubSlots() const { return m_subSlots; }
    inline bool SubSlotsHasBeenSet() const { return m_subSlotsHasBeenSet; }
    template<typename SubSlotsT = Aws::Map<Aws::String, Slot>>
    void SetSubSlots(SubSlotsT&& value) { m_subSlotsHasBeenSet = true; m_subSlots = std::forward<SubSlotsT>(value); }
    template<typename SubSlotsT = Aws::Map<Aws::String, Slot>>
    Slot& WithSubSlots(SubSlotsT&& value) { SetSubSlots(std::forward<SubSlotsT>(value)); return *this;}
    template<typename SubSlotsKeyT = Aws::String, typename SubSlotsValueT = Slot>
    Slot& AddSubSlots(SubSlotsKeyT&& key, SubSlotsValueT&& value) {
      m_subSlotsHasBeenSet = true; m_subSlots.emplace(std::forward<SubSlotsKeyT>(key), std::forward<SubSlotsValueT>(value)); return *this;
    }
    ///@}
  private:

    Value m_value;
    bool m_valueHasBeenSet = false;

    Shape m_shape{Shape::NOT_SET};
    bool m_shapeHasBeenSet = false;

    Aws::Vector<Slot> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Map<Aws::String, Slot> m_subSlots;
    bool m_subSlotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws

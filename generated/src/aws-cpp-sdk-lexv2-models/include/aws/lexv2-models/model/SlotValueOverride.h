/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotShape.h>
#include <aws/lexv2-models/model/SlotValue.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The slot values that Amazon Lex uses when it sets slot values in a dialog
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValueOverride">AWS
   * API Reference</a></p>
   */
  class SlotValueOverride
  {
  public:
    AWS_LEXMODELSV2_API SlotValueOverride() = default;
    AWS_LEXMODELSV2_API SlotValueOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValueOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline SlotShape GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    inline void SetShape(SlotShape value) { m_shapeHasBeenSet = true; m_shape = value; }
    inline SlotValueOverride& WithShape(SlotShape value) { SetShape(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value of the slot.</p>
     */
    inline const SlotValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = SlotValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = SlotValue>
    SlotValueOverride& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline const Aws::Vector<SlotValueOverride>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<SlotValueOverride>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<SlotValueOverride>>
    SlotValueOverride& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = SlotValueOverride>
    SlotValueOverride& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    SlotShape m_shape{SlotShape::NOT_SET};
    bool m_shapeHasBeenSet = false;

    SlotValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<SlotValueOverride> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

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
    AWS_LEXMODELSV2_API SlotValueOverride();
    AWS_LEXMODELSV2_API SlotValueOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValueOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline const SlotShape& GetShape() const{ return m_shape; }

    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }

    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline void SetShape(const SlotShape& value) { m_shapeHasBeenSet = true; m_shape = value; }

    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline void SetShape(SlotShape&& value) { m_shapeHasBeenSet = true; m_shape = std::move(value); }

    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline SlotValueOverride& WithShape(const SlotShape& value) { SetShape(value); return *this;}

    /**
     * <p>When the shape value is <code>List</code>, it indicates that the
     * <code>values</code> field contains a list of slot values. When the value is
     * <code>Scalar</code>, it indicates that the <code>value</code> field contains a
     * single value.</p>
     */
    inline SlotValueOverride& WithShape(SlotShape&& value) { SetShape(std::move(value)); return *this;}


    /**
     * <p>The current value of the slot.</p>
     */
    inline const SlotValue& GetValue() const{ return m_value; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline void SetValue(const SlotValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current value of the slot.</p>
     */
    inline void SetValue(SlotValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current value of the slot.</p>
     */
    inline SlotValueOverride& WithValue(const SlotValue& value) { SetValue(value); return *this;}

    /**
     * <p>The current value of the slot.</p>
     */
    inline SlotValueOverride& WithValue(SlotValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline const Aws::Vector<SlotValueOverride>& GetValues() const{ return m_values; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline void SetValues(const Aws::Vector<SlotValueOverride>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline void SetValues(Aws::Vector<SlotValueOverride>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline SlotValueOverride& WithValues(const Aws::Vector<SlotValueOverride>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline SlotValueOverride& WithValues(Aws::Vector<SlotValueOverride>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline SlotValueOverride& AddValues(const SlotValueOverride& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of one or more values that the user provided for the slot. For
     * example, for a slot that elicits pizza toppings, the values might be "pepperoni"
     * and "pineapple."</p>
     */
    inline SlotValueOverride& AddValues(SlotValueOverride&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    SlotShape m_shape;
    bool m_shapeHasBeenSet = false;

    SlotValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<SlotValueOverride> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotFilterOperator.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Filters the response from the <code>ListSlots</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotFilter">AWS
   * API Reference</a></p>
   */
  class SlotFilter
  {
  public:
    AWS_LEXMODELSV2_API SlotFilter() = default;
    AWS_LEXMODELSV2_API SlotFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline SlotFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SlotFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SlotFilter& WithName(SlotFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to use to filter the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SlotFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SlotFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListSlots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListSlots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline SlotFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(SlotFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SlotFilter& WithOperator(SlotFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    SlotFilterName m_name{SlotFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    SlotFilterOperator m_operator{SlotFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

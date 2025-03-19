/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/IntentFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/IntentFilterOperator.h>
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
   * <p>Filters the response from the <code>ListIntents</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentFilter">AWS
   * API Reference</a></p>
   */
  class IntentFilter
  {
  public:
    AWS_LEXMODELSV2_API IntentFilter() = default;
    AWS_LEXMODELSV2_API IntentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline IntentFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(IntentFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline IntentFilter& WithName(IntentFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to use for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    IntentFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    IntentFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline IntentFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(IntentFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline IntentFilter& WithOperator(IntentFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    IntentFilterName m_name{IntentFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    IntentFilterOperator m_operator{IntentFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

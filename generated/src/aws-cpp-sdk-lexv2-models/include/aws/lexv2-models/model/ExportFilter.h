/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ExportFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ExportFilterOperator.h>
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
   * <p>Filters the response form the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListExports.html">ListExports</a>
   * operation</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ExportFilter">AWS
   * API Reference</a></p>
   */
  class ExportFilter
  {
  public:
    AWS_LEXMODELSV2_API ExportFilter() = default;
    AWS_LEXMODELSV2_API ExportFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline ExportFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ExportFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ExportFilter& WithName(ExportFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ExportFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ExportFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListExports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListExports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline ExportFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ExportFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline ExportFilter& WithOperator(ExportFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    ExportFilterName m_name{ExportFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ExportFilterOperator m_operator{ExportFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

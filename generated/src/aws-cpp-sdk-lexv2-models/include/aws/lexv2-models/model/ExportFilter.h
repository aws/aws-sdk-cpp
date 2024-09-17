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
    AWS_LEXMODELSV2_API ExportFilter();
    AWS_LEXMODELSV2_API ExportFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline const ExportFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const ExportFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(ExportFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline ExportFilter& WithName(const ExportFilterName& value) { SetName(value); return *this;}
    inline ExportFilter& WithName(ExportFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline ExportFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline ExportFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline ExportFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline ExportFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline ExportFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListExports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListExports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline const ExportFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const ExportFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(ExportFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline ExportFilter& WithOperator(const ExportFilterOperator& value) { SetOperator(value); return *this;}
    inline ExportFilter& WithOperator(ExportFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    ExportFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ExportFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ImportFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ImportFilterOperator.h>
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
   * <p>Filters the response from the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListImports.html">ListImports</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ImportFilter">AWS
   * API Reference</a></p>
   */
  class ImportFilter
  {
  public:
    AWS_LEXMODELSV2_API ImportFilter();
    AWS_LEXMODELSV2_API ImportFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ImportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline const ImportFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline void SetName(const ImportFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline void SetName(ImportFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline ImportFilter& WithName(const ImportFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field to use for filtering.</p>
     */
    inline ImportFilter& WithName(ImportFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline ImportFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline ImportFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline ImportFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline ImportFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values to use to filter the response. The values must be
     * <code>Bot</code>, <code>BotLocale</code>, or <code>CustomVocabulary</code>.</p>
     */
    inline ImportFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListImports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListImports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline const ImportFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListImports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListImports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListImports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListImports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline void SetOperator(const ImportFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListImports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListImports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline void SetOperator(ImportFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListImports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListImports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline ImportFilter& WithOperator(const ImportFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use for the filter. Specify EQ when the
     * <code>ListImports</code> operation should return only resource types that equal
     * the specified value. Specify CO when the <code>ListImports</code> operation
     * should return resource types that contain the specified value.</p>
     */
    inline ImportFilter& WithOperator(ImportFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    ImportFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    ImportFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

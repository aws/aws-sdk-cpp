/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AggregatedUtterancesFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AggregatedUtterancesFilterOperator.h>
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
   * <p>Filters responses returned by the <code>ListAggregatedUtterances</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AggregatedUtterancesFilter">AWS
   * API Reference</a></p>
   */
  class AggregatedUtterancesFilter
  {
  public:
    AWS_LEXMODELSV2_API AggregatedUtterancesFilter();
    AWS_LEXMODELSV2_API AggregatedUtterancesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AggregatedUtterancesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field to filter the utterance list.</p>
     */
    inline const AggregatedUtterancesFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the field to filter the utterance list.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field to filter the utterance list.</p>
     */
    inline void SetName(const AggregatedUtterancesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field to filter the utterance list.</p>
     */
    inline void SetName(AggregatedUtterancesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field to filter the utterance list.</p>
     */
    inline AggregatedUtterancesFilter& WithName(const AggregatedUtterancesFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field to filter the utterance list.</p>
     */
    inline AggregatedUtterancesFilter& WithName(AggregatedUtterancesFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline AggregatedUtterancesFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline AggregatedUtterancesFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline AggregatedUtterancesFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline AggregatedUtterancesFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline AggregatedUtterancesFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListAggregatedUtterances</code> operation should return only utterances
     * that equal the specified value. Specify <code>CO</code> when the
     * <code>ListAggregatedUtterances</code> operation should return utterances that
     * contain the specified value.</p>
     */
    inline const AggregatedUtterancesFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListAggregatedUtterances</code> operation should return only utterances
     * that equal the specified value. Specify <code>CO</code> when the
     * <code>ListAggregatedUtterances</code> operation should return utterances that
     * contain the specified value.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListAggregatedUtterances</code> operation should return only utterances
     * that equal the specified value. Specify <code>CO</code> when the
     * <code>ListAggregatedUtterances</code> operation should return utterances that
     * contain the specified value.</p>
     */
    inline void SetOperator(const AggregatedUtterancesFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListAggregatedUtterances</code> operation should return only utterances
     * that equal the specified value. Specify <code>CO</code> when the
     * <code>ListAggregatedUtterances</code> operation should return utterances that
     * contain the specified value.</p>
     */
    inline void SetOperator(AggregatedUtterancesFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListAggregatedUtterances</code> operation should return only utterances
     * that equal the specified value. Specify <code>CO</code> when the
     * <code>ListAggregatedUtterances</code> operation should return utterances that
     * contain the specified value.</p>
     */
    inline AggregatedUtterancesFilter& WithOperator(const AggregatedUtterancesFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListAggregatedUtterances</code> operation should return only utterances
     * that equal the specified value. Specify <code>CO</code> when the
     * <code>ListAggregatedUtterances</code> operation should return utterances that
     * contain the specified value.</p>
     */
    inline AggregatedUtterancesFilter& WithOperator(AggregatedUtterancesFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    AggregatedUtterancesFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    AggregatedUtterancesFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

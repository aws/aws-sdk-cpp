﻿/**
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
  class AWS_LEXMODELSV2_API IntentFilter
  {
  public:
    IntentFilter();
    IntentFilter(Aws::Utils::Json::JsonView jsonValue);
    IntentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline const IntentFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline void SetName(const IntentFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline void SetName(IntentFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline IntentFilter& WithName(const IntentFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field to use for the filter.</p>
     */
    inline IntentFilter& WithName(IntentFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value to use for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline IntentFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value to use for the filter.</p>
     */
    inline IntentFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value to use for the filter.</p>
     */
    inline IntentFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline IntentFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline IntentFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline const IntentFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline void SetOperator(const IntentFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline void SetOperator(IntentFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline IntentFilter& WithOperator(const IntentFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListIntents</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListIntents</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline IntentFilter& WithOperator(IntentFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    IntentFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    IntentFilterOperator m_operator;
    bool m_operatorHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

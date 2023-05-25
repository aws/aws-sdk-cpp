/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotFilterOperator.h>
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
   * <p>Filters the responses returned by the <code>ListBots</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotFilter">AWS
   * API Reference</a></p>
   */
  class BotFilter
  {
  public:
    AWS_LEXMODELSV2_API BotFilter();
    AWS_LEXMODELSV2_API BotFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline const BotFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline void SetName(const BotFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline void SetName(BotFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline BotFilter& WithName(const BotFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline BotFilter& WithName(BotFilterName&& value) { SetName(std::move(value)); return *this;}


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
    inline BotFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline BotFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline BotFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline BotFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline BotFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline const BotFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline void SetOperator(const BotFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline void SetOperator(BotFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline BotFilter& WithOperator(const BotFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBots</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBots</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline BotFilter& WithOperator(BotFilterOperator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    BotFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    BotFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

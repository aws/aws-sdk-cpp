/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotLocaleSortAttribute.h>
#include <aws/lexv2-models/model/SortOrder.h>
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
   * <p>Specifies attributes for sorting a list of bot locales.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleSortBy">AWS
   * API Reference</a></p>
   */
  class BotLocaleSortBy
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleSortBy();
    AWS_LEXMODELSV2_API BotLocaleSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bot locale attribute to sort by.</p>
     */
    inline const BotLocaleSortAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The bot locale attribute to sort by.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The bot locale attribute to sort by.</p>
     */
    inline void SetAttribute(const BotLocaleSortAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The bot locale attribute to sort by.</p>
     */
    inline void SetAttribute(BotLocaleSortAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The bot locale attribute to sort by.</p>
     */
    inline BotLocaleSortBy& WithAttribute(const BotLocaleSortAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The bot locale attribute to sort by.</p>
     */
    inline BotLocaleSortBy& WithAttribute(BotLocaleSortAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to sort the bot locales in ascending or descending
     * order.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>Specifies whether to sort the bot locales in ascending or descending
     * order.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Specifies whether to sort the bot locales in ascending or descending
     * order.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Specifies whether to sort the bot locales in ascending or descending
     * order.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>Specifies whether to sort the bot locales in ascending or descending
     * order.</p>
     */
    inline BotLocaleSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the bot locales in ascending or descending
     * order.</p>
     */
    inline BotLocaleSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    BotLocaleSortAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

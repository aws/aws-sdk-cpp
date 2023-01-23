/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotSortAttribute.h>
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
   * <p>Specifies attributes for sorting a list of bots.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotSortBy">AWS
   * API Reference</a></p>
   */
  class BotSortBy
  {
  public:
    AWS_LEXMODELSV2_API BotSortBy();
    AWS_LEXMODELSV2_API BotSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute to use to sort the list of bots.</p>
     */
    inline const BotSortAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to use to sort the list of bots.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute to use to sort the list of bots.</p>
     */
    inline void SetAttribute(const BotSortAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to use to sort the list of bots.</p>
     */
    inline void SetAttribute(BotSortAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to use to sort the list of bots.</p>
     */
    inline BotSortBy& WithAttribute(const BotSortAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to use to sort the list of bots.</p>
     */
    inline BotSortBy& WithAttribute(BotSortAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline BotSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline BotSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    BotSortAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

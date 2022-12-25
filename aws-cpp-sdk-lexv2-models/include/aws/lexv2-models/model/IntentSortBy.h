/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/IntentSortAttribute.h>
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
   * <p>Specifies attributes for sorting a list of intents.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentSortBy">AWS
   * API Reference</a></p>
   */
  class IntentSortBy
  {
  public:
    AWS_LEXMODELSV2_API IntentSortBy();
    AWS_LEXMODELSV2_API IntentSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute to use to sort the list of intents.</p>
     */
    inline const IntentSortAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute to use to sort the list of intents.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute to use to sort the list of intents.</p>
     */
    inline void SetAttribute(const IntentSortAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute to use to sort the list of intents.</p>
     */
    inline void SetAttribute(IntentSortAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute to use to sort the list of intents.</p>
     */
    inline IntentSortBy& WithAttribute(const IntentSortAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute to use to sort the list of intents.</p>
     */
    inline IntentSortBy& WithAttribute(IntentSortAttribute&& value) { SetAttribute(std::move(value)); return *this;}


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
    inline IntentSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline IntentSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    IntentSortAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

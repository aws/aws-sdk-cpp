/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotTypeSortAttribute.h>
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
   * <p>Specifies attributes for sorting a list of slot types.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotTypeSortBy">AWS
   * API Reference</a></p>
   */
  class SlotTypeSortBy
  {
  public:
    AWS_LEXMODELSV2_API SlotTypeSortBy() = default;
    AWS_LEXMODELSV2_API SlotTypeSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotTypeSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute to use to sort the list of slot types.</p>
     */
    inline SlotTypeSortAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(SlotTypeSortAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline SlotTypeSortBy& WithAttribute(SlotTypeSortAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort the list. You can say ascending or descending.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline SlotTypeSortBy& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    SlotTypeSortAttribute m_attribute{SlotTypeSortAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

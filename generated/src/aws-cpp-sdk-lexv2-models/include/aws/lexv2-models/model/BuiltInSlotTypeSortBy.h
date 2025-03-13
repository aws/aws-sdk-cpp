/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BuiltInSlotTypeSortAttribute.h>
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
   * <p>Specifies attributes for sorting a list of built-in slot types.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuiltInSlotTypeSortBy">AWS
   * API Reference</a></p>
   */
  class BuiltInSlotTypeSortBy
  {
  public:
    AWS_LEXMODELSV2_API BuiltInSlotTypeSortBy() = default;
    AWS_LEXMODELSV2_API BuiltInSlotTypeSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuiltInSlotTypeSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute to use to sort the list of built-in intents.</p>
     */
    inline BuiltInSlotTypeSortAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(BuiltInSlotTypeSortAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline BuiltInSlotTypeSortBy& WithAttribute(BuiltInSlotTypeSortAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort the list. You can choose ascending or descending.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline BuiltInSlotTypeSortBy& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    BuiltInSlotTypeSortAttribute m_attribute{BuiltInSlotTypeSortAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

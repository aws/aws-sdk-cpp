/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/AggregationOutputItem.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The aggregation for an attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AggregationOutput">AWS
   * API Reference</a></p>
   */
  class AggregationOutput
  {
  public:
    AWS_DATAZONE_API AggregationOutput() = default;
    AWS_DATAZONE_API AggregationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AggregationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute for this aggregation.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    AggregationOutput& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display value of the aggregation output item.</p>
     */
    inline const Aws::String& GetDisplayValue() const { return m_displayValue; }
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }
    template<typename DisplayValueT = Aws::String>
    void SetDisplayValue(DisplayValueT&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::forward<DisplayValueT>(value); }
    template<typename DisplayValueT = Aws::String>
    AggregationOutput& WithDisplayValue(DisplayValueT&& value) { SetDisplayValue(std::forward<DisplayValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aggregation output items.</p>
     */
    inline const Aws::Vector<AggregationOutputItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<AggregationOutputItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<AggregationOutputItem>>
    AggregationOutput& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = AggregationOutputItem>
    AggregationOutput& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_displayValue;
    bool m_displayValueHasBeenSet = false;

    Aws::Vector<AggregationOutputItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

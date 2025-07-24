/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>An aggregation list item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AggregationListItem">AWS
   * API Reference</a></p>
   */
  class AggregationListItem
  {
  public:
    AWS_DATAZONE_API AggregationListItem() = default;
    AWS_DATAZONE_API AggregationListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AggregationListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An attribute on which to compute aggregations.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    AggregationListItem& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display value of the aggregation list item. Supported values include
     * <code>value</code> and <code>glossaryTerm.name</code>.</p>
     */
    inline const Aws::String& GetDisplayValue() const { return m_displayValue; }
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }
    template<typename DisplayValueT = Aws::String>
    void SetDisplayValue(DisplayValueT&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::forward<DisplayValueT>(value); }
    template<typename DisplayValueT = Aws::String>
    AggregationListItem& WithDisplayValue(DisplayValueT&& value) { SetDisplayValue(std::forward<DisplayValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_displayValue;
    bool m_displayValueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

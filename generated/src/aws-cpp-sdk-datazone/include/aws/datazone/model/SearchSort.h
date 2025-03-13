/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SortOrder.h>
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
   * <p>The details of the way to sort search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchSort">AWS
   * API Reference</a></p>
   */
  class SearchSort
  {
  public:
    AWS_DATAZONE_API SearchSort() = default;
    AWS_DATAZONE_API SearchSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    SearchSort& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline SortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(SortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline SearchSort& WithOrder(SortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order{SortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

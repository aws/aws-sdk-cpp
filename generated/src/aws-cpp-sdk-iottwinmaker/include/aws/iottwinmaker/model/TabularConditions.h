/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/OrderBy.h>
#include <aws/iottwinmaker/model/PropertyFilter.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The tabular conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/TabularConditions">AWS
   * API Reference</a></p>
   */
  class TabularConditions
  {
  public:
    AWS_IOTTWINMAKER_API TabularConditions() = default;
    AWS_IOTTWINMAKER_API TabularConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API TabularConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline const Aws::Vector<OrderBy>& GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    template<typename OrderByT = Aws::Vector<OrderBy>>
    void SetOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy = std::forward<OrderByT>(value); }
    template<typename OrderByT = Aws::Vector<OrderBy>>
    TabularConditions& WithOrderBy(OrderByT&& value) { SetOrderBy(std::forward<OrderByT>(value)); return *this;}
    template<typename OrderByT = OrderBy>
    TabularConditions& AddOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy.emplace_back(std::forward<OrderByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline const Aws::Vector<PropertyFilter>& GetPropertyFilters() const { return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    template<typename PropertyFiltersT = Aws::Vector<PropertyFilter>>
    void SetPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::forward<PropertyFiltersT>(value); }
    template<typename PropertyFiltersT = Aws::Vector<PropertyFilter>>
    TabularConditions& WithPropertyFilters(PropertyFiltersT&& value) { SetPropertyFilters(std::forward<PropertyFiltersT>(value)); return *this;}
    template<typename PropertyFiltersT = PropertyFilter>
    TabularConditions& AddPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.emplace_back(std::forward<PropertyFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<OrderBy> m_orderBy;
    bool m_orderByHasBeenSet = false;

    Aws::Vector<PropertyFilter> m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

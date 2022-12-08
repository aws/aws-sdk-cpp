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
    AWS_IOTTWINMAKER_API TabularConditions();
    AWS_IOTTWINMAKER_API TabularConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API TabularConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline const Aws::Vector<OrderBy>& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline void SetOrderBy(const Aws::Vector<OrderBy>& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline void SetOrderBy(Aws::Vector<OrderBy>&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline TabularConditions& WithOrderBy(const Aws::Vector<OrderBy>& value) { SetOrderBy(value); return *this;}

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline TabularConditions& WithOrderBy(Aws::Vector<OrderBy>&& value) { SetOrderBy(std::move(value)); return *this;}

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline TabularConditions& AddOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy.push_back(value); return *this; }

    /**
     * <p>Filter criteria that orders the output. It can be sorted in ascending or
     * descending order.</p>
     */
    inline TabularConditions& AddOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy.push_back(std::move(value)); return *this; }


    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline const Aws::Vector<PropertyFilter>& GetPropertyFilters() const{ return m_propertyFilters; }

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline void SetPropertyFilters(const Aws::Vector<PropertyFilter>& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline void SetPropertyFilters(Aws::Vector<PropertyFilter>&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline TabularConditions& WithPropertyFilters(const Aws::Vector<PropertyFilter>& value) { SetPropertyFilters(value); return *this;}

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline TabularConditions& WithPropertyFilters(Aws::Vector<PropertyFilter>&& value) { SetPropertyFilters(std::move(value)); return *this;}

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline TabularConditions& AddPropertyFilters(const PropertyFilter& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.push_back(value); return *this; }

    /**
     * <p>You can filter the request using various logical operators and a key-value
     * format. For example:</p> <p> <code>{"key": "serverType", "value":
     * "webServer"}</code> </p>
     */
    inline TabularConditions& AddPropertyFilters(PropertyFilter&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OrderBy> m_orderBy;
    bool m_orderByHasBeenSet = false;

    Aws::Vector<PropertyFilter> m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

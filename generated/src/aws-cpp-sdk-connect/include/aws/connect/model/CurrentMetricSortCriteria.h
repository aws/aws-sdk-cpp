/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CurrentMetricName.h>
#include <aws/connect/model/SortOrder.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The way to sort the resulting response based on metrics. By default resources
   * are sorted based on <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The
   * metric collection is sorted based on the input metrics.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CurrentMetricSortCriteria">AWS
   * API Reference</a></p>
   */
  class CurrentMetricSortCriteria
  {
  public:
    AWS_CONNECT_API CurrentMetricSortCriteria();
    AWS_CONNECT_API CurrentMetricSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CurrentMetricSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CurrentMetricName& GetSortByMetric() const{ return m_sortByMetric; }

    
    inline bool SortByMetricHasBeenSet() const { return m_sortByMetricHasBeenSet; }

    
    inline void SetSortByMetric(const CurrentMetricName& value) { m_sortByMetricHasBeenSet = true; m_sortByMetric = value; }

    
    inline void SetSortByMetric(CurrentMetricName&& value) { m_sortByMetricHasBeenSet = true; m_sortByMetric = std::move(value); }

    
    inline CurrentMetricSortCriteria& WithSortByMetric(const CurrentMetricName& value) { SetSortByMetric(value); return *this;}

    
    inline CurrentMetricSortCriteria& WithSortByMetric(CurrentMetricName&& value) { SetSortByMetric(std::move(value)); return *this;}


    /**
     * <p>The way to sort.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The way to sort.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The way to sort.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The way to sort.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The way to sort.</p>
     */
    inline CurrentMetricSortCriteria& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The way to sort.</p>
     */
    inline CurrentMetricSortCriteria& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    CurrentMetricName m_sortByMetric;
    bool m_sortByMetricHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

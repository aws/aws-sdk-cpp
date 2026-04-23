/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/DimensionGroup.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>A single query to be processed. You must provide the metric to query. If no
   * other parameters are specified, Performance Insights returns all of the data
   * points for that metric. You can optionally request that the data points be
   * aggregated by dimension group ( <code>GroupBy</code>), and return only those
   * data points that match your criteria (<code>Filter</code>).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/MetricQuery">AWS API
   * Reference</a></p>
   */
  class AWS_PI_API MetricQuery
  {
  public:
    MetricQuery();
    MetricQuery(Aws::Utils::Json::JsonView jsonValue);
    MetricQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline MetricQuery& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline MetricQuery& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline MetricQuery& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline const DimensionGroup& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline void SetGroupBy(const DimensionGroup& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline void SetGroupBy(DimensionGroup&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline MetricQuery& WithGroupBy(const DimensionGroup& value) { SetGroupBy(value); return *this;}

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline MetricQuery& WithGroupBy(DimensionGroup&& value) { SetGroupBy(std::move(value)); return *this;}


    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilter() const{ return m_filter; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline void SetFilter(const Aws::Map<Aws::String, Aws::String>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline void SetFilter(Aws::Map<Aws::String, Aws::String>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& WithFilter(const Aws::Map<Aws::String, Aws::String>& value) { SetFilter(value); return *this;}

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& WithFilter(Aws::Map<Aws::String, Aws::String>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(const Aws::String& key, const Aws::String& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(Aws::String&& key, const Aws::String& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(const Aws::String& key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(Aws::String&& key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(const char* key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(Aws::String&& key, const char* value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>
     */
    inline MetricQuery& AddFilter(const char* key, const char* value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    DimensionGroup m_groupBy;
    bool m_groupByHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_filter;
    bool m_filterHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

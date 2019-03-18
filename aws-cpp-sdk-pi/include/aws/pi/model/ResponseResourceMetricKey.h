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
   * <p>An object describing a Performance Insights metric and one or more dimensions
   * for that metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ResponseResourceMetricKey">AWS
   * API Reference</a></p>
   */
  class AWS_PI_API ResponseResourceMetricKey
  {
  public:
    ResponseResourceMetricKey();
    ResponseResourceMetricKey(Aws::Utils::Json::JsonView jsonValue);
    ResponseResourceMetricKey& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ResponseResourceMetricKey& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline ResponseResourceMetricKey& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - a
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - the raw number of
     * active sessions for the database engine.</p> </li> </ul>
     */
    inline ResponseResourceMetricKey& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline ResponseResourceMetricKey& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

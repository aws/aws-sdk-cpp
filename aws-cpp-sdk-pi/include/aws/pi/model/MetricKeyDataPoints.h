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
#include <aws/pi/model/ResponseResourceMetricKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/DataPoint.h>
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
   * <p>A time-ordered series of data points, correpsonding to a dimension of a
   * Performance Insights metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/MetricKeyDataPoints">AWS
   * API Reference</a></p>
   */
  class AWS_PI_API MetricKeyDataPoints
  {
  public:
    MetricKeyDataPoints();
    MetricKeyDataPoints(Aws::Utils::Json::JsonView jsonValue);
    MetricKeyDataPoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimension(s) to which the data points apply.</p>
     */
    inline const ResponseResourceMetricKey& GetKey() const{ return m_key; }

    /**
     * <p>The dimension(s) to which the data points apply.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The dimension(s) to which the data points apply.</p>
     */
    inline void SetKey(const ResponseResourceMetricKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The dimension(s) to which the data points apply.</p>
     */
    inline void SetKey(ResponseResourceMetricKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The dimension(s) to which the data points apply.</p>
     */
    inline MetricKeyDataPoints& WithKey(const ResponseResourceMetricKey& value) { SetKey(value); return *this;}

    /**
     * <p>The dimension(s) to which the data points apply.</p>
     */
    inline MetricKeyDataPoints& WithKey(ResponseResourceMetricKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline const Aws::Vector<DataPoint>& GetDataPoints() const{ return m_dataPoints; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline bool DataPointsHasBeenSet() const { return m_dataPointsHasBeenSet; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline void SetDataPoints(const Aws::Vector<DataPoint>& value) { m_dataPointsHasBeenSet = true; m_dataPoints = value; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline void SetDataPoints(Aws::Vector<DataPoint>&& value) { m_dataPointsHasBeenSet = true; m_dataPoints = std::move(value); }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& WithDataPoints(const Aws::Vector<DataPoint>& value) { SetDataPoints(value); return *this;}

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& WithDataPoints(Aws::Vector<DataPoint>&& value) { SetDataPoints(std::move(value)); return *this;}

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& AddDataPoints(const DataPoint& value) { m_dataPointsHasBeenSet = true; m_dataPoints.push_back(value); return *this; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& AddDataPoints(DataPoint&& value) { m_dataPointsHasBeenSet = true; m_dataPoints.push_back(std::move(value)); return *this; }

  private:

    ResponseResourceMetricKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<DataPoint> m_dataPoints;
    bool m_dataPointsHasBeenSet;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

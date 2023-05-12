/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ThresholdV2.h>
#include <aws/connect/model/MetricFilterV2.h>
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
   * <p>Contains information about the metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricV2">AWS
   * API Reference</a></p>
   */
  class MetricV2
  {
  public:
    AWS_CONNECT_API MetricV2();
    AWS_CONNECT_API MetricV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline MetricV2& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline MetricV2& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline MetricV2& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline const Aws::Vector<ThresholdV2>& GetThreshold() const{ return m_threshold; }

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline void SetThreshold(const Aws::Vector<ThresholdV2>& value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline void SetThreshold(Aws::Vector<ThresholdV2>&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline MetricV2& WithThreshold(const Aws::Vector<ThresholdV2>& value) { SetThreshold(value); return *this;}

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline MetricV2& WithThreshold(Aws::Vector<ThresholdV2>&& value) { SetThreshold(std::move(value)); return *this;}

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline MetricV2& AddThreshold(const ThresholdV2& value) { m_thresholdHasBeenSet = true; m_threshold.push_back(value); return *this; }

    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline MetricV2& AddThreshold(ThresholdV2&& value) { m_thresholdHasBeenSet = true; m_threshold.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline const Aws::Vector<MetricFilterV2>& GetMetricFilters() const{ return m_metricFilters; }

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline bool MetricFiltersHasBeenSet() const { return m_metricFiltersHasBeenSet; }

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline void SetMetricFilters(const Aws::Vector<MetricFilterV2>& value) { m_metricFiltersHasBeenSet = true; m_metricFilters = value; }

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline void SetMetricFilters(Aws::Vector<MetricFilterV2>&& value) { m_metricFiltersHasBeenSet = true; m_metricFilters = std::move(value); }

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline MetricV2& WithMetricFilters(const Aws::Vector<MetricFilterV2>& value) { SetMetricFilters(value); return *this;}

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline MetricV2& WithMetricFilters(Aws::Vector<MetricFilterV2>&& value) { SetMetricFilters(std::move(value)); return *this;}

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline MetricV2& AddMetricFilters(const MetricFilterV2& value) { m_metricFiltersHasBeenSet = true; m_metricFilters.push_back(value); return *this; }

    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline MetricV2& AddMetricFilters(MetricFilterV2&& value) { m_metricFiltersHasBeenSet = true; m_metricFilters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ThresholdV2> m_threshold;
    bool m_thresholdHasBeenSet = false;

    Aws::Vector<MetricFilterV2> m_metricFilters;
    bool m_metricFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

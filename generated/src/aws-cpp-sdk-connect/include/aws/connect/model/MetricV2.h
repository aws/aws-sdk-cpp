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
    AWS_CONNECT_API MetricV2() = default;
    AWS_CONNECT_API MetricV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MetricV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>  <p>This parameter is required. The
     * following Required = No is incorrect.</p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricV2& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the threshold for service level metrics.</p>
     */
    inline const Aws::Vector<ThresholdV2>& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Aws::Vector<ThresholdV2>>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Aws::Vector<ThresholdV2>>
    MetricV2& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    template<typename ThresholdT = ThresholdV2>
    MetricV2& AddThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold.emplace_back(std::forward<ThresholdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the filters to be used when returning data.</p>
     */
    inline const Aws::Vector<MetricFilterV2>& GetMetricFilters() const { return m_metricFilters; }
    inline bool MetricFiltersHasBeenSet() const { return m_metricFiltersHasBeenSet; }
    template<typename MetricFiltersT = Aws::Vector<MetricFilterV2>>
    void SetMetricFilters(MetricFiltersT&& value) { m_metricFiltersHasBeenSet = true; m_metricFilters = std::forward<MetricFiltersT>(value); }
    template<typename MetricFiltersT = Aws::Vector<MetricFilterV2>>
    MetricV2& WithMetricFilters(MetricFiltersT&& value) { SetMetricFilters(std::forward<MetricFiltersT>(value)); return *this;}
    template<typename MetricFiltersT = MetricFilterV2>
    MetricV2& AddMetricFilters(MetricFiltersT&& value) { m_metricFiltersHasBeenSet = true; m_metricFilters.emplace_back(std::forward<MetricFiltersT>(value)); return *this; }
    ///@}
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

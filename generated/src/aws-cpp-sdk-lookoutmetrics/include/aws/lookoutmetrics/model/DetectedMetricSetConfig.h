/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedField.h>
#include <aws/lookoutmetrics/model/DetectedMetricSource.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>An inferred dataset configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedMetricSetConfig">AWS
   * API Reference</a></p>
   */
  class DetectedMetricSetConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedMetricSetConfig() = default;
    AWS_LOOKOUTMETRICS_API DetectedMetricSetConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedMetricSetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dataset's offset.</p>
     */
    inline const DetectedField& GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    template<typename OffsetT = DetectedField>
    void SetOffset(OffsetT&& value) { m_offsetHasBeenSet = true; m_offset = std::forward<OffsetT>(value); }
    template<typename OffsetT = DetectedField>
    DetectedMetricSetConfig& WithOffset(OffsetT&& value) { SetOffset(std::forward<OffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset's interval.</p>
     */
    inline const DetectedField& GetMetricSetFrequency() const { return m_metricSetFrequency; }
    inline bool MetricSetFrequencyHasBeenSet() const { return m_metricSetFrequencyHasBeenSet; }
    template<typename MetricSetFrequencyT = DetectedField>
    void SetMetricSetFrequency(MetricSetFrequencyT&& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = std::forward<MetricSetFrequencyT>(value); }
    template<typename MetricSetFrequencyT = DetectedField>
    DetectedMetricSetConfig& WithMetricSetFrequency(MetricSetFrequencyT&& value) { SetMetricSetFrequency(std::forward<MetricSetFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset's data source.</p>
     */
    inline const DetectedMetricSource& GetMetricSource() const { return m_metricSource; }
    inline bool MetricSourceHasBeenSet() const { return m_metricSourceHasBeenSet; }
    template<typename MetricSourceT = DetectedMetricSource>
    void SetMetricSource(MetricSourceT&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::forward<MetricSourceT>(value); }
    template<typename MetricSourceT = DetectedMetricSource>
    DetectedMetricSetConfig& WithMetricSource(MetricSourceT&& value) { SetMetricSource(std::forward<MetricSourceT>(value)); return *this;}
    ///@}
  private:

    DetectedField m_offset;
    bool m_offsetHasBeenSet = false;

    DetectedField m_metricSetFrequency;
    bool m_metricSetFrequencyHasBeenSet = false;

    DetectedMetricSource m_metricSource;
    bool m_metricSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

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
    AWS_LOOKOUTMETRICS_API DetectedMetricSetConfig();
    AWS_LOOKOUTMETRICS_API DetectedMetricSetConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedMetricSetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dataset's offset.</p>
     */
    inline const DetectedField& GetOffset() const{ return m_offset; }

    /**
     * <p>The dataset's offset.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>The dataset's offset.</p>
     */
    inline void SetOffset(const DetectedField& value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>The dataset's offset.</p>
     */
    inline void SetOffset(DetectedField&& value) { m_offsetHasBeenSet = true; m_offset = std::move(value); }

    /**
     * <p>The dataset's offset.</p>
     */
    inline DetectedMetricSetConfig& WithOffset(const DetectedField& value) { SetOffset(value); return *this;}

    /**
     * <p>The dataset's offset.</p>
     */
    inline DetectedMetricSetConfig& WithOffset(DetectedField&& value) { SetOffset(std::move(value)); return *this;}


    /**
     * <p>The dataset's interval.</p>
     */
    inline const DetectedField& GetMetricSetFrequency() const{ return m_metricSetFrequency; }

    /**
     * <p>The dataset's interval.</p>
     */
    inline bool MetricSetFrequencyHasBeenSet() const { return m_metricSetFrequencyHasBeenSet; }

    /**
     * <p>The dataset's interval.</p>
     */
    inline void SetMetricSetFrequency(const DetectedField& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = value; }

    /**
     * <p>The dataset's interval.</p>
     */
    inline void SetMetricSetFrequency(DetectedField&& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = std::move(value); }

    /**
     * <p>The dataset's interval.</p>
     */
    inline DetectedMetricSetConfig& WithMetricSetFrequency(const DetectedField& value) { SetMetricSetFrequency(value); return *this;}

    /**
     * <p>The dataset's interval.</p>
     */
    inline DetectedMetricSetConfig& WithMetricSetFrequency(DetectedField&& value) { SetMetricSetFrequency(std::move(value)); return *this;}


    /**
     * <p>The dataset's data source.</p>
     */
    inline const DetectedMetricSource& GetMetricSource() const{ return m_metricSource; }

    /**
     * <p>The dataset's data source.</p>
     */
    inline bool MetricSourceHasBeenSet() const { return m_metricSourceHasBeenSet; }

    /**
     * <p>The dataset's data source.</p>
     */
    inline void SetMetricSource(const DetectedMetricSource& value) { m_metricSourceHasBeenSet = true; m_metricSource = value; }

    /**
     * <p>The dataset's data source.</p>
     */
    inline void SetMetricSource(DetectedMetricSource&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::move(value); }

    /**
     * <p>The dataset's data source.</p>
     */
    inline DetectedMetricSetConfig& WithMetricSource(const DetectedMetricSource& value) { SetMetricSource(value); return *this;}

    /**
     * <p>The dataset's data source.</p>
     */
    inline DetectedMetricSetConfig& WithMetricSource(DetectedMetricSource&& value) { SetMetricSource(std::move(value)); return *this;}

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

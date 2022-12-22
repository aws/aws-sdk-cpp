/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Aggregated statistics about a measure affected by an anomaly.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ItemizedMetricStats">AWS
   * API Reference</a></p>
   */
  class ItemizedMetricStats
  {
  public:
    AWS_LOOKOUTMETRICS_API ItemizedMetricStats();
    AWS_LOOKOUTMETRICS_API ItemizedMetricStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API ItemizedMetricStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the measure.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the measure.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the measure.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the measure.</p>
     */
    inline ItemizedMetricStats& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the measure.</p>
     */
    inline ItemizedMetricStats& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the measure.</p>
     */
    inline ItemizedMetricStats& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The number of times that the measure appears.</p>
     */
    inline int GetOccurrenceCount() const{ return m_occurrenceCount; }

    /**
     * <p>The number of times that the measure appears.</p>
     */
    inline bool OccurrenceCountHasBeenSet() const { return m_occurrenceCountHasBeenSet; }

    /**
     * <p>The number of times that the measure appears.</p>
     */
    inline void SetOccurrenceCount(int value) { m_occurrenceCountHasBeenSet = true; m_occurrenceCount = value; }

    /**
     * <p>The number of times that the measure appears.</p>
     */
    inline ItemizedMetricStats& WithOccurrenceCount(int value) { SetOccurrenceCount(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    int m_occurrenceCount;
    bool m_occurrenceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/MetricDefinitionConfig.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that defines a metric to be used to monitor performance of the
   * variations during a launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/MetricMonitorConfig">AWS
   * API Reference</a></p>
   */
  class MetricMonitorConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API MetricMonitorConfig();
    AWS_CLOUDWATCHEVIDENTLY_API MetricMonitorConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricMonitorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that defines the metric.</p>
     */
    inline const MetricDefinitionConfig& GetMetricDefinition() const{ return m_metricDefinition; }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline void SetMetricDefinition(const MetricDefinitionConfig& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = value; }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline void SetMetricDefinition(MetricDefinitionConfig&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::move(value); }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline MetricMonitorConfig& WithMetricDefinition(const MetricDefinitionConfig& value) { SetMetricDefinition(value); return *this;}

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline MetricMonitorConfig& WithMetricDefinition(MetricDefinitionConfig&& value) { SetMetricDefinition(std::move(value)); return *this;}

  private:

    MetricDefinitionConfig m_metricDefinition;
    bool m_metricDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

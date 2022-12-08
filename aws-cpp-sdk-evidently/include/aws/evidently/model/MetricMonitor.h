/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/MetricDefinition.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/MetricMonitor">AWS
   * API Reference</a></p>
   */
  class MetricMonitor
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API MetricMonitor();
    AWS_CLOUDWATCHEVIDENTLY_API MetricMonitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricMonitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that defines the metric.</p>
     */
    inline const MetricDefinition& GetMetricDefinition() const{ return m_metricDefinition; }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline void SetMetricDefinition(const MetricDefinition& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = value; }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline void SetMetricDefinition(MetricDefinition&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::move(value); }

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline MetricMonitor& WithMetricDefinition(const MetricDefinition& value) { SetMetricDefinition(value); return *this;}

    /**
     * <p>A structure that defines the metric.</p>
     */
    inline MetricMonitor& WithMetricDefinition(MetricDefinition&& value) { SetMetricDefinition(std::move(value)); return *this;}

  private:

    MetricDefinition m_metricDefinition;
    bool m_metricDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws

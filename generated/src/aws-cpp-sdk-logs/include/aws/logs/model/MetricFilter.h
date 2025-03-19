/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/MetricTransformation.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Metric filters express how CloudWatch Logs would extract metric observations
   * from ingested log events and transform them into metric data in a CloudWatch
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MetricFilter">AWS
   * API Reference</a></p>
   */
  class MetricFilter
  {
  public:
    AWS_CLOUDWATCHLOGS_API MetricFilter() = default;
    AWS_CLOUDWATCHLOGS_API MetricFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MetricFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric filter.</p>
     */
    inline const Aws::String& GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    template<typename FilterNameT = Aws::String>
    void SetFilterName(FilterNameT&& value) { m_filterNameHasBeenSet = true; m_filterName = std::forward<FilterNameT>(value); }
    template<typename FilterNameT = Aws::String>
    MetricFilter& WithFilterName(FilterNameT&& value) { SetFilterName(std::forward<FilterNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    MetricFilter& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric transformations.</p>
     */
    inline const Aws::Vector<MetricTransformation>& GetMetricTransformations() const { return m_metricTransformations; }
    inline bool MetricTransformationsHasBeenSet() const { return m_metricTransformationsHasBeenSet; }
    template<typename MetricTransformationsT = Aws::Vector<MetricTransformation>>
    void SetMetricTransformations(MetricTransformationsT&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = std::forward<MetricTransformationsT>(value); }
    template<typename MetricTransformationsT = Aws::Vector<MetricTransformation>>
    MetricFilter& WithMetricTransformations(MetricTransformationsT&& value) { SetMetricTransformations(std::forward<MetricTransformationsT>(value)); return *this;}
    template<typename MetricTransformationsT = MetricTransformation>
    MetricFilter& AddMetricTransformations(MetricTransformationsT&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.emplace_back(std::forward<MetricTransformationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation time of the metric filter, expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline MetricFilter& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    MetricFilter& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is valid only for log groups that have an active log
     * transformer. For more information about log transformers, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutTransformer.html">PutTransformer</a>.</p>
     * <p>If this value is <code>true</code>, the metric filter is applied on the
     * transformed version of the log events instead of the original ingested log
     * events.</p>
     */
    inline bool GetApplyOnTransformedLogs() const { return m_applyOnTransformedLogs; }
    inline bool ApplyOnTransformedLogsHasBeenSet() const { return m_applyOnTransformedLogsHasBeenSet; }
    inline void SetApplyOnTransformedLogs(bool value) { m_applyOnTransformedLogsHasBeenSet = true; m_applyOnTransformedLogs = value; }
    inline MetricFilter& WithApplyOnTransformedLogs(bool value) { SetApplyOnTransformedLogs(value); return *this;}
    ///@}
  private:

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::Vector<MetricTransformation> m_metricTransformations;
    bool m_metricTransformationsHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    bool m_applyOnTransformedLogs{false};
    bool m_applyOnTransformedLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

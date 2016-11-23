/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/MetricTransformation.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Metric filters express how CloudWatch Logs would extract metric observations
   * from ingested log events and transform them into metric data in a CloudWatch
   * metric.</p>
   */
  class AWS_CLOUDWATCHLOGS_API MetricFilter
  {
  public:
    MetricFilter();
    MetricFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    MetricFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the metric filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>The name of the metric filter.</p>
     */
    inline MetricFilter& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the metric filter.</p>
     */
    inline MetricFilter& WithFilterName(Aws::String&& value) { SetFilterName(value); return *this;}

    /**
     * <p>The name of the metric filter.</p>
     */
    inline MetricFilter& WithFilterName(const char* value) { SetFilterName(value); return *this;}

    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    
    inline MetricFilter& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline MetricFilter& WithFilterPattern(Aws::String&& value) { SetFilterPattern(value); return *this;}

    
    inline MetricFilter& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}

    /**
     * <p>The metric transformations.</p>
     */
    inline const Aws::Vector<MetricTransformation>& GetMetricTransformations() const{ return m_metricTransformations; }

    /**
     * <p>The metric transformations.</p>
     */
    inline void SetMetricTransformations(const Aws::Vector<MetricTransformation>& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = value; }

    /**
     * <p>The metric transformations.</p>
     */
    inline void SetMetricTransformations(Aws::Vector<MetricTransformation>&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = value; }

    /**
     * <p>The metric transformations.</p>
     */
    inline MetricFilter& WithMetricTransformations(const Aws::Vector<MetricTransformation>& value) { SetMetricTransformations(value); return *this;}

    /**
     * <p>The metric transformations.</p>
     */
    inline MetricFilter& WithMetricTransformations(Aws::Vector<MetricTransformation>&& value) { SetMetricTransformations(value); return *this;}

    /**
     * <p>The metric transformations.</p>
     */
    inline MetricFilter& AddMetricTransformations(const MetricTransformation& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.push_back(value); return *this; }

    /**
     * <p>The metric transformations.</p>
     */
    inline MetricFilter& AddMetricTransformations(MetricTransformation&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.push_back(value); return *this; }

    /**
     * <p>The creation time of the metric filter.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the metric filter.</p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the metric filter.</p>
     */
    inline MetricFilter& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline MetricFilter& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline MetricFilter& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline MetricFilter& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:
    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet;
    Aws::Vector<MetricTransformation> m_metricTransformations;
    bool m_metricTransformationsHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

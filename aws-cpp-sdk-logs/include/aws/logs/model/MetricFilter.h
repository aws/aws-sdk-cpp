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
   * <p>Metric filters can be used to express how CloudWatch Logs would extract
   * metric observations from ingested log events and transform them to metric data
   * in a CloudWatch metric.</p>
   */
  class AWS_CLOUDWATCHLOGS_API MetricFilter
  {
  public:
    MetricFilter();
    MetricFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    MetricFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    
    inline MetricFilter& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    
    inline MetricFilter& WithFilterName(Aws::String&& value) { SetFilterName(value); return *this;}

    
    inline MetricFilter& WithFilterName(const char* value) { SetFilterName(value); return *this;}

    
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    
    inline MetricFilter& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    
    inline MetricFilter& WithFilterPattern(Aws::String&& value) { SetFilterPattern(value); return *this;}

    
    inline MetricFilter& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}

    
    inline const Aws::Vector<MetricTransformation>& GetMetricTransformations() const{ return m_metricTransformations; }

    
    inline void SetMetricTransformations(const Aws::Vector<MetricTransformation>& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = value; }

    
    inline void SetMetricTransformations(Aws::Vector<MetricTransformation>&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = value; }

    
    inline MetricFilter& WithMetricTransformations(const Aws::Vector<MetricTransformation>& value) { SetMetricTransformations(value); return *this;}

    
    inline MetricFilter& WithMetricTransformations(Aws::Vector<MetricTransformation>&& value) { SetMetricTransformations(value); return *this;}

    
    inline MetricFilter& AddMetricTransformations(const MetricTransformation& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.push_back(value); return *this; }

    
    inline MetricFilter& AddMetricTransformations(MetricTransformation&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.push_back(value); return *this; }

    
    inline long long GetCreationTime() const{ return m_creationTime; }

    
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline MetricFilter& WithCreationTime(long long value) { SetCreationTime(value); return *this;}

  private:
    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;
    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet;
    Aws::Vector<MetricTransformation> m_metricTransformations;
    bool m_metricTransformationsHasBeenSet;
    long long m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/MetricTransformation.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API PutMetricFilterRequest : public CloudWatchLogsRequest
  {
  public:
    PutMetricFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMetricFilter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline PutMetricFilterRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline PutMetricFilterRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline PutMetricFilterRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>A name for the metric filter.</p>
     */
    inline const Aws::String& GetFilterName() const{ return m_filterName; }

    /**
     * <p>A name for the metric filter.</p>
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * <p>A name for the metric filter.</p>
     */
    inline void SetFilterName(const Aws::String& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>A name for the metric filter.</p>
     */
    inline void SetFilterName(Aws::String&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * <p>A name for the metric filter.</p>
     */
    inline void SetFilterName(const char* value) { m_filterNameHasBeenSet = true; m_filterName.assign(value); }

    /**
     * <p>A name for the metric filter.</p>
     */
    inline PutMetricFilterRequest& WithFilterName(const Aws::String& value) { SetFilterName(value); return *this;}

    /**
     * <p>A name for the metric filter.</p>
     */
    inline PutMetricFilterRequest& WithFilterName(Aws::String&& value) { SetFilterName(std::move(value)); return *this;}

    /**
     * <p>A name for the metric filter.</p>
     */
    inline PutMetricFilterRequest& WithFilterName(const char* value) { SetFilterName(value); return *this;}


    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline PutMetricFilterRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline PutMetricFilterRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    /**
     * <p>A filter pattern for extracting metric data out of ingested log events.</p>
     */
    inline PutMetricFilterRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}


    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline const Aws::Vector<MetricTransformation>& GetMetricTransformations() const{ return m_metricTransformations; }

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline bool MetricTransformationsHasBeenSet() const { return m_metricTransformationsHasBeenSet; }

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline void SetMetricTransformations(const Aws::Vector<MetricTransformation>& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = value; }

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline void SetMetricTransformations(Aws::Vector<MetricTransformation>&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations = std::move(value); }

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline PutMetricFilterRequest& WithMetricTransformations(const Aws::Vector<MetricTransformation>& value) { SetMetricTransformations(value); return *this;}

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline PutMetricFilterRequest& WithMetricTransformations(Aws::Vector<MetricTransformation>&& value) { SetMetricTransformations(std::move(value)); return *this;}

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline PutMetricFilterRequest& AddMetricTransformations(const MetricTransformation& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.push_back(value); return *this; }

    /**
     * <p>A collection of information that defines how metric data gets emitted.</p>
     */
    inline PutMetricFilterRequest& AddMetricTransformations(MetricTransformation&& value) { m_metricTransformationsHasBeenSet = true; m_metricTransformations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_filterName;
    bool m_filterNameHasBeenSet;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet;

    Aws::Vector<MetricTransformation> m_metricTransformations;
    bool m_metricTransformationsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

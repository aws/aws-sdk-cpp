/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/CloudWatchMetricDataStatusCode.h>
#include <aws/devops-guru/model/TimestampMetricValuePair.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Contains information about the analyzed metrics that displayed anomalous
   * behavior. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CloudWatchMetricsDataSummary">AWS
   * API Reference</a></p>
   */
  class CloudWatchMetricsDataSummary
  {
  public:
    AWS_DEVOPSGURU_API CloudWatchMetricsDataSummary();
    AWS_DEVOPSGURU_API CloudWatchMetricsDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudWatchMetricsDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline const Aws::Vector<TimestampMetricValuePair>& GetTimestampMetricValuePairList() const{ return m_timestampMetricValuePairList; }

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline bool TimestampMetricValuePairListHasBeenSet() const { return m_timestampMetricValuePairListHasBeenSet; }

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline void SetTimestampMetricValuePairList(const Aws::Vector<TimestampMetricValuePair>& value) { m_timestampMetricValuePairListHasBeenSet = true; m_timestampMetricValuePairList = value; }

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline void SetTimestampMetricValuePairList(Aws::Vector<TimestampMetricValuePair>&& value) { m_timestampMetricValuePairListHasBeenSet = true; m_timestampMetricValuePairList = std::move(value); }

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline CloudWatchMetricsDataSummary& WithTimestampMetricValuePairList(const Aws::Vector<TimestampMetricValuePair>& value) { SetTimestampMetricValuePairList(value); return *this;}

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline CloudWatchMetricsDataSummary& WithTimestampMetricValuePairList(Aws::Vector<TimestampMetricValuePair>&& value) { SetTimestampMetricValuePairList(std::move(value)); return *this;}

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline CloudWatchMetricsDataSummary& AddTimestampMetricValuePairList(const TimestampMetricValuePair& value) { m_timestampMetricValuePairListHasBeenSet = true; m_timestampMetricValuePairList.push_back(value); return *this; }

    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline CloudWatchMetricsDataSummary& AddTimestampMetricValuePairList(TimestampMetricValuePair&& value) { m_timestampMetricValuePairListHasBeenSet = true; m_timestampMetricValuePairList.push_back(std::move(value)); return *this; }


    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline const CloudWatchMetricDataStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline void SetStatusCode(const CloudWatchMetricDataStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline void SetStatusCode(CloudWatchMetricDataStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline CloudWatchMetricsDataSummary& WithStatusCode(const CloudWatchMetricDataStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline CloudWatchMetricsDataSummary& WithStatusCode(CloudWatchMetricDataStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}

  private:

    Aws::Vector<TimestampMetricValuePair> m_timestampMetricValuePairList;
    bool m_timestampMetricValuePairListHasBeenSet = false;

    CloudWatchMetricDataStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

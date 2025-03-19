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
    AWS_DEVOPSGURU_API CloudWatchMetricsDataSummary() = default;
    AWS_DEVOPSGURU_API CloudWatchMetricsDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudWatchMetricsDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is a list of Amazon CloudWatch metric values at given timestamp.</p>
     */
    inline const Aws::Vector<TimestampMetricValuePair>& GetTimestampMetricValuePairList() const { return m_timestampMetricValuePairList; }
    inline bool TimestampMetricValuePairListHasBeenSet() const { return m_timestampMetricValuePairListHasBeenSet; }
    template<typename TimestampMetricValuePairListT = Aws::Vector<TimestampMetricValuePair>>
    void SetTimestampMetricValuePairList(TimestampMetricValuePairListT&& value) { m_timestampMetricValuePairListHasBeenSet = true; m_timestampMetricValuePairList = std::forward<TimestampMetricValuePairListT>(value); }
    template<typename TimestampMetricValuePairListT = Aws::Vector<TimestampMetricValuePair>>
    CloudWatchMetricsDataSummary& WithTimestampMetricValuePairList(TimestampMetricValuePairListT&& value) { SetTimestampMetricValuePairList(std::forward<TimestampMetricValuePairListT>(value)); return *this;}
    template<typename TimestampMetricValuePairListT = TimestampMetricValuePair>
    CloudWatchMetricsDataSummary& AddTimestampMetricValuePairList(TimestampMetricValuePairListT&& value) { m_timestampMetricValuePairListHasBeenSet = true; m_timestampMetricValuePairList.emplace_back(std::forward<TimestampMetricValuePairListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is an enum of the status showing whether the metric value pair list has
     * partial or complete data, or if there was an error.</p>
     */
    inline CloudWatchMetricDataStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(CloudWatchMetricDataStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline CloudWatchMetricsDataSummary& WithStatusCode(CloudWatchMetricDataStatusCode value) { SetStatusCode(value); return *this;}
    ///@}
  private:

    Aws::Vector<TimestampMetricValuePair> m_timestampMetricValuePairList;
    bool m_timestampMetricValuePairListHasBeenSet = false;

    CloudWatchMetricDataStatusCode m_statusCode{CloudWatchMetricDataStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

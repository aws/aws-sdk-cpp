/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class DescribeMetricSetRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeMetricSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMetricSet"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const { return m_metricSetArn; }
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }
    template<typename MetricSetArnT = Aws::String>
    void SetMetricSetArn(MetricSetArnT&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::forward<MetricSetArnT>(value); }
    template<typename MetricSetArnT = Aws::String>
    DescribeMetricSetRequest& WithMetricSetArn(MetricSetArnT&& value) { SetMetricSetArn(std::forward<MetricSetArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

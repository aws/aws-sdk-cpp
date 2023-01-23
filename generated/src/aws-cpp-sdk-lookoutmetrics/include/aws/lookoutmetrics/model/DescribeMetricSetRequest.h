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
    AWS_LOOKOUTMETRICS_API DescribeMetricSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMetricSet"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = value; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::move(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(const char* value) { m_metricSetArnHasBeenSet = true; m_metricSetArn.assign(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DescribeMetricSetRequest& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DescribeMetricSetRequest& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DescribeMetricSetRequest& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}

  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

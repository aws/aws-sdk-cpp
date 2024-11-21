﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/PredictiveScalingMetricDataQuery.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p> Represents a CloudWatch metric of your choosing for a predictive scaling
   * policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingCustomizedMetricSpecification">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingCustomizedMetricSpecification
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingCustomizedMetricSpecification();
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingCustomizedMetricSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingCustomizedMetricSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> One or more metric data queries to provide data points for a metric
     * specification. </p>
     */
    inline const Aws::Vector<PredictiveScalingMetricDataQuery>& GetMetricDataQueries() const{ return m_metricDataQueries; }
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }
    inline void SetMetricDataQueries(const Aws::Vector<PredictiveScalingMetricDataQuery>& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = value; }
    inline void SetMetricDataQueries(Aws::Vector<PredictiveScalingMetricDataQuery>&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::move(value); }
    inline PredictiveScalingCustomizedMetricSpecification& WithMetricDataQueries(const Aws::Vector<PredictiveScalingMetricDataQuery>& value) { SetMetricDataQueries(value); return *this;}
    inline PredictiveScalingCustomizedMetricSpecification& WithMetricDataQueries(Aws::Vector<PredictiveScalingMetricDataQuery>&& value) { SetMetricDataQueries(std::move(value)); return *this;}
    inline PredictiveScalingCustomizedMetricSpecification& AddMetricDataQueries(const PredictiveScalingMetricDataQuery& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(value); return *this; }
    inline PredictiveScalingCustomizedMetricSpecification& AddMetricDataQueries(PredictiveScalingMetricDataQuery&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PredictiveScalingMetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws

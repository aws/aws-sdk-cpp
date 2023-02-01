/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AggregationFunction.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>A calculation made by contrasting a measure and a dimension from your source
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/Metric">AWS
   * API Reference</a></p>
   */
  class Metric
  {
  public:
    AWS_LOOKOUTMETRICS_API Metric();
    AWS_LOOKOUTMETRICS_API Metric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Metric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline Metric& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline Metric& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline Metric& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The function with which the metric is calculated.</p>
     */
    inline const AggregationFunction& GetAggregationFunction() const{ return m_aggregationFunction; }

    /**
     * <p>The function with which the metric is calculated.</p>
     */
    inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }

    /**
     * <p>The function with which the metric is calculated.</p>
     */
    inline void SetAggregationFunction(const AggregationFunction& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = value; }

    /**
     * <p>The function with which the metric is calculated.</p>
     */
    inline void SetAggregationFunction(AggregationFunction&& value) { m_aggregationFunctionHasBeenSet = true; m_aggregationFunction = std::move(value); }

    /**
     * <p>The function with which the metric is calculated.</p>
     */
    inline Metric& WithAggregationFunction(const AggregationFunction& value) { SetAggregationFunction(value); return *this;}

    /**
     * <p>The function with which the metric is calculated.</p>
     */
    inline Metric& WithAggregationFunction(AggregationFunction&& value) { SetAggregationFunction(std::move(value)); return *this;}


    /**
     * <p>The namespace for the metric.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace for the metric.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace for the metric.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace for the metric.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace for the metric.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace for the metric.</p>
     */
    inline Metric& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace for the metric.</p>
     */
    inline Metric& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace for the metric.</p>
     */
    inline Metric& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    AggregationFunction m_aggregationFunction;
    bool m_aggregationFunctionHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

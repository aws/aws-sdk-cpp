/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/AnomalyDetectorType.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DescribeAnomalyDetectorsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAnomalyDetectors"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in one operation. The maximum value
     * that you can specify is 100.</p> <p>To retrieve the remaining results, make
     * another call with the returned <code>NextToken</code> value. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in one operation. The maximum value
     * that you can specify is 100.</p> <p>To retrieve the remaining results, make
     * another call with the returned <code>NextToken</code> value. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in one operation. The maximum value
     * that you can specify is 100.</p> <p>To retrieve the remaining results, make
     * another call with the returned <code>NextToken</code> value. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in one operation. The maximum value
     * that you can specify is 100.</p> <p>To retrieve the remaining results, make
     * another call with the returned <code>NextToken</code> value. </p>
     */
    inline DescribeAnomalyDetectorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline DescribeAnomalyDetectorsRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline const Aws::Vector<AnomalyDetectorType>& GetAnomalyDetectorTypes() const{ return m_anomalyDetectorTypes; }

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline bool AnomalyDetectorTypesHasBeenSet() const { return m_anomalyDetectorTypesHasBeenSet; }

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline void SetAnomalyDetectorTypes(const Aws::Vector<AnomalyDetectorType>& value) { m_anomalyDetectorTypesHasBeenSet = true; m_anomalyDetectorTypes = value; }

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline void SetAnomalyDetectorTypes(Aws::Vector<AnomalyDetectorType>&& value) { m_anomalyDetectorTypesHasBeenSet = true; m_anomalyDetectorTypes = std::move(value); }

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithAnomalyDetectorTypes(const Aws::Vector<AnomalyDetectorType>& value) { SetAnomalyDetectorTypes(value); return *this;}

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline DescribeAnomalyDetectorsRequest& WithAnomalyDetectorTypes(Aws::Vector<AnomalyDetectorType>&& value) { SetAnomalyDetectorTypes(std::move(value)); return *this;}

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline DescribeAnomalyDetectorsRequest& AddAnomalyDetectorTypes(const AnomalyDetectorType& value) { m_anomalyDetectorTypesHasBeenSet = true; m_anomalyDetectorTypes.push_back(value); return *this; }

    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline DescribeAnomalyDetectorsRequest& AddAnomalyDetectorTypes(AnomalyDetectorType&& value) { m_anomalyDetectorTypesHasBeenSet = true; m_anomalyDetectorTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<AnomalyDetectorType> m_anomalyDetectorTypes;
    bool m_anomalyDetectorTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

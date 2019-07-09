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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Dimension.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API DeleteAnomalyDetectorRequest : public CloudWatchRequest
  {
  public:
    DeleteAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAnomalyDetector"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The metric name associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model to
     * delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline const Aws::String& GetStat() const{ return m_stat; }

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline void SetStat(const Aws::String& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline void SetStat(Aws::String&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline void SetStat(const char* value) { m_statHasBeenSet = true; m_stat.assign(value); }

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithStat(const Aws::String& value) { SetStat(value); return *this;}

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithStat(Aws::String&& value) { SetStat(std::move(value)); return *this;}

    /**
     * <p>The statistic associated with the anomaly detection model to delete.</p>
     */
    inline DeleteAnomalyDetectorRequest& WithStat(const char* value) { SetStat(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_stat;
    bool m_statHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

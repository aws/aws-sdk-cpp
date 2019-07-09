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
#include <aws/monitoring/model/AnomalyDetectorConfiguration.h>
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
  class AWS_CLOUDWATCH_API PutAnomalyDetectorRequest : public CloudWatchRequest
  {
  public:
    PutAnomalyDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAnomalyDetector"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The metric dimensions to create the anomaly detection model for.</p>
     */
    inline PutAnomalyDetectorRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline const Aws::String& GetStat() const{ return m_stat; }

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline void SetStat(const Aws::String& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline void SetStat(Aws::String&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline void SetStat(const char* value) { m_statHasBeenSet = true; m_stat.assign(value); }

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline PutAnomalyDetectorRequest& WithStat(const Aws::String& value) { SetStat(value); return *this;}

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline PutAnomalyDetectorRequest& WithStat(Aws::String&& value) { SetStat(std::move(value)); return *this;}

    /**
     * <p>The statistic to use for the metric and the anomaly detection model.</p>
     */
    inline PutAnomalyDetectorRequest& WithStat(const char* value) { SetStat(value); return *this;}


    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p> <p>You can in</p>
     */
    inline const AnomalyDetectorConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p> <p>You can in</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p> <p>You can in</p>
     */
    inline void SetConfiguration(const AnomalyDetectorConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p> <p>You can in</p>
     */
    inline void SetConfiguration(AnomalyDetectorConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p> <p>You can in</p>
     */
    inline PutAnomalyDetectorRequest& WithConfiguration(const AnomalyDetectorConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude when training and updating the
     * model. You can specify as many as 10 time ranges.</p> <p>The configuration can
     * also include the time zone to use for the metric.</p> <p>You can in</p>
     */
    inline PutAnomalyDetectorRequest& WithConfiguration(AnomalyDetectorConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_stat;
    bool m_statHasBeenSet;

    AnomalyDetectorConfiguration m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

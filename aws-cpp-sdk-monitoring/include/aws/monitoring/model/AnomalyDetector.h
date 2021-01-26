/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/AnomalyDetectorConfiguration.h>
#include <aws/monitoring/model/AnomalyDetectorStateValue.h>
#include <aws/monitoring/model/Dimension.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>An anomaly detection model associated with a particular CloudWatch metric and
   * statistic. You can use the model to display a band of expected normal values
   * when the metric is graphed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AnomalyDetector">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API AnomalyDetector
  {
  public:
    AnomalyDetector();
    AnomalyDetector(const Aws::Utils::Xml::XmlNode& xmlNode);
    AnomalyDetector& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the metric associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The metric dimensions associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }


    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline const Aws::String& GetStat() const{ return m_stat; }

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline void SetStat(const Aws::String& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline void SetStat(Aws::String&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline void SetStat(const char* value) { m_statHasBeenSet = true; m_stat.assign(value); }

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithStat(const Aws::String& value) { SetStat(value); return *this;}

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithStat(Aws::String&& value) { SetStat(std::move(value)); return *this;}

    /**
     * <p>The statistic associated with the anomaly detection model.</p>
     */
    inline AnomalyDetector& WithStat(const char* value) { SetStat(value); return *this;}


    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline const AnomalyDetectorConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline void SetConfiguration(const AnomalyDetectorConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline void SetConfiguration(AnomalyDetectorConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline AnomalyDetector& WithConfiguration(const AnomalyDetectorConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration specifies details about how the anomaly detection model is
     * to be trained, including time ranges to exclude from use for training the model,
     * and the time zone to use for the metric.</p>
     */
    inline AnomalyDetector& WithConfiguration(AnomalyDetectorConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The current status of the anomaly detector's training. The possible values
     * are <code>TRAINED | PENDING_TRAINING | TRAINED_INSUFFICIENT_DATA</code> </p>
     */
    inline const AnomalyDetectorStateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The current status of the anomaly detector's training. The possible values
     * are <code>TRAINED | PENDING_TRAINING | TRAINED_INSUFFICIENT_DATA</code> </p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The current status of the anomaly detector's training. The possible values
     * are <code>TRAINED | PENDING_TRAINING | TRAINED_INSUFFICIENT_DATA</code> </p>
     */
    inline void SetStateValue(const AnomalyDetectorStateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The current status of the anomaly detector's training. The possible values
     * are <code>TRAINED | PENDING_TRAINING | TRAINED_INSUFFICIENT_DATA</code> </p>
     */
    inline void SetStateValue(AnomalyDetectorStateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The current status of the anomaly detector's training. The possible values
     * are <code>TRAINED | PENDING_TRAINING | TRAINED_INSUFFICIENT_DATA</code> </p>
     */
    inline AnomalyDetector& WithStateValue(const AnomalyDetectorStateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The current status of the anomaly detector's training. The possible values
     * are <code>TRAINED | PENDING_TRAINING | TRAINED_INSUFFICIENT_DATA</code> </p>
     */
    inline AnomalyDetector& WithStateValue(AnomalyDetectorStateValue&& value) { SetStateValue(std::move(value)); return *this;}

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

    AnomalyDetectorStateValue m_stateValue;
    bool m_stateValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

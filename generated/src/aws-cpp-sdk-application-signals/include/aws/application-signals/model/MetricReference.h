/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/Dimension.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>This structure contains information about one CloudWatch metric associated
   * with this entity discovered by Application Signals.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/MetricReference">AWS
   * API Reference</a></p>
   */
  class MetricReference
  {
  public:
    AWS_APPLICATIONSIGNALS_API MetricReference();
    AWS_APPLICATIONSIGNALS_API MetricReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API MetricReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace of the metric. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Namespace">CloudWatchNamespaces</a>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline MetricReference& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline MetricReference& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline MetricReference& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to display the appropriate statistics in the CloudWatch console.</p>
     */
    inline const Aws::String& GetMetricType() const{ return m_metricType; }
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
    inline void SetMetricType(const Aws::String& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }
    inline void SetMetricType(Aws::String&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }
    inline void SetMetricType(const char* value) { m_metricTypeHasBeenSet = true; m_metricType.assign(value); }
    inline MetricReference& WithMetricType(const Aws::String& value) { SetMetricType(value); return *this;}
    inline MetricReference& WithMetricType(Aws::String&& value) { SetMetricType(std::move(value)); return *this;}
    inline MetricReference& WithMetricType(const char* value) { SetMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of one or more dimensions that further define the metric. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Dimension">CloudWatchDimensions</a>.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline MetricReference& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline MetricReference& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline MetricReference& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline MetricReference& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline MetricReference& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline MetricReference& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline MetricReference& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

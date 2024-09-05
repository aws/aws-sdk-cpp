/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetricType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/MetricDataQuery.h>
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
   * <p>This structure contains the information about the metric that is used for a
   * period-based SLO.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelIndicatorMetric">AWS
   * API Reference</a></p>
   */
  class ServiceLevelIndicatorMetric
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetric();
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is a string-to-string map that contains information about the type of
     * object that this SLO is related to. It can include the following fields.</p>
     * <ul> <li> <p> <code>Type</code> designates the type of object that this SLO is
     * related to.</p> </li> <li> <p> <code>ResourceType</code> specifies the type of
     * the resource. This field is used only when the value of the <code>Type</code>
     * field is <code>Resource</code> or <code>AWS::Resource</code>.</p> </li> <li> <p>
     * <code>Name</code> specifies the name of the object. This is used only if the
     * value of the <code>Type</code> field is <code>Service</code>,
     * <code>RemoteService</code>, or <code>AWS::Service</code>.</p> </li> <li> <p>
     * <code>Identifier</code> identifies the resource objects of this resource. This
     * is used only if the value of the <code>Type</code> field is
     * <code>Resource</code> or <code>AWS::Resource</code>.</p> </li> <li> <p>
     * <code>Environment</code> specifies the location where this object is hosted, or
     * what it belongs to.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const{ return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    inline void SetKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }
    inline void SetKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }
    inline ServiceLevelIndicatorMetric& WithKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetKeyAttributes(value); return *this;}
    inline ServiceLevelIndicatorMetric& WithKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetKeyAttributes(std::move(value)); return *this;}
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(const Aws::String& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(Aws::String&& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(const Aws::String& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(Aws::String&& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(const char* key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(Aws::String&& key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceLevelIndicatorMetric& AddKeyAttributes(const char* key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the SLO monitors a specific operation of the service, this field displays
     * that operation name.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }
    inline ServiceLevelIndicatorMetric& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline ServiceLevelIndicatorMetric& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline ServiceLevelIndicatorMetric& WithOperationName(const char* value) { SetOperationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the SLO monitors either the <code>LATENCY</code> or
     * <code>AVAILABILITY</code> metric that Application Signals collects, this field
     * displays which of those metrics is used.</p>
     */
    inline const ServiceLevelIndicatorMetricType& GetMetricType() const{ return m_metricType; }
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
    inline void SetMetricType(const ServiceLevelIndicatorMetricType& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }
    inline void SetMetricType(ServiceLevelIndicatorMetricType&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }
    inline ServiceLevelIndicatorMetric& WithMetricType(const ServiceLevelIndicatorMetricType& value) { SetMetricType(value); return *this;}
    inline ServiceLevelIndicatorMetric& WithMetricType(ServiceLevelIndicatorMetricType&& value) { SetMetricType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO monitors a CloudWatch metric or the result of a CloudWatch metric
     * math expression, this structure includes the information about that metric or
     * expression. </p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const{ return m_metricDataQueries; }
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }
    inline void SetMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = value; }
    inline void SetMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::move(value); }
    inline ServiceLevelIndicatorMetric& WithMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { SetMetricDataQueries(value); return *this;}
    inline ServiceLevelIndicatorMetric& WithMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { SetMetricDataQueries(std::move(value)); return *this;}
    inline ServiceLevelIndicatorMetric& AddMetricDataQueries(const MetricDataQuery& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(value); return *this; }
    inline ServiceLevelIndicatorMetric& AddMetricDataQueries(MetricDataQuery&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    ServiceLevelIndicatorMetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

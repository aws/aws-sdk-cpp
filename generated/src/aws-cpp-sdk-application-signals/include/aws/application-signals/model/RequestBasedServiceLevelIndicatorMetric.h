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
#include <aws/application-signals/model/MonitoredRequestCountMetricDataQueries.h>
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
   * request-based SLO.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/RequestBasedServiceLevelIndicatorMetric">AWS
   * API Reference</a></p>
   */
  class RequestBasedServiceLevelIndicatorMetric
  {
  public:
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicatorMetric();
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicatorMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API RequestBasedServiceLevelIndicatorMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RequestBasedServiceLevelIndicatorMetric& WithKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetKeyAttributes(value); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& WithKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetKeyAttributes(std::move(value)); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(const Aws::String& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(Aws::String&& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(const Aws::String& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(Aws::String&& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(const char* key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(Aws::String&& key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddKeyAttributes(const char* key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
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
    inline RequestBasedServiceLevelIndicatorMetric& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& WithOperationName(const char* value) { SetOperationName(value); return *this;}
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
    inline RequestBasedServiceLevelIndicatorMetric& WithMetricType(const ServiceLevelIndicatorMetricType& value) { SetMetricType(value); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& WithMetricType(ServiceLevelIndicatorMetricType&& value) { SetMetricType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure defines the metric that is used as the "total requests" number
     * for a request-based SLO. The number observed for this metric is divided by the
     * number of "good requests" or "bad requests" that is observed for the metric
     * defined in <code>MonitoredRequestCountMetric</code>.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetTotalRequestCountMetric() const{ return m_totalRequestCountMetric; }
    inline bool TotalRequestCountMetricHasBeenSet() const { return m_totalRequestCountMetricHasBeenSet; }
    inline void SetTotalRequestCountMetric(const Aws::Vector<MetricDataQuery>& value) { m_totalRequestCountMetricHasBeenSet = true; m_totalRequestCountMetric = value; }
    inline void SetTotalRequestCountMetric(Aws::Vector<MetricDataQuery>&& value) { m_totalRequestCountMetricHasBeenSet = true; m_totalRequestCountMetric = std::move(value); }
    inline RequestBasedServiceLevelIndicatorMetric& WithTotalRequestCountMetric(const Aws::Vector<MetricDataQuery>& value) { SetTotalRequestCountMetric(value); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& WithTotalRequestCountMetric(Aws::Vector<MetricDataQuery>&& value) { SetTotalRequestCountMetric(std::move(value)); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& AddTotalRequestCountMetric(const MetricDataQuery& value) { m_totalRequestCountMetricHasBeenSet = true; m_totalRequestCountMetric.push_back(value); return *this; }
    inline RequestBasedServiceLevelIndicatorMetric& AddTotalRequestCountMetric(MetricDataQuery&& value) { m_totalRequestCountMetricHasBeenSet = true; m_totalRequestCountMetric.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This structure defines the metric that is used as the "good request" or "bad
     * request" value for a request-based SLO. This value observed for the metric
     * defined in <code>TotalRequestCountMetric</code> is divided by the number found
     * for <code>MonitoredRequestCountMetric</code> to determine the percentage of
     * successful requests that this SLO tracks.</p>
     */
    inline const MonitoredRequestCountMetricDataQueries& GetMonitoredRequestCountMetric() const{ return m_monitoredRequestCountMetric; }
    inline bool MonitoredRequestCountMetricHasBeenSet() const { return m_monitoredRequestCountMetricHasBeenSet; }
    inline void SetMonitoredRequestCountMetric(const MonitoredRequestCountMetricDataQueries& value) { m_monitoredRequestCountMetricHasBeenSet = true; m_monitoredRequestCountMetric = value; }
    inline void SetMonitoredRequestCountMetric(MonitoredRequestCountMetricDataQueries&& value) { m_monitoredRequestCountMetricHasBeenSet = true; m_monitoredRequestCountMetric = std::move(value); }
    inline RequestBasedServiceLevelIndicatorMetric& WithMonitoredRequestCountMetric(const MonitoredRequestCountMetricDataQueries& value) { SetMonitoredRequestCountMetric(value); return *this;}
    inline RequestBasedServiceLevelIndicatorMetric& WithMonitoredRequestCountMetric(MonitoredRequestCountMetricDataQueries&& value) { SetMonitoredRequestCountMetric(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    ServiceLevelIndicatorMetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::Vector<MetricDataQuery> m_totalRequestCountMetric;
    bool m_totalRequestCountMetricHasBeenSet = false;

    MonitoredRequestCountMetricDataQueries m_monitoredRequestCountMetric;
    bool m_monitoredRequestCountMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/MetricReference.h>
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
   * <p>This structure contains information about one of your services that was
   * discovered by Application Signals</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceSummary">AWS
   * API Reference</a></p>
   */
  class ServiceSummary
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceSummary();
    AWS_APPLICATIONSIGNALS_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is a string-to-string map that help identify the objects discovered by
     * Application Signals. It can include the following fields.</p> <ul> <li> <p>
     * <code>Type</code> designates the type of object this is.</p> </li> <li> <p>
     * <code>ResourceType</code> specifies the type of the resource. This field is used
     * only when the value of the <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
     * name of the object. This is used only if the value of the <code>Type</code>
     * field is <code>Service</code>, <code>RemoteService</code>, or
     * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
     * the resource objects of this resource. This is used only if the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
     * specifies the location where this object is hosted, or what it belongs to.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const{ return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    inline void SetKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }
    inline void SetKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }
    inline ServiceSummary& WithKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetKeyAttributes(value); return *this;}
    inline ServiceSummary& WithKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetKeyAttributes(std::move(value)); return *this;}
    inline ServiceSummary& AddKeyAttributes(const Aws::String& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    inline ServiceSummary& AddKeyAttributes(Aws::String&& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceSummary& AddKeyAttributes(const Aws::String& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceSummary& AddKeyAttributes(Aws::String&& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ServiceSummary& AddKeyAttributes(const char* key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceSummary& AddKeyAttributes(Aws::String&& key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceSummary& AddKeyAttributes(const char* key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This structure contains one or more string-to-string maps that help identify
     * this service. It can include <i>platform attributes</i>, <i>application
     * attributes</i>, and <i>telemetry attributes</i>.</p> <p>Platform attributes
     * contain information the service's platform.</p> <ul> <li> <p>
     * <code>PlatformType</code> defines the hosted-in platform.</p> </li> <li> <p>
     * <code>EKS.Cluster</code> is the name of the Amazon EKS cluster.</p> </li> <li>
     * <p> <code>K8s.Cluster</code> is the name of the self-hosted Kubernetes
     * cluster.</p> </li> <li> <p> <code>K8s.Namespace</code> is the name of the
     * Kubernetes namespace in either Amazon EKS or Kubernetes clusters.</p> </li> <li>
     * <p> <code>K8s.Workload</code> is the name of the Kubernetes workload in either
     * Amazon EKS or Kubernetes clusters.</p> </li> <li> <p> <code>K8s.Node</code> is
     * the name of the Kubernetes node in either Amazon EKS or Kubernetes clusters.</p>
     * </li> <li> <p> <code>K8s.Pod</code> is the name of the Kubernetes pod in either
     * Amazon EKS or Kubernetes clusters.</p> </li> <li> <p>
     * <code>EC2.AutoScalingGroup</code> is the name of the Amazon EC2 Auto Scaling
     * group.</p> </li> <li> <p> <code>EC2.InstanceId</code> is the ID of the Amazon
     * EC2 instance.</p> </li> <li> <p> <code>Host</code> is the name of the host, for
     * all platform types.</p> </li> </ul> <p>Application attributes contain
     * information about the application.</p> <ul> <li> <p>
     * <code>AWS.Application</code> is the application's name in Amazon Web Services
     * Service Catalog AppRegistry.</p> </li> <li> <p> <code>AWS.Application.ARN</code>
     * is the application's ARN in Amazon Web Services Service Catalog AppRegistry.</p>
     * </li> </ul> <p>Telemetry attributes contain telemetry information.</p> <ul> <li>
     * <p> <code>Telemetry.SDK</code> is the fingerprint of the OpenTelemetry SDK
     * version for instrumented services.</p> </li> <li> <p>
     * <code>Telemetry.Agent</code> is the fingerprint of the agent used to collect and
     * send telemetry data.</p> </li> <li> <p> <code>Telemetry.Source</code> Specifies
     * the point of application where the telemetry was collected or specifies what was
     * used for the source of telemetry data.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetAttributeMaps() const{ return m_attributeMaps; }
    inline bool AttributeMapsHasBeenSet() const { return m_attributeMapsHasBeenSet; }
    inline void SetAttributeMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_attributeMapsHasBeenSet = true; m_attributeMaps = value; }
    inline void SetAttributeMaps(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_attributeMapsHasBeenSet = true; m_attributeMaps = std::move(value); }
    inline ServiceSummary& WithAttributeMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetAttributeMaps(value); return *this;}
    inline ServiceSummary& WithAttributeMaps(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetAttributeMaps(std::move(value)); return *this;}
    inline ServiceSummary& AddAttributeMaps(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMapsHasBeenSet = true; m_attributeMaps.push_back(value); return *this; }
    inline ServiceSummary& AddAttributeMaps(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMapsHasBeenSet = true; m_attributeMaps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const{ return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    inline void SetMetricReferences(const Aws::Vector<MetricReference>& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = value; }
    inline void SetMetricReferences(Aws::Vector<MetricReference>&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::move(value); }
    inline ServiceSummary& WithMetricReferences(const Aws::Vector<MetricReference>& value) { SetMetricReferences(value); return *this;}
    inline ServiceSummary& WithMetricReferences(Aws::Vector<MetricReference>&& value) { SetMetricReferences(std::move(value)); return *this;}
    inline ServiceSummary& AddMetricReferences(const MetricReference& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(value); return *this; }
    inline ServiceSummary& AddMetricReferences(MetricReference&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_attributeMaps;
    bool m_attributeMapsHasBeenSet = false;

    Aws::Vector<MetricReference> m_metricReferences;
    bool m_metricReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

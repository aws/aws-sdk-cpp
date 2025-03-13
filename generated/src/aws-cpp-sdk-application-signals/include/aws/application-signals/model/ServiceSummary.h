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
    AWS_APPLICATIONSIGNALS_API ServiceSummary() = default;
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
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    ServiceSummary& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    template<typename KeyAttributesKeyT = Aws::String, typename KeyAttributesValueT = Aws::String>
    ServiceSummary& AddKeyAttributes(KeyAttributesKeyT&& key, KeyAttributesValueT&& value) {
      m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::forward<KeyAttributesKeyT>(key), std::forward<KeyAttributesValueT>(value)); return *this;
    }
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
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetAttributeMaps() const { return m_attributeMaps; }
    inline bool AttributeMapsHasBeenSet() const { return m_attributeMapsHasBeenSet; }
    template<typename AttributeMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetAttributeMaps(AttributeMapsT&& value) { m_attributeMapsHasBeenSet = true; m_attributeMaps = std::forward<AttributeMapsT>(value); }
    template<typename AttributeMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    ServiceSummary& WithAttributeMaps(AttributeMapsT&& value) { SetAttributeMaps(std::forward<AttributeMapsT>(value)); return *this;}
    template<typename AttributeMapsT = Aws::Map<Aws::String, Aws::String>>
    ServiceSummary& AddAttributeMaps(AttributeMapsT&& value) { m_attributeMapsHasBeenSet = true; m_attributeMaps.emplace_back(std::forward<AttributeMapsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const { return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    void SetMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::forward<MetricReferencesT>(value); }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    ServiceSummary& WithMetricReferences(MetricReferencesT&& value) { SetMetricReferences(std::forward<MetricReferencesT>(value)); return *this;}
    template<typename MetricReferencesT = MetricReference>
    ServiceSummary& AddMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.emplace_back(std::forward<MetricReferencesT>(value)); return *this; }
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>This structure contains information about a service dependent that was
   * discovered by Application Signals. A dependent is an entity that invoked the
   * specified service during the provided time range. Dependents include other
   * services, CloudWatch Synthetics canaries, and clients that are instrumented with
   * CloudWatch RUM app monitors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceDependent">AWS
   * API Reference</a></p>
   */
  class ServiceDependent
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceDependent() = default;
    AWS_APPLICATIONSIGNALS_API ServiceDependent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceDependent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the invoked entity is an operation on an entity, the name of that
     * dependent operation is displayed here.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    ServiceDependent& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a string-to-string map. It can include the following fields.</p> <ul>
     * <li> <p> <code>Type</code> designates the type of object this is.</p> </li> <li>
     * <p> <code>ResourceType</code> specifies the type of the resource. This field is
     * used only when the value of the <code>Type</code> field is <code>Resource</code>
     * or <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies
     * the name of the object. This is used only if the value of the <code>Type</code>
     * field is <code>Service</code>, <code>RemoteService</code>, or
     * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
     * the resource objects of this resource. This is used only if the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
     * specifies the location where this object is hosted, or what it belongs to.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDependentKeyAttributes() const { return m_dependentKeyAttributes; }
    inline bool DependentKeyAttributesHasBeenSet() const { return m_dependentKeyAttributesHasBeenSet; }
    template<typename DependentKeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetDependentKeyAttributes(DependentKeyAttributesT&& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes = std::forward<DependentKeyAttributesT>(value); }
    template<typename DependentKeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    ServiceDependent& WithDependentKeyAttributes(DependentKeyAttributesT&& value) { SetDependentKeyAttributes(std::forward<DependentKeyAttributesT>(value)); return *this;}
    template<typename DependentKeyAttributesKeyT = Aws::String, typename DependentKeyAttributesValueT = Aws::String>
    ServiceDependent& AddDependentKeyAttributes(DependentKeyAttributesKeyT&& key, DependentKeyAttributesValueT&& value) {
      m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(std::forward<DependentKeyAttributesKeyT>(key), std::forward<DependentKeyAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If the dependent invoker was a service that invoked it from an operation, the
     * name of that dependent operation is displayed here.</p>
     */
    inline const Aws::String& GetDependentOperationName() const { return m_dependentOperationName; }
    inline bool DependentOperationNameHasBeenSet() const { return m_dependentOperationNameHasBeenSet; }
    template<typename DependentOperationNameT = Aws::String>
    void SetDependentOperationName(DependentOperationNameT&& value) { m_dependentOperationNameHasBeenSet = true; m_dependentOperationName = std::forward<DependentOperationNameT>(value); }
    template<typename DependentOperationNameT = Aws::String>
    ServiceDependent& WithDependentOperationName(DependentOperationNameT&& value) { SetDependentOperationName(std::forward<DependentOperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service dependent that was discovered by Application
     * Signals.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const { return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    void SetMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::forward<MetricReferencesT>(value); }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    ServiceDependent& WithMetricReferences(MetricReferencesT&& value) { SetMetricReferences(std::forward<MetricReferencesT>(value)); return *this;}
    template<typename MetricReferencesT = MetricReference>
    ServiceDependent& AddMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.emplace_back(std::forward<MetricReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dependentKeyAttributes;
    bool m_dependentKeyAttributesHasBeenSet = false;

    Aws::String m_dependentOperationName;
    bool m_dependentOperationNameHasBeenSet = false;

    Aws::Vector<MetricReference> m_metricReferences;
    bool m_metricReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

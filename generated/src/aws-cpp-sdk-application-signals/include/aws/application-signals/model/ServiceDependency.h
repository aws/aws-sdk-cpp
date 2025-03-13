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
   * <p>This structure contains information about one dependency of this
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceDependency">AWS
   * API Reference</a></p>
   */
  class ServiceDependency
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceDependency() = default;
    AWS_APPLICATIONSIGNALS_API ServiceDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the operation in this service that calls the dependency.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    ServiceDependency& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDependencyKeyAttributes() const { return m_dependencyKeyAttributes; }
    inline bool DependencyKeyAttributesHasBeenSet() const { return m_dependencyKeyAttributesHasBeenSet; }
    template<typename DependencyKeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetDependencyKeyAttributes(DependencyKeyAttributesT&& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes = std::forward<DependencyKeyAttributesT>(value); }
    template<typename DependencyKeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    ServiceDependency& WithDependencyKeyAttributes(DependencyKeyAttributesT&& value) { SetDependencyKeyAttributes(std::forward<DependencyKeyAttributesT>(value)); return *this;}
    template<typename DependencyKeyAttributesKeyT = Aws::String, typename DependencyKeyAttributesValueT = Aws::String>
    ServiceDependency& AddDependencyKeyAttributes(DependencyKeyAttributesKeyT&& key, DependencyKeyAttributesValueT&& value) {
      m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(std::forward<DependencyKeyAttributesKeyT>(key), std::forward<DependencyKeyAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the called operation in the dependency.</p>
     */
    inline const Aws::String& GetDependencyOperationName() const { return m_dependencyOperationName; }
    inline bool DependencyOperationNameHasBeenSet() const { return m_dependencyOperationNameHasBeenSet; }
    template<typename DependencyOperationNameT = Aws::String>
    void SetDependencyOperationName(DependencyOperationNameT&& value) { m_dependencyOperationNameHasBeenSet = true; m_dependencyOperationName = std::forward<DependencyOperationNameT>(value); }
    template<typename DependencyOperationNameT = Aws::String>
    ServiceDependency& WithDependencyOperationName(DependencyOperationNameT&& value) { SetDependencyOperationName(std::forward<DependencyOperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service dependency that was discovered by Application
     * Signals.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const { return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    void SetMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::forward<MetricReferencesT>(value); }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    ServiceDependency& WithMetricReferences(MetricReferencesT&& value) { SetMetricReferences(std::forward<MetricReferencesT>(value)); return *this;}
    template<typename MetricReferencesT = MetricReference>
    ServiceDependency& AddMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.emplace_back(std::forward<MetricReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dependencyKeyAttributes;
    bool m_dependencyKeyAttributesHasBeenSet = false;

    Aws::String m_dependencyOperationName;
    bool m_dependencyOperationNameHasBeenSet = false;

    Aws::Vector<MetricReference> m_metricReferences;
    bool m_metricReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

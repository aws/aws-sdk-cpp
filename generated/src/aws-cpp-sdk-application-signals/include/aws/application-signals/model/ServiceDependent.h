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
    AWS_APPLICATIONSIGNALS_API ServiceDependent();
    AWS_APPLICATIONSIGNALS_API ServiceDependent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceDependent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the invoked entity is an operation on an entity, the name of that
     * dependent operation is displayed here.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }
    inline ServiceDependent& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline ServiceDependent& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline ServiceDependent& WithOperationName(const char* value) { SetOperationName(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDependentKeyAttributes() const{ return m_dependentKeyAttributes; }
    inline bool DependentKeyAttributesHasBeenSet() const { return m_dependentKeyAttributesHasBeenSet; }
    inline void SetDependentKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes = value; }
    inline void SetDependentKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes = std::move(value); }
    inline ServiceDependent& WithDependentKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetDependentKeyAttributes(value); return *this;}
    inline ServiceDependent& WithDependentKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetDependentKeyAttributes(std::move(value)); return *this;}
    inline ServiceDependent& AddDependentKeyAttributes(const Aws::String& key, const Aws::String& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(key, value); return *this; }
    inline ServiceDependent& AddDependentKeyAttributes(Aws::String&& key, const Aws::String& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceDependent& AddDependentKeyAttributes(const Aws::String& key, Aws::String&& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceDependent& AddDependentKeyAttributes(Aws::String&& key, Aws::String&& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ServiceDependent& AddDependentKeyAttributes(const char* key, Aws::String&& value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceDependent& AddDependentKeyAttributes(Aws::String&& key, const char* value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceDependent& AddDependentKeyAttributes(const char* key, const char* value) { m_dependentKeyAttributesHasBeenSet = true; m_dependentKeyAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the dependent invoker was a service that invoked it from an operation, the
     * name of that dependent operation is displayed here.</p>
     */
    inline const Aws::String& GetDependentOperationName() const{ return m_dependentOperationName; }
    inline bool DependentOperationNameHasBeenSet() const { return m_dependentOperationNameHasBeenSet; }
    inline void SetDependentOperationName(const Aws::String& value) { m_dependentOperationNameHasBeenSet = true; m_dependentOperationName = value; }
    inline void SetDependentOperationName(Aws::String&& value) { m_dependentOperationNameHasBeenSet = true; m_dependentOperationName = std::move(value); }
    inline void SetDependentOperationName(const char* value) { m_dependentOperationNameHasBeenSet = true; m_dependentOperationName.assign(value); }
    inline ServiceDependent& WithDependentOperationName(const Aws::String& value) { SetDependentOperationName(value); return *this;}
    inline ServiceDependent& WithDependentOperationName(Aws::String&& value) { SetDependentOperationName(std::move(value)); return *this;}
    inline ServiceDependent& WithDependentOperationName(const char* value) { SetDependentOperationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service dependent that was discovered by Application
     * Signals.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const{ return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    inline void SetMetricReferences(const Aws::Vector<MetricReference>& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = value; }
    inline void SetMetricReferences(Aws::Vector<MetricReference>&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::move(value); }
    inline ServiceDependent& WithMetricReferences(const Aws::Vector<MetricReference>& value) { SetMetricReferences(value); return *this;}
    inline ServiceDependent& WithMetricReferences(Aws::Vector<MetricReference>&& value) { SetMetricReferences(std::move(value)); return *this;}
    inline ServiceDependent& AddMetricReferences(const MetricReference& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(value); return *this; }
    inline ServiceDependent& AddMetricReferences(MetricReference&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(std::move(value)); return *this; }
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

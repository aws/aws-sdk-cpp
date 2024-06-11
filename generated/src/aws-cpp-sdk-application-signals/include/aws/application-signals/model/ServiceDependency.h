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
    AWS_APPLICATIONSIGNALS_API ServiceDependency();
    AWS_APPLICATIONSIGNALS_API ServiceDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the operation in this service that calls the dependency.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }
    inline ServiceDependency& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline ServiceDependency& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline ServiceDependency& WithOperationName(const char* value) { SetOperationName(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDependencyKeyAttributes() const{ return m_dependencyKeyAttributes; }
    inline bool DependencyKeyAttributesHasBeenSet() const { return m_dependencyKeyAttributesHasBeenSet; }
    inline void SetDependencyKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes = value; }
    inline void SetDependencyKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes = std::move(value); }
    inline ServiceDependency& WithDependencyKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetDependencyKeyAttributes(value); return *this;}
    inline ServiceDependency& WithDependencyKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetDependencyKeyAttributes(std::move(value)); return *this;}
    inline ServiceDependency& AddDependencyKeyAttributes(const Aws::String& key, const Aws::String& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(key, value); return *this; }
    inline ServiceDependency& AddDependencyKeyAttributes(Aws::String&& key, const Aws::String& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceDependency& AddDependencyKeyAttributes(const Aws::String& key, Aws::String&& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceDependency& AddDependencyKeyAttributes(Aws::String&& key, Aws::String&& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ServiceDependency& AddDependencyKeyAttributes(const char* key, Aws::String&& value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceDependency& AddDependencyKeyAttributes(Aws::String&& key, const char* value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceDependency& AddDependencyKeyAttributes(const char* key, const char* value) { m_dependencyKeyAttributesHasBeenSet = true; m_dependencyKeyAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the called operation in the dependency.</p>
     */
    inline const Aws::String& GetDependencyOperationName() const{ return m_dependencyOperationName; }
    inline bool DependencyOperationNameHasBeenSet() const { return m_dependencyOperationNameHasBeenSet; }
    inline void SetDependencyOperationName(const Aws::String& value) { m_dependencyOperationNameHasBeenSet = true; m_dependencyOperationName = value; }
    inline void SetDependencyOperationName(Aws::String&& value) { m_dependencyOperationNameHasBeenSet = true; m_dependencyOperationName = std::move(value); }
    inline void SetDependencyOperationName(const char* value) { m_dependencyOperationNameHasBeenSet = true; m_dependencyOperationName.assign(value); }
    inline ServiceDependency& WithDependencyOperationName(const Aws::String& value) { SetDependencyOperationName(value); return *this;}
    inline ServiceDependency& WithDependencyOperationName(Aws::String&& value) { SetDependencyOperationName(std::move(value)); return *this;}
    inline ServiceDependency& WithDependencyOperationName(const char* value) { SetDependencyOperationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service dependency that was discovered by Application
     * Signals.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const{ return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    inline void SetMetricReferences(const Aws::Vector<MetricReference>& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = value; }
    inline void SetMetricReferences(Aws::Vector<MetricReference>&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::move(value); }
    inline ServiceDependency& WithMetricReferences(const Aws::Vector<MetricReference>& value) { SetMetricReferences(value); return *this;}
    inline ServiceDependency& WithMetricReferences(Aws::Vector<MetricReference>&& value) { SetMetricReferences(std::move(value)); return *this;}
    inline ServiceDependency& AddMetricReferences(const MetricReference& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(value); return *this; }
    inline ServiceDependency& AddMetricReferences(MetricReference&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(std::move(value)); return *this; }
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

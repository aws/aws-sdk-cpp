/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Identifies the dependency using the <code>DependencyKeyAttributes</code> and
   * <code>DependencyOperationName</code>.</p> <p>When creating a service dependency
   * SLO, you must specify the <code>KeyAttributes</code> of the service, and the
   * <code>DependencyConfig</code> for the dependency. You can specify the
   * <code>OperationName</code> of the service, from which it calls the dependency.
   * Alternatively, you can exclude <code>OperationName</code> and the SLO will
   * monitor all of the service's operations that call the dependency.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/DependencyConfig">AWS
   * API Reference</a></p>
   */
  class DependencyConfig
  {
  public:
    AWS_APPLICATIONSIGNALS_API DependencyConfig() = default;
    AWS_APPLICATIONSIGNALS_API DependencyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API DependencyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    DependencyConfig& WithDependencyKeyAttributes(DependencyKeyAttributesT&& value) { SetDependencyKeyAttributes(std::forward<DependencyKeyAttributesT>(value)); return *this;}
    template<typename DependencyKeyAttributesKeyT = Aws::String, typename DependencyKeyAttributesValueT = Aws::String>
    DependencyConfig& AddDependencyKeyAttributes(DependencyKeyAttributesKeyT&& key, DependencyKeyAttributesValueT&& value) {
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
    DependencyConfig& WithDependencyOperationName(DependencyOperationNameT&& value) { SetDependencyOperationName(std::forward<DependencyOperationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_dependencyKeyAttributes;
    bool m_dependencyKeyAttributesHasBeenSet = false;

    Aws::String m_dependencyOperationName;
    bool m_dependencyOperationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws

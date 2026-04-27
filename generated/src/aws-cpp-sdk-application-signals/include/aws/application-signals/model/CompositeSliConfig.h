/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CompositeSliComponent.h>
#include <aws/application-signals/model/SelectionConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>This structure contains the configuration for a composite service level
 * indicator (SLI) that aggregates metrics across multiple operations of a service
 * for service-level SLOs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CompositeSliConfig">AWS
 * API Reference</a></p>
 */
class CompositeSliConfig {
 public:
  AWS_APPLICATIONSIGNALS_API CompositeSliConfig() = default;
  AWS_APPLICATIONSIGNALS_API CompositeSliConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API CompositeSliConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies how operations are selected for this service-level SLO. Operations
   * can be selected explicitly by listing them, by specifying a prefix to match
   * operation names, or by providing a regular expression pattern.</p>
   */
  inline const SelectionConfig& GetSelectionConfig() const { return m_selectionConfig; }
  inline bool SelectionConfigHasBeenSet() const { return m_selectionConfigHasBeenSet; }
  template <typename SelectionConfigT = SelectionConfig>
  void SetSelectionConfig(SelectionConfigT&& value) {
    m_selectionConfigHasBeenSet = true;
    m_selectionConfig = std::forward<SelectionConfigT>(value);
  }
  template <typename SelectionConfigT = SelectionConfig>
  CompositeSliConfig& WithSelectionConfig(SelectionConfigT&& value) {
    SetSelectionConfig(std::forward<SelectionConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of operations included in this composite SLI. You must specify
   * between 2 and 20 components. Each component is a
   * <code>CompositeSliComponent</code> that identifies a single operation by its
   * <code>OperationName</code>.</p>
   */
  inline const Aws::Vector<CompositeSliComponent>& GetComponents() const { return m_components; }
  inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
  template <typename ComponentsT = Aws::Vector<CompositeSliComponent>>
  void SetComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components = std::forward<ComponentsT>(value);
  }
  template <typename ComponentsT = Aws::Vector<CompositeSliComponent>>
  CompositeSliConfig& WithComponents(ComponentsT&& value) {
    SetComponents(std::forward<ComponentsT>(value));
    return *this;
  }
  template <typename ComponentsT = CompositeSliComponent>
  CompositeSliConfig& AddComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components.emplace_back(std::forward<ComponentsT>(value));
    return *this;
  }
  ///@}
 private:
  SelectionConfig m_selectionConfig;

  Aws::Vector<CompositeSliComponent> m_components;
  bool m_selectionConfigHasBeenSet = false;
  bool m_componentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws

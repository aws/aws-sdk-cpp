/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/CompatibilityPolicy.h>
#include <aws/lambda-core/model/IntegrationModel.h>
#include <aws/lambda-core/model/RuntimeArchitecture.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>Defines the compatibility matrix for a runtime version, indicating supported
 * integration models, architectures, and feature availability.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/Compatibility">AWS
 * API Reference</a></p>
 */
class Compatibility {
 public:
  AWS_LAMBDACORE_API Compatibility() = default;
  AWS_LAMBDACORE_API Compatibility(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Compatibility& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Supported integration models for the runtime version.</p>
   */
  inline const Aws::Vector<IntegrationModel>& GetIntegrationModels() const { return m_integrationModels; }
  inline bool IntegrationModelsHasBeenSet() const { return m_integrationModelsHasBeenSet; }
  template <typename IntegrationModelsT = Aws::Vector<IntegrationModel>>
  void SetIntegrationModels(IntegrationModelsT&& value) {
    m_integrationModelsHasBeenSet = true;
    m_integrationModels = std::forward<IntegrationModelsT>(value);
  }
  template <typename IntegrationModelsT = Aws::Vector<IntegrationModel>>
  Compatibility& WithIntegrationModels(IntegrationModelsT&& value) {
    SetIntegrationModels(std::forward<IntegrationModelsT>(value));
    return *this;
  }
  inline Compatibility& AddIntegrationModels(IntegrationModel value) {
    m_integrationModelsHasBeenSet = true;
    m_integrationModels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Supported architectures for the runtime version.</p>
   */
  inline const Aws::Vector<RuntimeArchitecture>& GetArchitectures() const { return m_architectures; }
  inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
  template <typename ArchitecturesT = Aws::Vector<RuntimeArchitecture>>
  void SetArchitectures(ArchitecturesT&& value) {
    m_architecturesHasBeenSet = true;
    m_architectures = std::forward<ArchitecturesT>(value);
  }
  template <typename ArchitecturesT = Aws::Vector<RuntimeArchitecture>>
  Compatibility& WithArchitectures(ArchitecturesT&& value) {
    SetArchitectures(std::forward<ArchitecturesT>(value));
    return *this;
  }
  inline Compatibility& AddArchitectures(RuntimeArchitecture value) {
    m_architecturesHasBeenSet = true;
    m_architectures.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the runtime version is compatible with managed instances.</p>
   */
  inline CompatibilityPolicy GetManagedInstances() const { return m_managedInstances; }
  inline bool ManagedInstancesHasBeenSet() const { return m_managedInstancesHasBeenSet; }
  inline void SetManagedInstances(CompatibilityPolicy value) {
    m_managedInstancesHasBeenSet = true;
    m_managedInstances = value;
  }
  inline Compatibility& WithManagedInstances(CompatibilityPolicy value) {
    SetManagedInstances(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IntegrationModel> m_integrationModels;

  Aws::Vector<RuntimeArchitecture> m_architectures;

  CompatibilityPolicy m_managedInstances{CompatibilityPolicy::NOT_SET};
  bool m_integrationModelsHasBeenSet = false;
  bool m_architecturesHasBeenSet = false;
  bool m_managedInstancesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws

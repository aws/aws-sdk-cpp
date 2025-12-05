/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProviderPermissionsConfig.h>
#include <aws/lambda/model/CapacityProviderScalingConfig.h>
#include <aws/lambda/model/CapacityProviderState.h>
#include <aws/lambda/model/CapacityProviderVpcConfig.h>
#include <aws/lambda/model/InstanceRequirements.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>A capacity provider manages compute resources for Lambda
 * functions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CapacityProvider">AWS
 * API Reference</a></p>
 */
class CapacityProvider {
 public:
  AWS_LAMBDA_API CapacityProvider() = default;
  AWS_LAMBDA_API CapacityProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CapacityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  inline bool CapacityProviderArnHasBeenSet() const { return m_capacityProviderArnHasBeenSet; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  CapacityProvider& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the capacity provider.</p>
   */
  inline CapacityProviderState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(CapacityProviderState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CapacityProvider& WithState(CapacityProviderState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration for the capacity provider.</p>
   */
  inline const CapacityProviderVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = CapacityProviderVpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = CapacityProviderVpcConfig>
  CapacityProvider& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions configuration for the capacity provider.</p>
   */
  inline const CapacityProviderPermissionsConfig& GetPermissionsConfig() const { return m_permissionsConfig; }
  inline bool PermissionsConfigHasBeenSet() const { return m_permissionsConfigHasBeenSet; }
  template <typename PermissionsConfigT = CapacityProviderPermissionsConfig>
  void SetPermissionsConfig(PermissionsConfigT&& value) {
    m_permissionsConfigHasBeenSet = true;
    m_permissionsConfig = std::forward<PermissionsConfigT>(value);
  }
  template <typename PermissionsConfigT = CapacityProviderPermissionsConfig>
  CapacityProvider& WithPermissionsConfig(PermissionsConfigT&& value) {
    SetPermissionsConfig(std::forward<PermissionsConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance requirements for compute resources managed by the capacity
   * provider.</p>
   */
  inline const InstanceRequirements& GetInstanceRequirements() const { return m_instanceRequirements; }
  inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
  template <typename InstanceRequirementsT = InstanceRequirements>
  void SetInstanceRequirements(InstanceRequirementsT&& value) {
    m_instanceRequirementsHasBeenSet = true;
    m_instanceRequirements = std::forward<InstanceRequirementsT>(value);
  }
  template <typename InstanceRequirementsT = InstanceRequirements>
  CapacityProvider& WithInstanceRequirements(InstanceRequirementsT&& value) {
    SetInstanceRequirements(std::forward<InstanceRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration for the capacity provider.</p>
   */
  inline const CapacityProviderScalingConfig& GetCapacityProviderScalingConfig() const { return m_capacityProviderScalingConfig; }
  inline bool CapacityProviderScalingConfigHasBeenSet() const { return m_capacityProviderScalingConfigHasBeenSet; }
  template <typename CapacityProviderScalingConfigT = CapacityProviderScalingConfig>
  void SetCapacityProviderScalingConfig(CapacityProviderScalingConfigT&& value) {
    m_capacityProviderScalingConfigHasBeenSet = true;
    m_capacityProviderScalingConfig = std::forward<CapacityProviderScalingConfigT>(value);
  }
  template <typename CapacityProviderScalingConfigT = CapacityProviderScalingConfig>
  CapacityProvider& WithCapacityProviderScalingConfig(CapacityProviderScalingConfigT&& value) {
    SetCapacityProviderScalingConfig(std::forward<CapacityProviderScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used to encrypt the capacity provider's resources.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CapacityProvider& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the capacity provider was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  CapacityProvider& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderArn;

  CapacityProviderState m_state{CapacityProviderState::NOT_SET};

  CapacityProviderVpcConfig m_vpcConfig;

  CapacityProviderPermissionsConfig m_permissionsConfig;

  InstanceRequirements m_instanceRequirements;

  CapacityProviderScalingConfig m_capacityProviderScalingConfig;

  Aws::String m_kmsKeyArn;

  Aws::String m_lastModified;
  bool m_capacityProviderArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_vpcConfigHasBeenSet = false;
  bool m_permissionsConfigHasBeenSet = false;
  bool m_instanceRequirementsHasBeenSet = false;
  bool m_capacityProviderScalingConfigHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws

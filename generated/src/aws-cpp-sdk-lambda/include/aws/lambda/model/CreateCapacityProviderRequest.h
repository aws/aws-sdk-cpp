/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProviderPermissionsConfig.h>
#include <aws/lambda/model/CapacityProviderScalingConfig.h>
#include <aws/lambda/model/CapacityProviderVpcConfig.h>
#include <aws/lambda/model/InstanceRequirements.h>

#include <utility>

namespace Aws {
namespace Lambda {
namespace Model {

/**
 */
class CreateCapacityProviderRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API CreateCapacityProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityProvider"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the capacity provider. </p>
   */
  inline const Aws::String& GetCapacityProviderName() const { return m_capacityProviderName; }
  inline bool CapacityProviderNameHasBeenSet() const { return m_capacityProviderNameHasBeenSet; }
  template <typename CapacityProviderNameT = Aws::String>
  void SetCapacityProviderName(CapacityProviderNameT&& value) {
    m_capacityProviderNameHasBeenSet = true;
    m_capacityProviderName = std::forward<CapacityProviderNameT>(value);
  }
  template <typename CapacityProviderNameT = Aws::String>
  CreateCapacityProviderRequest& WithCapacityProviderName(CapacityProviderNameT&& value) {
    SetCapacityProviderName(std::forward<CapacityProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration for the capacity provider, including subnet IDs and
   * security group IDs where compute instances will be launched.</p>
   */
  inline const CapacityProviderVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = CapacityProviderVpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = CapacityProviderVpcConfig>
  CreateCapacityProviderRequest& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions configuration that specifies the IAM role ARN used by the
   * capacity provider to manage compute resources.</p>
   */
  inline const CapacityProviderPermissionsConfig& GetPermissionsConfig() const { return m_permissionsConfig; }
  inline bool PermissionsConfigHasBeenSet() const { return m_permissionsConfigHasBeenSet; }
  template <typename PermissionsConfigT = CapacityProviderPermissionsConfig>
  void SetPermissionsConfig(PermissionsConfigT&& value) {
    m_permissionsConfigHasBeenSet = true;
    m_permissionsConfig = std::forward<PermissionsConfigT>(value);
  }
  template <typename PermissionsConfigT = CapacityProviderPermissionsConfig>
  CreateCapacityProviderRequest& WithPermissionsConfig(PermissionsConfigT&& value) {
    SetPermissionsConfig(std::forward<PermissionsConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance requirements that specify the compute instance characteristics,
   * including architectures and allowed or excluded instance types.</p>
   */
  inline const InstanceRequirements& GetInstanceRequirements() const { return m_instanceRequirements; }
  inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
  template <typename InstanceRequirementsT = InstanceRequirements>
  void SetInstanceRequirements(InstanceRequirementsT&& value) {
    m_instanceRequirementsHasBeenSet = true;
    m_instanceRequirements = std::forward<InstanceRequirementsT>(value);
  }
  template <typename InstanceRequirementsT = InstanceRequirements>
  CreateCapacityProviderRequest& WithInstanceRequirements(InstanceRequirementsT&& value) {
    SetInstanceRequirements(std::forward<InstanceRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scaling configuration that defines how the capacity provider scales
   * compute instances, including maximum vCPU count and scaling policies.</p>
   */
  inline const CapacityProviderScalingConfig& GetCapacityProviderScalingConfig() const { return m_capacityProviderScalingConfig; }
  inline bool CapacityProviderScalingConfigHasBeenSet() const { return m_capacityProviderScalingConfigHasBeenSet; }
  template <typename CapacityProviderScalingConfigT = CapacityProviderScalingConfig>
  void SetCapacityProviderScalingConfig(CapacityProviderScalingConfigT&& value) {
    m_capacityProviderScalingConfigHasBeenSet = true;
    m_capacityProviderScalingConfig = std::forward<CapacityProviderScalingConfigT>(value);
  }
  template <typename CapacityProviderScalingConfigT = CapacityProviderScalingConfig>
  CreateCapacityProviderRequest& WithCapacityProviderScalingConfig(CapacityProviderScalingConfigT&& value) {
    SetCapacityProviderScalingConfig(std::forward<CapacityProviderScalingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used to encrypt data associated with the capacity
   * provider.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateCapacityProviderRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags to associate with the capacity provider.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCapacityProviderRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCapacityProviderRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderName;
  bool m_capacityProviderNameHasBeenSet = false;

  CapacityProviderVpcConfig m_vpcConfig;
  bool m_vpcConfigHasBeenSet = false;

  CapacityProviderPermissionsConfig m_permissionsConfig;
  bool m_permissionsConfigHasBeenSet = false;

  InstanceRequirements m_instanceRequirements;
  bool m_instanceRequirementsHasBeenSet = false;

  CapacityProviderScalingConfig m_capacityProviderScalingConfig;
  bool m_capacityProviderScalingConfigHasBeenSet = false;

  Aws::String m_kmsKeyArn;
  bool m_kmsKeyArnHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilityDeletePropagationPolicy.h>
#include <aws/eks/model/UpdateCapabilityConfiguration.h>

#include <utility>

namespace Aws {
namespace EKS {
namespace Model {

/**
 */
class UpdateCapabilityRequest : public EKSRequest {
 public:
  AWS_EKS_API UpdateCapabilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCapability"; }

  AWS_EKS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the Amazon EKS cluster that contains the capability you want to
   * update configuration for.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  UpdateCapabilityRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the capability to update configuration for.</p>
   */
  inline const Aws::String& GetCapabilityName() const { return m_capabilityName; }
  inline bool CapabilityNameHasBeenSet() const { return m_capabilityNameHasBeenSet; }
  template <typename CapabilityNameT = Aws::String>
  void SetCapabilityName(CapabilityNameT&& value) {
    m_capabilityNameHasBeenSet = true;
    m_capabilityName = std::forward<CapabilityNameT>(value);
  }
  template <typename CapabilityNameT = Aws::String>
  UpdateCapabilityRequest& WithCapabilityName(CapabilityNameT&& value) {
    SetCapabilityName(std::forward<CapabilityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the capability uses to
   * interact with Amazon Web Services services. If you specify a new role ARN, the
   * capability will start using the new role for all subsequent operations.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdateCapabilityRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration settings for the capability. You only need to
   * specify the configuration parameters you want to change. For Argo CD
   * capabilities, you can update RBAC role mappings and network access settings.</p>
   */
  inline const UpdateCapabilityConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = UpdateCapabilityConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = UpdateCapabilityConfiguration>
  UpdateCapabilityRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This token is valid for 24 hours after creation.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  UpdateCapabilityRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated delete propagation policy for the capability. Currently, the only
   * supported value is <code>RETAIN</code>.</p>
   */
  inline CapabilityDeletePropagationPolicy GetDeletePropagationPolicy() const { return m_deletePropagationPolicy; }
  inline bool DeletePropagationPolicyHasBeenSet() const { return m_deletePropagationPolicyHasBeenSet; }
  inline void SetDeletePropagationPolicy(CapabilityDeletePropagationPolicy value) {
    m_deletePropagationPolicyHasBeenSet = true;
    m_deletePropagationPolicy = value;
  }
  inline UpdateCapabilityRequest& WithDeletePropagationPolicy(CapabilityDeletePropagationPolicy value) {
    SetDeletePropagationPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_capabilityName;

  Aws::String m_roleArn;

  UpdateCapabilityConfiguration m_configuration;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  CapabilityDeletePropagationPolicy m_deletePropagationPolicy{CapabilityDeletePropagationPolicy::NOT_SET};
  bool m_clusterNameHasBeenSet = false;
  bool m_capabilityNameHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_deletePropagationPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CapabilityConfigurationRequest.h>
#include <aws/eks/model/CapabilityDeletePropagationPolicy.h>
#include <aws/eks/model/CapabilityType.h>

#include <utility>

namespace Aws {
namespace EKS {
namespace Model {

/**
 */
class CreateCapabilityRequest : public EKSRequest {
 public:
  AWS_EKS_API CreateCapabilityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCapability"; }

  AWS_EKS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique name for the capability. The name must be unique within your cluster
   * and can contain alphanumeric characters, hyphens, and underscores.</p>
   */
  inline const Aws::String& GetCapabilityName() const { return m_capabilityName; }
  inline bool CapabilityNameHasBeenSet() const { return m_capabilityNameHasBeenSet; }
  template <typename CapabilityNameT = Aws::String>
  void SetCapabilityName(CapabilityNameT&& value) {
    m_capabilityNameHasBeenSet = true;
    m_capabilityName = std::forward<CapabilityNameT>(value);
  }
  template <typename CapabilityNameT = Aws::String>
  CreateCapabilityRequest& WithCapabilityName(CapabilityNameT&& value) {
    SetCapabilityName(std::forward<CapabilityNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon EKS cluster where you want to create the
   * capability.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  CreateCapabilityRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This token is valid for 24 hours after creation. If
   * you retry a request with the same client request token and the same parameters
   * after the original request has completed successfully, the result of the
   * original request is returned.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CreateCapabilityRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of capability to create. Valid values are:</p> <ul> <li> <p>
   * <code>ACK</code> – Amazon Web Services Controllers for Kubernetes (ACK), which
   * lets you manage resources directly from Kubernetes.</p> </li> <li> <p>
   * <code>ARGOCD</code> – Argo CD for GitOps-based continuous delivery.</p> </li>
   * <li> <p> <code>KRO</code> – Kube Resource Orchestrator (KRO) for composing and
   * managing custom Kubernetes resources.</p> </li> </ul>
   */
  inline CapabilityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CapabilityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateCapabilityRequest& WithType(CapabilityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the capability uses to
   * interact with Amazon Web Services services. This role must have a trust policy
   * that allows the EKS service principal to assume it, and it must have the
   * necessary permissions for the capability type you're creating.</p> <p>For ACK
   * capabilities, the role needs permissions to manage the resources you want to
   * control through Kubernetes. For Argo CD capabilities, the role needs permissions
   * to access Git repositories and Secrets Manager. For KRO capabilities, the role
   * needs permissions based on the resources you'll be orchestrating.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateCapabilityRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the capability. The structure of this object
   * varies depending on the capability type. For Argo CD capabilities, you can
   * configure IAM Identity CenterIAM; Identity Center integration, RBAC role
   * mappings, and network access settings.</p>
   */
  inline const CapabilityConfigurationRequest& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CapabilityConfigurationRequest>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CapabilityConfigurationRequest>
  CreateCapabilityRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCapabilityRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCapabilityRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how Kubernetes resources managed by the capability should be
   * handled when the capability is deleted. Currently, the only supported value is
   * <code>RETAIN</code> which retains all Kubernetes resources managed by the
   * capability when the capability is deleted.</p> <p>Because resources are
   * retained, all Kubernetes resources created by the capability should be deleted
   * from the cluster before deleting the capability itself. After the capability is
   * deleted, these resources become difficult to manage because the controller is no
   * longer available.</p>
   */
  inline CapabilityDeletePropagationPolicy GetDeletePropagationPolicy() const { return m_deletePropagationPolicy; }
  inline bool DeletePropagationPolicyHasBeenSet() const { return m_deletePropagationPolicyHasBeenSet; }
  inline void SetDeletePropagationPolicy(CapabilityDeletePropagationPolicy value) {
    m_deletePropagationPolicyHasBeenSet = true;
    m_deletePropagationPolicy = value;
  }
  inline CreateCapabilityRequest& WithDeletePropagationPolicy(CapabilityDeletePropagationPolicy value) {
    SetDeletePropagationPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capabilityName;

  Aws::String m_clusterName;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  CapabilityType m_type{CapabilityType::NOT_SET};

  Aws::String m_roleArn;

  CapabilityConfigurationRequest m_configuration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  CapabilityDeletePropagationPolicy m_deletePropagationPolicy{CapabilityDeletePropagationPolicy::NOT_SET};
  bool m_capabilityNameHasBeenSet = false;
  bool m_clusterNameHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_typeHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_deletePropagationPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdAwsIdcConfigRequest.h>
#include <aws/eks/model/ArgoCdNetworkAccessConfigRequest.h>
#include <aws/eks/model/ArgoCdRoleMapping.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>Configuration settings for an Argo CD capability. This includes the
 * Kubernetes namespace, IAM Identity CenterIAM; Identity Center integration, RBAC
 * role mappings, and network access configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ArgoCdConfigRequest">AWS
 * API Reference</a></p>
 */
class ArgoCdConfigRequest {
 public:
  AWS_EKS_API ArgoCdConfigRequest() = default;
  AWS_EKS_API ArgoCdConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ArgoCdConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Kubernetes namespace where Argo CD resources will be created. If not
   * specified, the default namespace is used.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  ArgoCdConfigRequest& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for IAM Identity CenterIAM; Identity Center integration. When
   * configured, users can authenticate to Argo CD using their IAM Identity
   * CenterIAM; Identity Center credentials.</p>
   */
  inline const ArgoCdAwsIdcConfigRequest& GetAwsIdc() const { return m_awsIdc; }
  inline bool AwsIdcHasBeenSet() const { return m_awsIdcHasBeenSet; }
  template <typename AwsIdcT = ArgoCdAwsIdcConfigRequest>
  void SetAwsIdc(AwsIdcT&& value) {
    m_awsIdcHasBeenSet = true;
    m_awsIdc = std::forward<AwsIdcT>(value);
  }
  template <typename AwsIdcT = ArgoCdAwsIdcConfigRequest>
  ArgoCdConfigRequest& WithAwsIdc(AwsIdcT&& value) {
    SetAwsIdc(std::forward<AwsIdcT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of role mappings that define which IAM Identity CenterIAM; Identity
   * Center users or groups have which Argo CD roles. Each mapping associates an Argo
   * CD role (<code>ADMIN</code>, <code>EDITOR</code>, or <code>VIEWER</code>) with
   * one or more IAM Identity CenterIAM; Identity Center identities.</p>
   */
  inline const Aws::Vector<ArgoCdRoleMapping>& GetRbacRoleMappings() const { return m_rbacRoleMappings; }
  inline bool RbacRoleMappingsHasBeenSet() const { return m_rbacRoleMappingsHasBeenSet; }
  template <typename RbacRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  void SetRbacRoleMappings(RbacRoleMappingsT&& value) {
    m_rbacRoleMappingsHasBeenSet = true;
    m_rbacRoleMappings = std::forward<RbacRoleMappingsT>(value);
  }
  template <typename RbacRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  ArgoCdConfigRequest& WithRbacRoleMappings(RbacRoleMappingsT&& value) {
    SetRbacRoleMappings(std::forward<RbacRoleMappingsT>(value));
    return *this;
  }
  template <typename RbacRoleMappingsT = ArgoCdRoleMapping>
  ArgoCdConfigRequest& AddRbacRoleMappings(RbacRoleMappingsT&& value) {
    m_rbacRoleMappingsHasBeenSet = true;
    m_rbacRoleMappings.emplace_back(std::forward<RbacRoleMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for network access to the Argo CD capability's managed API
   * server endpoint. By default, the Argo CD server is accessible via a public
   * endpoint. You can optionally specify one or more VPC endpoint IDs to enable
   * private connectivity from your VPCs. When VPC endpoints are configured, public
   * access is blocked and the Argo CD server is only accessible through the
   * specified VPC endpoints.</p>
   */
  inline const ArgoCdNetworkAccessConfigRequest& GetNetworkAccess() const { return m_networkAccess; }
  inline bool NetworkAccessHasBeenSet() const { return m_networkAccessHasBeenSet; }
  template <typename NetworkAccessT = ArgoCdNetworkAccessConfigRequest>
  void SetNetworkAccess(NetworkAccessT&& value) {
    m_networkAccessHasBeenSet = true;
    m_networkAccess = std::forward<NetworkAccessT>(value);
  }
  template <typename NetworkAccessT = ArgoCdNetworkAccessConfigRequest>
  ArgoCdConfigRequest& WithNetworkAccess(NetworkAccessT&& value) {
    SetNetworkAccess(std::forward<NetworkAccessT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_namespace;
  bool m_namespaceHasBeenSet = false;

  ArgoCdAwsIdcConfigRequest m_awsIdc;
  bool m_awsIdcHasBeenSet = false;

  Aws::Vector<ArgoCdRoleMapping> m_rbacRoleMappings;
  bool m_rbacRoleMappingsHasBeenSet = false;

  ArgoCdNetworkAccessConfigRequest m_networkAccess;
  bool m_networkAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

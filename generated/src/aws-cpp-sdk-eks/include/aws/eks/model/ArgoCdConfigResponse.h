/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ArgoCdAwsIdcConfigResponse.h>
#include <aws/eks/model/ArgoCdNetworkAccessConfigResponse.h>
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
 * <p>The response object containing Argo CD configuration details, including the
 * server URL that you use to access the Argo CD web interface and
 * API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ArgoCdConfigResponse">AWS
 * API Reference</a></p>
 */
class ArgoCdConfigResponse {
 public:
  AWS_EKS_API ArgoCdConfigResponse() = default;
  AWS_EKS_API ArgoCdConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ArgoCdConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Kubernetes namespace where Argo CD resources are monitored by your Argo
   * CD Capability.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  ArgoCdConfigResponse& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM Identity CenterIAM; Identity Center integration configuration.</p>
   */
  inline const ArgoCdAwsIdcConfigResponse& GetAwsIdc() const { return m_awsIdc; }
  inline bool AwsIdcHasBeenSet() const { return m_awsIdcHasBeenSet; }
  template <typename AwsIdcT = ArgoCdAwsIdcConfigResponse>
  void SetAwsIdc(AwsIdcT&& value) {
    m_awsIdcHasBeenSet = true;
    m_awsIdc = std::forward<AwsIdcT>(value);
  }
  template <typename AwsIdcT = ArgoCdAwsIdcConfigResponse>
  ArgoCdConfigResponse& WithAwsIdc(AwsIdcT&& value) {
    SetAwsIdc(std::forward<AwsIdcT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of role mappings that define which IAM Identity CenterIAM; Identity
   * Center users or groups have which Argo CD roles.</p>
   */
  inline const Aws::Vector<ArgoCdRoleMapping>& GetRbacRoleMappings() const { return m_rbacRoleMappings; }
  inline bool RbacRoleMappingsHasBeenSet() const { return m_rbacRoleMappingsHasBeenSet; }
  template <typename RbacRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  void SetRbacRoleMappings(RbacRoleMappingsT&& value) {
    m_rbacRoleMappingsHasBeenSet = true;
    m_rbacRoleMappings = std::forward<RbacRoleMappingsT>(value);
  }
  template <typename RbacRoleMappingsT = Aws::Vector<ArgoCdRoleMapping>>
  ArgoCdConfigResponse& WithRbacRoleMappings(RbacRoleMappingsT&& value) {
    SetRbacRoleMappings(std::forward<RbacRoleMappingsT>(value));
    return *this;
  }
  template <typename RbacRoleMappingsT = ArgoCdRoleMapping>
  ArgoCdConfigResponse& AddRbacRoleMappings(RbacRoleMappingsT&& value) {
    m_rbacRoleMappingsHasBeenSet = true;
    m_rbacRoleMappings.emplace_back(std::forward<RbacRoleMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network access configuration for the Argo CD capability's managed API
   * server endpoint. If VPC endpoint IDs are specified, public access is blocked and
   * the Argo CD server is only accessible through the specified VPC endpoints.</p>
   */
  inline const ArgoCdNetworkAccessConfigResponse& GetNetworkAccess() const { return m_networkAccess; }
  inline bool NetworkAccessHasBeenSet() const { return m_networkAccessHasBeenSet; }
  template <typename NetworkAccessT = ArgoCdNetworkAccessConfigResponse>
  void SetNetworkAccess(NetworkAccessT&& value) {
    m_networkAccessHasBeenSet = true;
    m_networkAccess = std::forward<NetworkAccessT>(value);
  }
  template <typename NetworkAccessT = ArgoCdNetworkAccessConfigResponse>
  ArgoCdConfigResponse& WithNetworkAccess(NetworkAccessT&& value) {
    SetNetworkAccess(std::forward<NetworkAccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the Argo CD server. Use this URL to access the Argo CD web
   * interface and API.</p>
   */
  inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
  inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
  template <typename ServerUrlT = Aws::String>
  void SetServerUrl(ServerUrlT&& value) {
    m_serverUrlHasBeenSet = true;
    m_serverUrl = std::forward<ServerUrlT>(value);
  }
  template <typename ServerUrlT = Aws::String>
  ArgoCdConfigResponse& WithServerUrl(ServerUrlT&& value) {
    SetServerUrl(std::forward<ServerUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_namespace;

  ArgoCdAwsIdcConfigResponse m_awsIdc;

  Aws::Vector<ArgoCdRoleMapping> m_rbacRoleMappings;

  ArgoCdNetworkAccessConfigResponse m_networkAccess;

  Aws::String m_serverUrl;
  bool m_namespaceHasBeenSet = false;
  bool m_awsIdcHasBeenSet = false;
  bool m_rbacRoleMappingsHasBeenSet = false;
  bool m_networkAccessHasBeenSet = false;
  bool m_serverUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

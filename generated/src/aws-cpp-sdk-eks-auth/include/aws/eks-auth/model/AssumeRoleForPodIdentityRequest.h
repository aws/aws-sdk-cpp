/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks-auth/EKSAuthRequest.h>
#include <aws/eks-auth/EKSAuth_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EKSAuth {
namespace Model {

/**
 */
class AssumeRoleForPodIdentityRequest : public EKSAuthRequest {
 public:
  AWS_EKSAUTH_API AssumeRoleForPodIdentityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssumeRoleForPodIdentity"; }

  AWS_EKSAUTH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the cluster for the request.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  AssumeRoleForPodIdentityRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token of the Kubernetes service account for the pod.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  AssumeRoleForPodIdentityRequest& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes node name of the worker node where the pod is running.</p>
   */
  inline const Aws::String& GetEksNodeName() const { return m_eksNodeName; }
  inline bool EksNodeNameHasBeenSet() const { return m_eksNodeNameHasBeenSet; }
  template <typename EksNodeNameT = Aws::String>
  void SetEksNodeName(EksNodeNameT&& value) {
    m_eksNodeNameHasBeenSet = true;
    m_eksNodeName = std::forward<EksNodeNameT>(value);
  }
  template <typename EksNodeNameT = Aws::String>
  AssumeRoleForPodIdentityRequest& WithEksNodeName(EksNodeNameT&& value) {
    SetEksNodeName(std::forward<EksNodeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EC2 instance ID of the worker node where the pod is running.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  AssumeRoleForPodIdentityRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID of the worker node where the pod is running.</p>
   */
  inline const Aws::String& GetZone() const { return m_zone; }
  inline bool ZoneHasBeenSet() const { return m_zoneHasBeenSet; }
  template <typename ZoneT = Aws::String>
  void SetZone(ZoneT&& value) {
    m_zoneHasBeenSet = true;
    m_zone = std::forward<ZoneT>(value);
  }
  template <typename ZoneT = Aws::String>
  AssumeRoleForPodIdentityRequest& WithZone(ZoneT&& value) {
    SetZone(std::forward<ZoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_token;

  Aws::String m_eksNodeName;

  Aws::String m_instanceId;

  Aws::String m_zone;
  bool m_clusterNameHasBeenSet = false;
  bool m_tokenHasBeenSet = false;
  bool m_eksNodeNameHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_zoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKSAuth
}  // namespace Aws

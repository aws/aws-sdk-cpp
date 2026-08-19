/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EKS {
namespace Model {

/**
 */
class ActivateCertificateAuthorityRequest : public EKSRequest {
 public:
  AWS_EKS_API ActivateCertificateAuthorityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ActivateCertificateAuthority"; }

  AWS_EKS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of your cluster.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  ActivateCertificateAuthorityRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the certificate authority to activate as the cluster's signing
   * certificate authority. This certificate authority must already exist on the
   * cluster and have a <code>distributionStatus</code> of <code>COMPLETE</code>.</p>
   */
  inline const Aws::String& GetCertificateAuthorityId() const { return m_certificateAuthorityId; }
  inline bool CertificateAuthorityIdHasBeenSet() const { return m_certificateAuthorityIdHasBeenSet; }
  template <typename CertificateAuthorityIdT = Aws::String>
  void SetCertificateAuthorityId(CertificateAuthorityIdT&& value) {
    m_certificateAuthorityIdHasBeenSet = true;
    m_certificateAuthorityId = std::forward<CertificateAuthorityIdT>(value);
  }
  template <typename CertificateAuthorityIdT = Aws::String>
  ActivateCertificateAuthorityRequest& WithCertificateAuthorityId(CertificateAuthorityIdT&& value) {
    SetCertificateAuthorityId(std::forward<CertificateAuthorityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  ActivateCertificateAuthorityRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_certificateAuthorityId;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clusterNameHasBeenSet = false;
  bool m_certificateAuthorityIdHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

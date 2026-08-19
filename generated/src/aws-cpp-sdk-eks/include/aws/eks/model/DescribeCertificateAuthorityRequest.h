/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EKS {
namespace Model {

/**
 */
class DescribeCertificateAuthorityRequest : public EKSRequest {
 public:
  AWS_EKS_API DescribeCertificateAuthorityRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeCertificateAuthority"; }

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
  DescribeCertificateAuthorityRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the certificate authority to describe.</p>
   */
  inline const Aws::String& GetCertificateAuthorityId() const { return m_certificateAuthorityId; }
  inline bool CertificateAuthorityIdHasBeenSet() const { return m_certificateAuthorityIdHasBeenSet; }
  template <typename CertificateAuthorityIdT = Aws::String>
  void SetCertificateAuthorityId(CertificateAuthorityIdT&& value) {
    m_certificateAuthorityIdHasBeenSet = true;
    m_certificateAuthorityId = std::forward<CertificateAuthorityIdT>(value);
  }
  template <typename CertificateAuthorityIdT = Aws::String>
  DescribeCertificateAuthorityRequest& WithCertificateAuthorityId(CertificateAuthorityIdT&& value) {
    SetCertificateAuthorityId(std::forward<CertificateAuthorityIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_certificateAuthorityId;
  bool m_clusterNameHasBeenSet = false;
  bool m_certificateAuthorityIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

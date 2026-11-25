/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/CertificateAssociationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>An association between an ACM certificate and a proxy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/CertificateAssociation">AWS
 * API Reference</a></p>
 */
class CertificateAssociation {
 public:
  AWS_ELBPROXY_API CertificateAssociation() = default;
  AWS_ELBPROXY_API CertificateAssociation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API CertificateAssociation& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACM certificate.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  CertificateAssociation& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the association.</p>
   */
  inline const CertificateAssociationStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = CertificateAssociationStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = CertificateAssociationStatus>
  CertificateAssociation& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CertificateAssociation& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateArn;

  CertificateAssociationStatus m_status;

  Aws::Utils::DateTime m_createdAt{};
  bool m_certificateArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws

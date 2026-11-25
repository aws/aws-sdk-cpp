/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/CertificateAssociation.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {
class AssociateCertificateResult {
 public:
  AWS_ELBPROXY_API AssociateCertificateResult() = default;
  AWS_ELBPROXY_API AssociateCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_ELBPROXY_API AssociateCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The certificate association.</p>
   */
  inline const CertificateAssociation& GetCertificateAssociation() const { return m_certificateAssociation; }
  template <typename CertificateAssociationT = CertificateAssociation>
  void SetCertificateAssociation(CertificateAssociationT&& value) {
    m_certificateAssociationHasBeenSet = true;
    m_certificateAssociation = std::forward<CertificateAssociationT>(value);
  }
  template <typename CertificateAssociationT = CertificateAssociation>
  AssociateCertificateResult& WithCertificateAssociation(CertificateAssociationT&& value) {
    SetCertificateAssociation(std::forward<CertificateAssociationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  AssociateCertificateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CertificateAssociation m_certificateAssociation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_certificateAssociationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws

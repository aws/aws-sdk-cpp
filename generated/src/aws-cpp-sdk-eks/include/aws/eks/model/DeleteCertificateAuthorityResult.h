/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CertificateAuthoritySummary.h>
#include <aws/eks/model/Update.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {
class DeleteCertificateAuthorityResult {
 public:
  AWS_EKS_API DeleteCertificateAuthorityResult() = default;
  AWS_EKS_API DeleteCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EKS_API DeleteCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An object representing the asynchronous update that removes the certificate
   * authority from the cluster's trust bundle.</p>
   */
  inline const Update& GetUpdate() const { return m_update; }
  template <typename UpdateT = Update>
  void SetUpdate(UpdateT&& value) {
    m_updateHasBeenSet = true;
    m_update = std::forward<UpdateT>(value);
  }
  template <typename UpdateT = Update>
  DeleteCertificateAuthorityResult& WithUpdate(UpdateT&& value) {
    SetUpdate(std::forward<UpdateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary information about the certificate authority that is being
   * deleted.</p>
   */
  inline const CertificateAuthoritySummary& GetCertificateAuthority() const { return m_certificateAuthority; }
  template <typename CertificateAuthorityT = CertificateAuthoritySummary>
  void SetCertificateAuthority(CertificateAuthorityT&& value) {
    m_certificateAuthorityHasBeenSet = true;
    m_certificateAuthority = std::forward<CertificateAuthorityT>(value);
  }
  template <typename CertificateAuthorityT = CertificateAuthoritySummary>
  DeleteCertificateAuthorityResult& WithCertificateAuthority(CertificateAuthorityT&& value) {
    SetCertificateAuthority(std::forward<CertificateAuthorityT>(value));
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
  DeleteCertificateAuthorityResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Update m_update;

  CertificateAuthoritySummary m_certificateAuthority;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_updateHasBeenSet = false;
  bool m_certificateAuthorityHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws

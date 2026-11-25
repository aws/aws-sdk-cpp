/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ELBProxy {
namespace Model {

/**
 */
class AssociateCertificateRequest : public ELBProxyRequest {
 public:
  AWS_ELBPROXY_API AssociateCertificateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateCertificate"; }

  AWS_ELBPROXY_API Aws::String SerializePayload() const override;

  AWS_ELBPROXY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the proxy.</p>
   */
  inline const Aws::String& GetProxyIdentifier() const { return m_proxyIdentifier; }
  inline bool ProxyIdentifierHasBeenSet() const { return m_proxyIdentifierHasBeenSet; }
  template <typename ProxyIdentifierT = Aws::String>
  void SetProxyIdentifier(ProxyIdentifierT&& value) {
    m_proxyIdentifierHasBeenSet = true;
    m_proxyIdentifier = std::forward<ProxyIdentifierT>(value);
  }
  template <typename ProxyIdentifierT = Aws::String>
  AssociateCertificateRequest& WithProxyIdentifier(ProxyIdentifierT&& value) {
    SetProxyIdentifier(std::forward<ProxyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACM certificate.</p>
   */
  inline const Aws::String& GetCertificateIdentifier() const { return m_certificateIdentifier; }
  inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }
  template <typename CertificateIdentifierT = Aws::String>
  void SetCertificateIdentifier(CertificateIdentifierT&& value) {
    m_certificateIdentifierHasBeenSet = true;
    m_certificateIdentifier = std::forward<CertificateIdentifierT>(value);
  }
  template <typename CertificateIdentifierT = Aws::String>
  AssociateCertificateRequest& WithCertificateIdentifier(CertificateIdentifierT&& value) {
    SetCertificateIdentifier(std::forward<CertificateIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyIdentifier;

  Aws::String m_certificateIdentifier;
  bool m_proxyIdentifierHasBeenSet = false;
  bool m_certificateIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws

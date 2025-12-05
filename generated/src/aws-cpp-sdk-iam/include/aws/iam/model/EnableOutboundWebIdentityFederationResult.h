/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {
class EnableOutboundWebIdentityFederationResult {
 public:
  AWS_IAM_API EnableOutboundWebIdentityFederationResult() = default;
  AWS_IAM_API EnableOutboundWebIdentityFederationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_IAM_API EnableOutboundWebIdentityFederationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A unique issuer URL for your Amazon Web Services account that hosts the
   * OpenID Connect (OIDC) discovery endpoints at
   * <code>/.well-known/openid-configuration and /.well-known/jwks.json</code>. The
   * OpenID Connect (OIDC) discovery endpoints contain verification keys and metadata
   * necessary for token verification.</p>
   */
  inline const Aws::String& GetIssuerIdentifier() const { return m_issuerIdentifier; }
  template <typename IssuerIdentifierT = Aws::String>
  void SetIssuerIdentifier(IssuerIdentifierT&& value) {
    m_issuerIdentifierHasBeenSet = true;
    m_issuerIdentifier = std::forward<IssuerIdentifierT>(value);
  }
  template <typename IssuerIdentifierT = Aws::String>
  EnableOutboundWebIdentityFederationResult& WithIssuerIdentifier(IssuerIdentifierT&& value) {
    SetIssuerIdentifier(std::forward<IssuerIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  EnableOutboundWebIdentityFederationResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issuerIdentifier;

  ResponseMetadata m_responseMetadata;
  bool m_issuerIdentifierHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws

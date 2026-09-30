/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ClientVpnAuthorizationPolicyShadowMode.h>
#include <aws/ec2/model/ClientVpnAuthorizationPolicyStatus.h>
#include <aws/ec2/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class GetClientVpnEndpointAuthorizationPolicyResponse {
 public:
  AWS_EC2_API GetClientVpnEndpointAuthorizationPolicyResponse() = default;
  AWS_EC2_API GetClientVpnEndpointAuthorizationPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetClientVpnEndpointAuthorizationPolicyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the Client VPN endpoint.</p>
   */
  inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
  template <typename ClientVpnEndpointIdT = Aws::String>
  void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    m_clientVpnEndpointIdHasBeenSet = true;
    m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value);
  }
  template <typename ClientVpnEndpointIdT = Aws::String>
  GetClientVpnEndpointAuthorizationPolicyResponse& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization policy document, written in the Cedar policy language.</p>
   */
  inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
  template <typename PolicyDocumentT = Aws::String>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::String>
  GetClientVpnEndpointAuthorizationPolicyResponse& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A brief description of the authorization policy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetClientVpnEndpointAuthorizationPolicyResponse& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the authorization policy is evaluated in shadow mode.
   * Possible values include:</p> <ul> <li> <p> <code>enabled</code> - The
   * authorization policy is evaluated and the results are logged, but access is not
   * enforced.</p> </li> <li> <p> <code>disabled</code> - The authorization policy is
   * enforced.</p> </li> </ul>
   */
  inline ClientVpnAuthorizationPolicyShadowMode GetShadowMode() const { return m_shadowMode; }
  inline void SetShadowMode(ClientVpnAuthorizationPolicyShadowMode value) {
    m_shadowModeHasBeenSet = true;
    m_shadowMode = value;
  }
  inline GetClientVpnEndpointAuthorizationPolicyResponse& WithShadowMode(ClientVpnAuthorizationPolicyShadowMode value) {
    SetShadowMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the authorization policy.</p>
   */
  inline ClientVpnAuthorizationPolicyStatus GetStatus() const { return m_status; }
  inline void SetStatus(ClientVpnAuthorizationPolicyStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetClientVpnEndpointAuthorizationPolicyResponse& WithStatus(ClientVpnAuthorizationPolicyStatus value) {
    SetStatus(value);
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
  GetClientVpnEndpointAuthorizationPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clientVpnEndpointId;

  Aws::String m_policyDocument;

  Aws::String m_description;

  ClientVpnAuthorizationPolicyShadowMode m_shadowMode{ClientVpnAuthorizationPolicyShadowMode::NOT_SET};

  ClientVpnAuthorizationPolicyStatus m_status{ClientVpnAuthorizationPolicyStatus::NOT_SET};

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clientVpnEndpointIdHasBeenSet = false;
  bool m_policyDocumentHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_shadowModeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
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
class ModifyClientVpnEndpointAuthorizationPolicyResponse {
 public:
  AWS_EC2_API ModifyClientVpnEndpointAuthorizationPolicyResponse() = default;
  AWS_EC2_API ModifyClientVpnEndpointAuthorizationPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyClientVpnEndpointAuthorizationPolicyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The current state of the authorization policy.</p>
   */
  inline ClientVpnAuthorizationPolicyStatus GetStatus() const { return m_status; }
  inline void SetStatus(ClientVpnAuthorizationPolicyStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ModifyClientVpnEndpointAuthorizationPolicyResponse& WithStatus(ClientVpnAuthorizationPolicyStatus value) {
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
  ModifyClientVpnEndpointAuthorizationPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ClientVpnAuthorizationPolicyStatus m_status{ClientVpnAuthorizationPolicyStatus::NOT_SET};

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

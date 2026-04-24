/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayClientVpnAttachment.h>

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
class RejectTransitGatewayClientVpnAttachmentResponse {
 public:
  AWS_EC2_API RejectTransitGatewayClientVpnAttachmentResponse() = default;
  AWS_EC2_API RejectTransitGatewayClientVpnAttachmentResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API RejectTransitGatewayClientVpnAttachmentResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the Transit Gateway Client VPN attachment.</p>
   */
  inline const TransitGatewayClientVpnAttachment& GetTransitGatewayClientVpnAttachment() const {
    return m_transitGatewayClientVpnAttachment;
  }
  template <typename TransitGatewayClientVpnAttachmentT = TransitGatewayClientVpnAttachment>
  void SetTransitGatewayClientVpnAttachment(TransitGatewayClientVpnAttachmentT&& value) {
    m_transitGatewayClientVpnAttachmentHasBeenSet = true;
    m_transitGatewayClientVpnAttachment = std::forward<TransitGatewayClientVpnAttachmentT>(value);
  }
  template <typename TransitGatewayClientVpnAttachmentT = TransitGatewayClientVpnAttachment>
  RejectTransitGatewayClientVpnAttachmentResponse& WithTransitGatewayClientVpnAttachment(TransitGatewayClientVpnAttachmentT&& value) {
    SetTransitGatewayClientVpnAttachment(std::forward<TransitGatewayClientVpnAttachmentT>(value));
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
  RejectTransitGatewayClientVpnAttachmentResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TransitGatewayClientVpnAttachment m_transitGatewayClientVpnAttachment;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_transitGatewayClientVpnAttachmentHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

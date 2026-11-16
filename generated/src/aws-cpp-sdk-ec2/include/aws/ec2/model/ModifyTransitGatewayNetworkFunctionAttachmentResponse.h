/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayNetworkFunctionAttachment.h>

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
class ModifyTransitGatewayNetworkFunctionAttachmentResponse {
 public:
  AWS_EC2_API ModifyTransitGatewayNetworkFunctionAttachmentResponse() = default;
  AWS_EC2_API ModifyTransitGatewayNetworkFunctionAttachmentResponse(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyTransitGatewayNetworkFunctionAttachmentResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the network function attachment.</p>
   */
  inline const TransitGatewayNetworkFunctionAttachment& GetTransitGatewayNetworkFunctionAttachment() const {
    return m_transitGatewayNetworkFunctionAttachment;
  }
  template <typename TransitGatewayNetworkFunctionAttachmentT = TransitGatewayNetworkFunctionAttachment>
  void SetTransitGatewayNetworkFunctionAttachment(TransitGatewayNetworkFunctionAttachmentT&& value) {
    m_transitGatewayNetworkFunctionAttachmentHasBeenSet = true;
    m_transitGatewayNetworkFunctionAttachment = std::forward<TransitGatewayNetworkFunctionAttachmentT>(value);
  }
  template <typename TransitGatewayNetworkFunctionAttachmentT = TransitGatewayNetworkFunctionAttachment>
  ModifyTransitGatewayNetworkFunctionAttachmentResponse& WithTransitGatewayNetworkFunctionAttachment(
      TransitGatewayNetworkFunctionAttachmentT&& value) {
    SetTransitGatewayNetworkFunctionAttachment(std::forward<TransitGatewayNetworkFunctionAttachmentT>(value));
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
  ModifyTransitGatewayNetworkFunctionAttachmentResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TransitGatewayNetworkFunctionAttachment m_transitGatewayNetworkFunctionAttachment;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_transitGatewayNetworkFunctionAttachmentHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

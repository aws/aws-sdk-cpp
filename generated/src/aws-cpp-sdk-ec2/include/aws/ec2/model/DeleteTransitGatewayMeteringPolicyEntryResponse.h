/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyEntry.h>

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
class DeleteTransitGatewayMeteringPolicyEntryResponse {
 public:
  AWS_EC2_API DeleteTransitGatewayMeteringPolicyEntryResponse() = default;
  AWS_EC2_API DeleteTransitGatewayMeteringPolicyEntryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteTransitGatewayMeteringPolicyEntryResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the deleted transit gateway metering policy entry.</p>
   */
  inline const TransitGatewayMeteringPolicyEntry& GetTransitGatewayMeteringPolicyEntry() const {
    return m_transitGatewayMeteringPolicyEntry;
  }
  template <typename TransitGatewayMeteringPolicyEntryT = TransitGatewayMeteringPolicyEntry>
  void SetTransitGatewayMeteringPolicyEntry(TransitGatewayMeteringPolicyEntryT&& value) {
    m_transitGatewayMeteringPolicyEntryHasBeenSet = true;
    m_transitGatewayMeteringPolicyEntry = std::forward<TransitGatewayMeteringPolicyEntryT>(value);
  }
  template <typename TransitGatewayMeteringPolicyEntryT = TransitGatewayMeteringPolicyEntry>
  DeleteTransitGatewayMeteringPolicyEntryResponse& WithTransitGatewayMeteringPolicyEntry(TransitGatewayMeteringPolicyEntryT&& value) {
    SetTransitGatewayMeteringPolicyEntry(std::forward<TransitGatewayMeteringPolicyEntryT>(value));
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
  DeleteTransitGatewayMeteringPolicyEntryResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  TransitGatewayMeteringPolicyEntry m_transitGatewayMeteringPolicyEntry;

  ResponseMetadata m_responseMetadata;
  bool m_transitGatewayMeteringPolicyEntryHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

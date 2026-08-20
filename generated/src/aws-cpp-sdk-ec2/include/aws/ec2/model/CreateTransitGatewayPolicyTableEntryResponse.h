/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPolicyTableEntry.h>

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
class CreateTransitGatewayPolicyTableEntryResponse {
 public:
  AWS_EC2_API CreateTransitGatewayPolicyTableEntryResponse() = default;
  AWS_EC2_API CreateTransitGatewayPolicyTableEntryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateTransitGatewayPolicyTableEntryResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Describes a transit gateway policy table entry</p>
   */
  inline const TransitGatewayPolicyTableEntry& GetTransitGatewayPolicyTableEntry() const { return m_transitGatewayPolicyTableEntry; }
  template <typename TransitGatewayPolicyTableEntryT = TransitGatewayPolicyTableEntry>
  void SetTransitGatewayPolicyTableEntry(TransitGatewayPolicyTableEntryT&& value) {
    m_transitGatewayPolicyTableEntryHasBeenSet = true;
    m_transitGatewayPolicyTableEntry = std::forward<TransitGatewayPolicyTableEntryT>(value);
  }
  template <typename TransitGatewayPolicyTableEntryT = TransitGatewayPolicyTableEntry>
  CreateTransitGatewayPolicyTableEntryResponse& WithTransitGatewayPolicyTableEntry(TransitGatewayPolicyTableEntryT&& value) {
    SetTransitGatewayPolicyTableEntry(std::forward<TransitGatewayPolicyTableEntryT>(value));
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
  CreateTransitGatewayPolicyTableEntryResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TransitGatewayPolicyTableEntry m_transitGatewayPolicyTableEntry;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_transitGatewayPolicyTableEntryHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

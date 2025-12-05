/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicy.h>

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
class ModifyTransitGatewayMeteringPolicyResponse {
 public:
  AWS_EC2_API ModifyTransitGatewayMeteringPolicyResponse() = default;
  AWS_EC2_API ModifyTransitGatewayMeteringPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyTransitGatewayMeteringPolicyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the modified transit gateway metering policy.</p>
   */
  inline const TransitGatewayMeteringPolicy& GetTransitGatewayMeteringPolicy() const { return m_transitGatewayMeteringPolicy; }
  template <typename TransitGatewayMeteringPolicyT = TransitGatewayMeteringPolicy>
  void SetTransitGatewayMeteringPolicy(TransitGatewayMeteringPolicyT&& value) {
    m_transitGatewayMeteringPolicyHasBeenSet = true;
    m_transitGatewayMeteringPolicy = std::forward<TransitGatewayMeteringPolicyT>(value);
  }
  template <typename TransitGatewayMeteringPolicyT = TransitGatewayMeteringPolicy>
  ModifyTransitGatewayMeteringPolicyResponse& WithTransitGatewayMeteringPolicy(TransitGatewayMeteringPolicyT&& value) {
    SetTransitGatewayMeteringPolicy(std::forward<TransitGatewayMeteringPolicyT>(value));
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
  ModifyTransitGatewayMeteringPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  TransitGatewayMeteringPolicy m_transitGatewayMeteringPolicy;

  ResponseMetadata m_responseMetadata;
  bool m_transitGatewayMeteringPolicyHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

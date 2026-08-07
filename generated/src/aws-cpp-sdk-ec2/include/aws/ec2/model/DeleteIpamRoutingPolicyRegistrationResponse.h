/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistrationDelta.h>
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
class DeleteIpamRoutingPolicyRegistrationResponse {
 public:
  AWS_EC2_API DeleteIpamRoutingPolicyRegistrationResponse() = default;
  AWS_EC2_API DeleteIpamRoutingPolicyRegistrationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteIpamRoutingPolicyRegistrationResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the routing policy registration delta created by this
   * deletion.</p>
   */
  inline const IpamRoutingPolicyRegistrationDelta& GetIpamRoutingPolicyRegistrationDelta() const {
    return m_ipamRoutingPolicyRegistrationDelta;
  }
  template <typename IpamRoutingPolicyRegistrationDeltaT = IpamRoutingPolicyRegistrationDelta>
  void SetIpamRoutingPolicyRegistrationDelta(IpamRoutingPolicyRegistrationDeltaT&& value) {
    m_ipamRoutingPolicyRegistrationDeltaHasBeenSet = true;
    m_ipamRoutingPolicyRegistrationDelta = std::forward<IpamRoutingPolicyRegistrationDeltaT>(value);
  }
  template <typename IpamRoutingPolicyRegistrationDeltaT = IpamRoutingPolicyRegistrationDelta>
  DeleteIpamRoutingPolicyRegistrationResponse& WithIpamRoutingPolicyRegistrationDelta(IpamRoutingPolicyRegistrationDeltaT&& value) {
    SetIpamRoutingPolicyRegistrationDelta(std::forward<IpamRoutingPolicyRegistrationDeltaT>(value));
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
  DeleteIpamRoutingPolicyRegistrationResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  IpamRoutingPolicyRegistrationDelta m_ipamRoutingPolicyRegistrationDelta;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ipamRoutingPolicyRegistrationDeltaHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

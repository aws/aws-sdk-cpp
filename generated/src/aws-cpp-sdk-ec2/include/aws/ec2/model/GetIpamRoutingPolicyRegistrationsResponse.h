/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistration.h>
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
class GetIpamRoutingPolicyRegistrationsResponse {
 public:
  AWS_EC2_API GetIpamRoutingPolicyRegistrationsResponse() = default;
  AWS_EC2_API GetIpamRoutingPolicyRegistrationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamRoutingPolicyRegistrationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The routing policy registrations.</p>
   */
  inline const Aws::Vector<IpamRoutingPolicyRegistration>& GetIpamRoutingPolicyRegistrations() const {
    return m_ipamRoutingPolicyRegistrations;
  }
  template <typename IpamRoutingPolicyRegistrationsT = Aws::Vector<IpamRoutingPolicyRegistration>>
  void SetIpamRoutingPolicyRegistrations(IpamRoutingPolicyRegistrationsT&& value) {
    m_ipamRoutingPolicyRegistrationsHasBeenSet = true;
    m_ipamRoutingPolicyRegistrations = std::forward<IpamRoutingPolicyRegistrationsT>(value);
  }
  template <typename IpamRoutingPolicyRegistrationsT = Aws::Vector<IpamRoutingPolicyRegistration>>
  GetIpamRoutingPolicyRegistrationsResponse& WithIpamRoutingPolicyRegistrations(IpamRoutingPolicyRegistrationsT&& value) {
    SetIpamRoutingPolicyRegistrations(std::forward<IpamRoutingPolicyRegistrationsT>(value));
    return *this;
  }
  template <typename IpamRoutingPolicyRegistrationsT = IpamRoutingPolicyRegistration>
  GetIpamRoutingPolicyRegistrationsResponse& AddIpamRoutingPolicyRegistrations(IpamRoutingPolicyRegistrationsT&& value) {
    m_ipamRoutingPolicyRegistrationsHasBeenSet = true;
    m_ipamRoutingPolicyRegistrations.emplace_back(std::forward<IpamRoutingPolicyRegistrationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetIpamRoutingPolicyRegistrationsResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  GetIpamRoutingPolicyRegistrationsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IpamRoutingPolicyRegistration> m_ipamRoutingPolicyRegistrations;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ipamRoutingPolicyRegistrationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

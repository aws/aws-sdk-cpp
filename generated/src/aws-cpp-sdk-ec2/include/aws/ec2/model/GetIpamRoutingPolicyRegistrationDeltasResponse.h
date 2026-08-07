/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class GetIpamRoutingPolicyRegistrationDeltasResponse {
 public:
  AWS_EC2_API GetIpamRoutingPolicyRegistrationDeltasResponse() = default;
  AWS_EC2_API GetIpamRoutingPolicyRegistrationDeltasResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamRoutingPolicyRegistrationDeltasResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The routing policy registration deltas.</p>
   */
  inline const Aws::Vector<IpamRoutingPolicyRegistrationDelta>& GetIpamRoutingPolicyRegistrationDeltas() const {
    return m_ipamRoutingPolicyRegistrationDeltas;
  }
  template <typename IpamRoutingPolicyRegistrationDeltasT = Aws::Vector<IpamRoutingPolicyRegistrationDelta>>
  void SetIpamRoutingPolicyRegistrationDeltas(IpamRoutingPolicyRegistrationDeltasT&& value) {
    m_ipamRoutingPolicyRegistrationDeltasHasBeenSet = true;
    m_ipamRoutingPolicyRegistrationDeltas = std::forward<IpamRoutingPolicyRegistrationDeltasT>(value);
  }
  template <typename IpamRoutingPolicyRegistrationDeltasT = Aws::Vector<IpamRoutingPolicyRegistrationDelta>>
  GetIpamRoutingPolicyRegistrationDeltasResponse& WithIpamRoutingPolicyRegistrationDeltas(IpamRoutingPolicyRegistrationDeltasT&& value) {
    SetIpamRoutingPolicyRegistrationDeltas(std::forward<IpamRoutingPolicyRegistrationDeltasT>(value));
    return *this;
  }
  template <typename IpamRoutingPolicyRegistrationDeltasT = IpamRoutingPolicyRegistrationDelta>
  GetIpamRoutingPolicyRegistrationDeltasResponse& AddIpamRoutingPolicyRegistrationDeltas(IpamRoutingPolicyRegistrationDeltasT&& value) {
    m_ipamRoutingPolicyRegistrationDeltasHasBeenSet = true;
    m_ipamRoutingPolicyRegistrationDeltas.emplace_back(std::forward<IpamRoutingPolicyRegistrationDeltasT>(value));
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
  GetIpamRoutingPolicyRegistrationDeltasResponse& WithNextToken(NextTokenT&& value) {
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
  GetIpamRoutingPolicyRegistrationDeltasResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IpamRoutingPolicyRegistrationDelta> m_ipamRoutingPolicyRegistrationDeltas;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ipamRoutingPolicyRegistrationDeltasHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

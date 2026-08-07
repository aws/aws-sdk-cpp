/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamRouteProtectionFinding.h>
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
class GetIpamRouteProtectionFindingsResponse {
 public:
  AWS_EC2_API GetIpamRouteProtectionFindingsResponse() = default;
  AWS_EC2_API GetIpamRouteProtectionFindingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamRouteProtectionFindingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the IPAM.</p>
   */
  inline const Aws::String& GetIpamId() const { return m_ipamId; }
  template <typename IpamIdT = Aws::String>
  void SetIpamId(IpamIdT&& value) {
    m_ipamIdHasBeenSet = true;
    m_ipamId = std::forward<IpamIdT>(value);
  }
  template <typename IpamIdT = Aws::String>
  GetIpamRouteProtectionFindingsResponse& WithIpamId(IpamIdT&& value) {
    SetIpamId(std::forward<IpamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The route protection findings.</p>
   */
  inline const Aws::Vector<IpamRouteProtectionFinding>& GetRouteProtectionFindings() const { return m_routeProtectionFindings; }
  template <typename RouteProtectionFindingsT = Aws::Vector<IpamRouteProtectionFinding>>
  void SetRouteProtectionFindings(RouteProtectionFindingsT&& value) {
    m_routeProtectionFindingsHasBeenSet = true;
    m_routeProtectionFindings = std::forward<RouteProtectionFindingsT>(value);
  }
  template <typename RouteProtectionFindingsT = Aws::Vector<IpamRouteProtectionFinding>>
  GetIpamRouteProtectionFindingsResponse& WithRouteProtectionFindings(RouteProtectionFindingsT&& value) {
    SetRouteProtectionFindings(std::forward<RouteProtectionFindingsT>(value));
    return *this;
  }
  template <typename RouteProtectionFindingsT = IpamRouteProtectionFinding>
  GetIpamRouteProtectionFindingsResponse& AddRouteProtectionFindings(RouteProtectionFindingsT&& value) {
    m_routeProtectionFindingsHasBeenSet = true;
    m_routeProtectionFindings.emplace_back(std::forward<RouteProtectionFindingsT>(value));
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
  GetIpamRouteProtectionFindingsResponse& WithNextToken(NextTokenT&& value) {
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
  GetIpamRouteProtectionFindingsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_ipamId;

  Aws::Vector<IpamRouteProtectionFinding> m_routeProtectionFindings;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ipamIdHasBeenSet = false;
  bool m_routeProtectionFindingsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamRouteOriginAuthorizationInfo.h>
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
class GetIpamRouteOriginAuthorizationsResponse {
 public:
  AWS_EC2_API GetIpamRouteOriginAuthorizationsResponse() = default;
  AWS_EC2_API GetIpamRouteOriginAuthorizationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamRouteOriginAuthorizationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The Route Origin Authorizations published to the RPKI.</p>
   */
  inline const Aws::Vector<IpamRouteOriginAuthorizationInfo>& GetIpamRouteOriginAuthorizations() const {
    return m_ipamRouteOriginAuthorizations;
  }
  template <typename IpamRouteOriginAuthorizationsT = Aws::Vector<IpamRouteOriginAuthorizationInfo>>
  void SetIpamRouteOriginAuthorizations(IpamRouteOriginAuthorizationsT&& value) {
    m_ipamRouteOriginAuthorizationsHasBeenSet = true;
    m_ipamRouteOriginAuthorizations = std::forward<IpamRouteOriginAuthorizationsT>(value);
  }
  template <typename IpamRouteOriginAuthorizationsT = Aws::Vector<IpamRouteOriginAuthorizationInfo>>
  GetIpamRouteOriginAuthorizationsResponse& WithIpamRouteOriginAuthorizations(IpamRouteOriginAuthorizationsT&& value) {
    SetIpamRouteOriginAuthorizations(std::forward<IpamRouteOriginAuthorizationsT>(value));
    return *this;
  }
  template <typename IpamRouteOriginAuthorizationsT = IpamRouteOriginAuthorizationInfo>
  GetIpamRouteOriginAuthorizationsResponse& AddIpamRouteOriginAuthorizations(IpamRouteOriginAuthorizationsT&& value) {
    m_ipamRouteOriginAuthorizationsHasBeenSet = true;
    m_ipamRouteOriginAuthorizations.emplace_back(std::forward<IpamRouteOriginAuthorizationsT>(value));
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
  GetIpamRouteOriginAuthorizationsResponse& WithNextToken(NextTokenT&& value) {
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
  GetIpamRouteOriginAuthorizationsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<IpamRouteOriginAuthorizationInfo> m_ipamRouteOriginAuthorizations;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ipamRouteOriginAuthorizationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamInternetRegistryAssociationCidr.h>
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
class GetIpamInternetRegistryAssociationCidrsResponse {
 public:
  AWS_EC2_API GetIpamInternetRegistryAssociationCidrsResponse() = default;
  AWS_EC2_API GetIpamInternetRegistryAssociationCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamInternetRegistryAssociationCidrsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
  GetIpamInternetRegistryAssociationCidrsResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDRs registered with the internet registry.</p>
   */
  inline const Aws::Vector<IpamInternetRegistryAssociationCidr>& GetIpamInternetRegistryAssociationCidrs() const {
    return m_ipamInternetRegistryAssociationCidrs;
  }
  template <typename IpamInternetRegistryAssociationCidrsT = Aws::Vector<IpamInternetRegistryAssociationCidr>>
  void SetIpamInternetRegistryAssociationCidrs(IpamInternetRegistryAssociationCidrsT&& value) {
    m_ipamInternetRegistryAssociationCidrsHasBeenSet = true;
    m_ipamInternetRegistryAssociationCidrs = std::forward<IpamInternetRegistryAssociationCidrsT>(value);
  }
  template <typename IpamInternetRegistryAssociationCidrsT = Aws::Vector<IpamInternetRegistryAssociationCidr>>
  GetIpamInternetRegistryAssociationCidrsResponse& WithIpamInternetRegistryAssociationCidrs(IpamInternetRegistryAssociationCidrsT&& value) {
    SetIpamInternetRegistryAssociationCidrs(std::forward<IpamInternetRegistryAssociationCidrsT>(value));
    return *this;
  }
  template <typename IpamInternetRegistryAssociationCidrsT = IpamInternetRegistryAssociationCidr>
  GetIpamInternetRegistryAssociationCidrsResponse& AddIpamInternetRegistryAssociationCidrs(IpamInternetRegistryAssociationCidrsT&& value) {
    m_ipamInternetRegistryAssociationCidrsHasBeenSet = true;
    m_ipamInternetRegistryAssociationCidrs.emplace_back(std::forward<IpamInternetRegistryAssociationCidrsT>(value));
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
  GetIpamInternetRegistryAssociationCidrsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<IpamInternetRegistryAssociationCidr> m_ipamInternetRegistryAssociationCidrs;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationCidrsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

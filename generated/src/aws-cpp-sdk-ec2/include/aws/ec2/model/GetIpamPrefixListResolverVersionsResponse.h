/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverVersion.h>
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
class GetIpamPrefixListResolverVersionsResponse {
 public:
  AWS_EC2_API GetIpamPrefixListResolverVersionsResponse() = default;
  AWS_EC2_API GetIpamPrefixListResolverVersionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamPrefixListResolverVersionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the IPAM prefix list resolver versions.</p>
   */
  inline const Aws::Vector<IpamPrefixListResolverVersion>& GetIpamPrefixListResolverVersions() const {
    return m_ipamPrefixListResolverVersions;
  }
  template <typename IpamPrefixListResolverVersionsT = Aws::Vector<IpamPrefixListResolverVersion>>
  void SetIpamPrefixListResolverVersions(IpamPrefixListResolverVersionsT&& value) {
    m_ipamPrefixListResolverVersionsHasBeenSet = true;
    m_ipamPrefixListResolverVersions = std::forward<IpamPrefixListResolverVersionsT>(value);
  }
  template <typename IpamPrefixListResolverVersionsT = Aws::Vector<IpamPrefixListResolverVersion>>
  GetIpamPrefixListResolverVersionsResponse& WithIpamPrefixListResolverVersions(IpamPrefixListResolverVersionsT&& value) {
    SetIpamPrefixListResolverVersions(std::forward<IpamPrefixListResolverVersionsT>(value));
    return *this;
  }
  template <typename IpamPrefixListResolverVersionsT = IpamPrefixListResolverVersion>
  GetIpamPrefixListResolverVersionsResponse& AddIpamPrefixListResolverVersions(IpamPrefixListResolverVersionsT&& value) {
    m_ipamPrefixListResolverVersionsHasBeenSet = true;
    m_ipamPrefixListResolverVersions.emplace_back(std::forward<IpamPrefixListResolverVersionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetIpamPrefixListResolverVersionsResponse& WithNextToken(NextTokenT&& value) {
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
  GetIpamPrefixListResolverVersionsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IpamPrefixListResolverVersion> m_ipamPrefixListResolverVersions;
  bool m_ipamPrefixListResolverVersionsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

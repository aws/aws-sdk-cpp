/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolver.h>
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
class DescribeIpamPrefixListResolversResponse {
 public:
  AWS_EC2_API DescribeIpamPrefixListResolversResponse() = default;
  AWS_EC2_API DescribeIpamPrefixListResolversResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeIpamPrefixListResolversResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
  DescribeIpamPrefixListResolversResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the IPAM prefix list resolvers.</p>
   */
  inline const Aws::Vector<IpamPrefixListResolver>& GetIpamPrefixListResolvers() const { return m_ipamPrefixListResolvers; }
  template <typename IpamPrefixListResolversT = Aws::Vector<IpamPrefixListResolver>>
  void SetIpamPrefixListResolvers(IpamPrefixListResolversT&& value) {
    m_ipamPrefixListResolversHasBeenSet = true;
    m_ipamPrefixListResolvers = std::forward<IpamPrefixListResolversT>(value);
  }
  template <typename IpamPrefixListResolversT = Aws::Vector<IpamPrefixListResolver>>
  DescribeIpamPrefixListResolversResponse& WithIpamPrefixListResolvers(IpamPrefixListResolversT&& value) {
    SetIpamPrefixListResolvers(std::forward<IpamPrefixListResolversT>(value));
    return *this;
  }
  template <typename IpamPrefixListResolversT = IpamPrefixListResolver>
  DescribeIpamPrefixListResolversResponse& AddIpamPrefixListResolvers(IpamPrefixListResolversT&& value) {
    m_ipamPrefixListResolversHasBeenSet = true;
    m_ipamPrefixListResolvers.emplace_back(std::forward<IpamPrefixListResolversT>(value));
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
  DescribeIpamPrefixListResolversResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<IpamPrefixListResolver> m_ipamPrefixListResolvers;

  ResponseMetadata m_responseMetadata;
  bool m_nextTokenHasBeenSet = false;
  bool m_ipamPrefixListResolversHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

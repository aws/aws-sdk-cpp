/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPrefixListResolverTarget.h>
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
class DescribeIpamPrefixListResolverTargetsResponse {
 public:
  AWS_EC2_API DescribeIpamPrefixListResolverTargetsResponse() = default;
  AWS_EC2_API DescribeIpamPrefixListResolverTargetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeIpamPrefixListResolverTargetsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
  DescribeIpamPrefixListResolverTargetsResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the IPAM prefix list resolver Targets.</p>
   */
  inline const Aws::Vector<IpamPrefixListResolverTarget>& GetIpamPrefixListResolverTargets() const {
    return m_ipamPrefixListResolverTargets;
  }
  template <typename IpamPrefixListResolverTargetsT = Aws::Vector<IpamPrefixListResolverTarget>>
  void SetIpamPrefixListResolverTargets(IpamPrefixListResolverTargetsT&& value) {
    m_ipamPrefixListResolverTargetsHasBeenSet = true;
    m_ipamPrefixListResolverTargets = std::forward<IpamPrefixListResolverTargetsT>(value);
  }
  template <typename IpamPrefixListResolverTargetsT = Aws::Vector<IpamPrefixListResolverTarget>>
  DescribeIpamPrefixListResolverTargetsResponse& WithIpamPrefixListResolverTargets(IpamPrefixListResolverTargetsT&& value) {
    SetIpamPrefixListResolverTargets(std::forward<IpamPrefixListResolverTargetsT>(value));
    return *this;
  }
  template <typename IpamPrefixListResolverTargetsT = IpamPrefixListResolverTarget>
  DescribeIpamPrefixListResolverTargetsResponse& AddIpamPrefixListResolverTargets(IpamPrefixListResolverTargetsT&& value) {
    m_ipamPrefixListResolverTargetsHasBeenSet = true;
    m_ipamPrefixListResolverTargets.emplace_back(std::forward<IpamPrefixListResolverTargetsT>(value));
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
  DescribeIpamPrefixListResolverTargetsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<IpamPrefixListResolverTarget> m_ipamPrefixListResolverTargets;

  ResponseMetadata m_responseMetadata;
  bool m_nextTokenHasBeenSet = false;
  bool m_ipamPrefixListResolverTargetsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

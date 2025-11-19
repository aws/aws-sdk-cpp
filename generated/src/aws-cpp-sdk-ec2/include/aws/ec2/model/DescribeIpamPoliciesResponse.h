/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicy.h>
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
class DescribeIpamPoliciesResponse {
 public:
  AWS_EC2_API DescribeIpamPoliciesResponse() = default;
  AWS_EC2_API DescribeIpamPoliciesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeIpamPoliciesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
  DescribeIpamPoliciesResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the IPAM policies.</p> <p>An IPAM policy is a set of rules
   * that define how public IPv4 addresses from IPAM pools are allocated to Amazon
   * Web Services resources. Each rule maps an Amazon Web Services service to IPAM
   * pools that the service will use to get IP addresses. A single policy can have
   * multiple rules and be applied to multiple Amazon Web Services Regions. If the
   * IPAM pool run out of addresses then the services fallback to Amazon-provided IP
   * addresses. A policy can be applied to an individual Amazon Web Services account
   * or an entity within Amazon Web Services Organizations.</p>
   */
  inline const Aws::Vector<IpamPolicy>& GetIpamPolicies() const { return m_ipamPolicies; }
  template <typename IpamPoliciesT = Aws::Vector<IpamPolicy>>
  void SetIpamPolicies(IpamPoliciesT&& value) {
    m_ipamPoliciesHasBeenSet = true;
    m_ipamPolicies = std::forward<IpamPoliciesT>(value);
  }
  template <typename IpamPoliciesT = Aws::Vector<IpamPolicy>>
  DescribeIpamPoliciesResponse& WithIpamPolicies(IpamPoliciesT&& value) {
    SetIpamPolicies(std::forward<IpamPoliciesT>(value));
    return *this;
  }
  template <typename IpamPoliciesT = IpamPolicy>
  DescribeIpamPoliciesResponse& AddIpamPolicies(IpamPoliciesT&& value) {
    m_ipamPoliciesHasBeenSet = true;
    m_ipamPolicies.emplace_back(std::forward<IpamPoliciesT>(value));
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
  DescribeIpamPoliciesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<IpamPolicy> m_ipamPolicies;
  bool m_ipamPoliciesHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

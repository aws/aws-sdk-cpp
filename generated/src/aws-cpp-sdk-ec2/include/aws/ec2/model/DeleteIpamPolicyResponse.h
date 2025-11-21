/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class DeleteIpamPolicyResponse {
 public:
  AWS_EC2_API DeleteIpamPolicyResponse() = default;
  AWS_EC2_API DeleteIpamPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteIpamPolicyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the deleted IPAM policy.</p> <p>An IPAM policy is a set of
   * rules that define how public IPv4 addresses from IPAM pools are allocated to
   * Amazon Web Services resources. Each rule maps an Amazon Web Services service to
   * IPAM pools that the service will use to get IP addresses. A single policy can
   * have multiple rules and be applied to multiple Amazon Web Services Regions. If
   * the IPAM pool run out of addresses then the services fallback to Amazon-provided
   * IP addresses. A policy can be applied to an individual Amazon Web Services
   * account or an entity within Amazon Web Services Organizations.</p>
   */
  inline const IpamPolicy& GetIpamPolicy() const { return m_ipamPolicy; }
  template <typename IpamPolicyT = IpamPolicy>
  void SetIpamPolicy(IpamPolicyT&& value) {
    m_ipamPolicyHasBeenSet = true;
    m_ipamPolicy = std::forward<IpamPolicyT>(value);
  }
  template <typename IpamPolicyT = IpamPolicy>
  DeleteIpamPolicyResponse& WithIpamPolicy(IpamPolicyT&& value) {
    SetIpamPolicy(std::forward<IpamPolicyT>(value));
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
  DeleteIpamPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPolicy m_ipamPolicy;
  bool m_ipamPolicyHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

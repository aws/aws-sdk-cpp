/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class DeleteIpamPrefixListResolverResponse {
 public:
  AWS_EC2_API DeleteIpamPrefixListResolverResponse() = default;
  AWS_EC2_API DeleteIpamPrefixListResolverResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteIpamPrefixListResolverResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the IPAM prefix list resolver that was deleted.</p>
   */
  inline const IpamPrefixListResolver& GetIpamPrefixListResolver() const { return m_ipamPrefixListResolver; }
  template <typename IpamPrefixListResolverT = IpamPrefixListResolver>
  void SetIpamPrefixListResolver(IpamPrefixListResolverT&& value) {
    m_ipamPrefixListResolverHasBeenSet = true;
    m_ipamPrefixListResolver = std::forward<IpamPrefixListResolverT>(value);
  }
  template <typename IpamPrefixListResolverT = IpamPrefixListResolver>
  DeleteIpamPrefixListResolverResponse& WithIpamPrefixListResolver(IpamPrefixListResolverT&& value) {
    SetIpamPrefixListResolver(std::forward<IpamPrefixListResolverT>(value));
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
  DeleteIpamPrefixListResolverResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPrefixListResolver m_ipamPrefixListResolver;
  bool m_ipamPrefixListResolverHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

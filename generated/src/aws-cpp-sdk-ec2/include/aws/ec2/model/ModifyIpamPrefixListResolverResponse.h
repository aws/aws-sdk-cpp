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
class ModifyIpamPrefixListResolverResponse {
 public:
  AWS_EC2_API ModifyIpamPrefixListResolverResponse() = default;
  AWS_EC2_API ModifyIpamPrefixListResolverResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyIpamPrefixListResolverResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the modified IPAM prefix list resolver.</p>
   */
  inline const IpamPrefixListResolver& GetIpamPrefixListResolver() const { return m_ipamPrefixListResolver; }
  template <typename IpamPrefixListResolverT = IpamPrefixListResolver>
  void SetIpamPrefixListResolver(IpamPrefixListResolverT&& value) {
    m_ipamPrefixListResolverHasBeenSet = true;
    m_ipamPrefixListResolver = std::forward<IpamPrefixListResolverT>(value);
  }
  template <typename IpamPrefixListResolverT = IpamPrefixListResolver>
  ModifyIpamPrefixListResolverResponse& WithIpamPrefixListResolver(IpamPrefixListResolverT&& value) {
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
  ModifyIpamPrefixListResolverResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPrefixListResolver m_ipamPrefixListResolver;

  ResponseMetadata m_responseMetadata;
  bool m_ipamPrefixListResolverHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

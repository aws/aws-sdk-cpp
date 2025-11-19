/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicyDocument.h>
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
class ModifyIpamPolicyAllocationRulesResponse {
 public:
  AWS_EC2_API ModifyIpamPolicyAllocationRulesResponse() = default;
  AWS_EC2_API ModifyIpamPolicyAllocationRulesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyIpamPolicyAllocationRulesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The modified IPAM policy containing the updated allocation rules.</p>
   */
  inline const IpamPolicyDocument& GetIpamPolicyDocument() const { return m_ipamPolicyDocument; }
  template <typename IpamPolicyDocumentT = IpamPolicyDocument>
  void SetIpamPolicyDocument(IpamPolicyDocumentT&& value) {
    m_ipamPolicyDocumentHasBeenSet = true;
    m_ipamPolicyDocument = std::forward<IpamPolicyDocumentT>(value);
  }
  template <typename IpamPolicyDocumentT = IpamPolicyDocument>
  ModifyIpamPolicyAllocationRulesResponse& WithIpamPolicyDocument(IpamPolicyDocumentT&& value) {
    SetIpamPolicyDocument(std::forward<IpamPolicyDocumentT>(value));
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
  ModifyIpamPolicyAllocationRulesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  IpamPolicyDocument m_ipamPolicyDocument;
  bool m_ipamPolicyDocumentHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

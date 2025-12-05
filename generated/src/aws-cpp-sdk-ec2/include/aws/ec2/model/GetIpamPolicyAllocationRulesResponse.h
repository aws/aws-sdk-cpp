/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class GetIpamPolicyAllocationRulesResponse {
 public:
  AWS_EC2_API GetIpamPolicyAllocationRulesResponse() = default;
  AWS_EC2_API GetIpamPolicyAllocationRulesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamPolicyAllocationRulesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The IPAM policy documents containing the allocation rules.</p> <p>Allocation
   * rules are optional configurations within an IPAM policy that map Amazon Web
   * Services resource types to specific IPAM pools. If no rules are defined, the
   * resource types default to using Amazon-provided IP addresses.</p>
   */
  inline const Aws::Vector<IpamPolicyDocument>& GetIpamPolicyDocuments() const { return m_ipamPolicyDocuments; }
  template <typename IpamPolicyDocumentsT = Aws::Vector<IpamPolicyDocument>>
  void SetIpamPolicyDocuments(IpamPolicyDocumentsT&& value) {
    m_ipamPolicyDocumentsHasBeenSet = true;
    m_ipamPolicyDocuments = std::forward<IpamPolicyDocumentsT>(value);
  }
  template <typename IpamPolicyDocumentsT = Aws::Vector<IpamPolicyDocument>>
  GetIpamPolicyAllocationRulesResponse& WithIpamPolicyDocuments(IpamPolicyDocumentsT&& value) {
    SetIpamPolicyDocuments(std::forward<IpamPolicyDocumentsT>(value));
    return *this;
  }
  template <typename IpamPolicyDocumentsT = IpamPolicyDocument>
  GetIpamPolicyAllocationRulesResponse& AddIpamPolicyDocuments(IpamPolicyDocumentsT&& value) {
    m_ipamPolicyDocumentsHasBeenSet = true;
    m_ipamPolicyDocuments.emplace_back(std::forward<IpamPolicyDocumentsT>(value));
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
  GetIpamPolicyAllocationRulesResponse& WithNextToken(NextTokenT&& value) {
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
  GetIpamPolicyAllocationRulesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IpamPolicyDocument> m_ipamPolicyDocuments;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_ipamPolicyDocumentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

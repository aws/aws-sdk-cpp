/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPolicyOrganizationTarget.h>
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
class GetIpamPolicyOrganizationTargetsResponse {
 public:
  AWS_EC2_API GetIpamPolicyOrganizationTargetsResponse() = default;
  AWS_EC2_API GetIpamPolicyOrganizationTargetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetIpamPolicyOrganizationTargetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The Amazon Web Services Organizations targets for an IPAM policy.</p>
   */
  inline const Aws::Vector<IpamPolicyOrganizationTarget>& GetOrganizationTargets() const { return m_organizationTargets; }
  template <typename OrganizationTargetsT = Aws::Vector<IpamPolicyOrganizationTarget>>
  void SetOrganizationTargets(OrganizationTargetsT&& value) {
    m_organizationTargetsHasBeenSet = true;
    m_organizationTargets = std::forward<OrganizationTargetsT>(value);
  }
  template <typename OrganizationTargetsT = Aws::Vector<IpamPolicyOrganizationTarget>>
  GetIpamPolicyOrganizationTargetsResponse& WithOrganizationTargets(OrganizationTargetsT&& value) {
    SetOrganizationTargets(std::forward<OrganizationTargetsT>(value));
    return *this;
  }
  template <typename OrganizationTargetsT = IpamPolicyOrganizationTarget>
  GetIpamPolicyOrganizationTargetsResponse& AddOrganizationTargets(OrganizationTargetsT&& value) {
    m_organizationTargetsHasBeenSet = true;
    m_organizationTargets.emplace_back(std::forward<OrganizationTargetsT>(value));
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
  GetIpamPolicyOrganizationTargetsResponse& WithNextToken(NextTokenT&& value) {
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
  GetIpamPolicyOrganizationTargetsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<IpamPolicyOrganizationTarget> m_organizationTargets;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_organizationTargetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

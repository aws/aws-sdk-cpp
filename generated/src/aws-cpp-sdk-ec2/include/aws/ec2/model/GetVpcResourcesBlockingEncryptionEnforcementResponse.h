/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcEncryptionNonCompliantResource.h>

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
class GetVpcResourcesBlockingEncryptionEnforcementResponse {
 public:
  AWS_EC2_API GetVpcResourcesBlockingEncryptionEnforcementResponse() = default;
  AWS_EC2_API GetVpcResourcesBlockingEncryptionEnforcementResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetVpcResourcesBlockingEncryptionEnforcementResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about resources that are blocking encryption enforcement.</p>
   */
  inline const Aws::Vector<VpcEncryptionNonCompliantResource>& GetNonCompliantResources() const { return m_nonCompliantResources; }
  template <typename NonCompliantResourcesT = Aws::Vector<VpcEncryptionNonCompliantResource>>
  void SetNonCompliantResources(NonCompliantResourcesT&& value) {
    m_nonCompliantResourcesHasBeenSet = true;
    m_nonCompliantResources = std::forward<NonCompliantResourcesT>(value);
  }
  template <typename NonCompliantResourcesT = Aws::Vector<VpcEncryptionNonCompliantResource>>
  GetVpcResourcesBlockingEncryptionEnforcementResponse& WithNonCompliantResources(NonCompliantResourcesT&& value) {
    SetNonCompliantResources(std::forward<NonCompliantResourcesT>(value));
    return *this;
  }
  template <typename NonCompliantResourcesT = VpcEncryptionNonCompliantResource>
  GetVpcResourcesBlockingEncryptionEnforcementResponse& AddNonCompliantResources(NonCompliantResourcesT&& value) {
    m_nonCompliantResourcesHasBeenSet = true;
    m_nonCompliantResources.emplace_back(std::forward<NonCompliantResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetVpcResourcesBlockingEncryptionEnforcementResponse& WithNextToken(NextTokenT&& value) {
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
  GetVpcResourcesBlockingEncryptionEnforcementResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<VpcEncryptionNonCompliantResource> m_nonCompliantResources;
  bool m_nonCompliantResourcesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

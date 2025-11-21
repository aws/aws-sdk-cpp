/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
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
class EnableIpamPolicyResponse {
 public:
  AWS_EC2_API EnableIpamPolicyResponse() = default;
  AWS_EC2_API EnableIpamPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API EnableIpamPolicyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the IPAM policy that was enabled.</p>
   */
  inline const Aws::String& GetIpamPolicyId() const { return m_ipamPolicyId; }
  template <typename IpamPolicyIdT = Aws::String>
  void SetIpamPolicyId(IpamPolicyIdT&& value) {
    m_ipamPolicyIdHasBeenSet = true;
    m_ipamPolicyId = std::forward<IpamPolicyIdT>(value);
  }
  template <typename IpamPolicyIdT = Aws::String>
  EnableIpamPolicyResponse& WithIpamPolicyId(IpamPolicyIdT&& value) {
    SetIpamPolicyId(std::forward<IpamPolicyIdT>(value));
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
  EnableIpamPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipamPolicyId;
  bool m_ipamPolicyIdHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

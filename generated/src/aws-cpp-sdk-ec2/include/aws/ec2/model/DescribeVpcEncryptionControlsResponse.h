/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpcEncryptionControl.h>

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
class DescribeVpcEncryptionControlsResponse {
 public:
  AWS_EC2_API DescribeVpcEncryptionControlsResponse() = default;
  AWS_EC2_API DescribeVpcEncryptionControlsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeVpcEncryptionControlsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the VPC Encryption Control configurations.</p>
   */
  inline const Aws::Vector<VpcEncryptionControl>& GetVpcEncryptionControls() const { return m_vpcEncryptionControls; }
  template <typename VpcEncryptionControlsT = Aws::Vector<VpcEncryptionControl>>
  void SetVpcEncryptionControls(VpcEncryptionControlsT&& value) {
    m_vpcEncryptionControlsHasBeenSet = true;
    m_vpcEncryptionControls = std::forward<VpcEncryptionControlsT>(value);
  }
  template <typename VpcEncryptionControlsT = Aws::Vector<VpcEncryptionControl>>
  DescribeVpcEncryptionControlsResponse& WithVpcEncryptionControls(VpcEncryptionControlsT&& value) {
    SetVpcEncryptionControls(std::forward<VpcEncryptionControlsT>(value));
    return *this;
  }
  template <typename VpcEncryptionControlsT = VpcEncryptionControl>
  DescribeVpcEncryptionControlsResponse& AddVpcEncryptionControls(VpcEncryptionControlsT&& value) {
    m_vpcEncryptionControlsHasBeenSet = true;
    m_vpcEncryptionControls.emplace_back(std::forward<VpcEncryptionControlsT>(value));
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
  DescribeVpcEncryptionControlsResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeVpcEncryptionControlsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<VpcEncryptionControl> m_vpcEncryptionControls;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_vpcEncryptionControlsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

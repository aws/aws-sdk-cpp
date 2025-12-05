/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class CreateVpcEncryptionControlResponse {
 public:
  AWS_EC2_API CreateVpcEncryptionControlResponse() = default;
  AWS_EC2_API CreateVpcEncryptionControlResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateVpcEncryptionControlResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the VPC Encryption Control configuration.</p>
   */
  inline const VpcEncryptionControl& GetVpcEncryptionControl() const { return m_vpcEncryptionControl; }
  template <typename VpcEncryptionControlT = VpcEncryptionControl>
  void SetVpcEncryptionControl(VpcEncryptionControlT&& value) {
    m_vpcEncryptionControlHasBeenSet = true;
    m_vpcEncryptionControl = std::forward<VpcEncryptionControlT>(value);
  }
  template <typename VpcEncryptionControlT = VpcEncryptionControl>
  CreateVpcEncryptionControlResponse& WithVpcEncryptionControl(VpcEncryptionControlT&& value) {
    SetVpcEncryptionControl(std::forward<VpcEncryptionControlT>(value));
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
  CreateVpcEncryptionControlResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  VpcEncryptionControl m_vpcEncryptionControl;

  ResponseMetadata m_responseMetadata;
  bool m_vpcEncryptionControlHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

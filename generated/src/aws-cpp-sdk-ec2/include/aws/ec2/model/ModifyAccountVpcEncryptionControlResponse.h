/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AccountVpcEncryptionControl.h>
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
class ModifyAccountVpcEncryptionControlResponse {
 public:
  AWS_EC2_API ModifyAccountVpcEncryptionControlResponse() = default;
  AWS_EC2_API ModifyAccountVpcEncryptionControlResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyAccountVpcEncryptionControlResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the account-level VPC Encryption Control configuration.</p>
   */
  inline const AccountVpcEncryptionControl& GetAccountVpcEncryptionControl() const { return m_accountVpcEncryptionControl; }
  template <typename AccountVpcEncryptionControlT = AccountVpcEncryptionControl>
  void SetAccountVpcEncryptionControl(AccountVpcEncryptionControlT&& value) {
    m_accountVpcEncryptionControlHasBeenSet = true;
    m_accountVpcEncryptionControl = std::forward<AccountVpcEncryptionControlT>(value);
  }
  template <typename AccountVpcEncryptionControlT = AccountVpcEncryptionControl>
  ModifyAccountVpcEncryptionControlResponse& WithAccountVpcEncryptionControl(AccountVpcEncryptionControlT&& value) {
    SetAccountVpcEncryptionControl(std::forward<AccountVpcEncryptionControlT>(value));
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
  ModifyAccountVpcEncryptionControlResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AccountVpcEncryptionControl m_accountVpcEncryptionControl;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accountVpcEncryptionControlHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

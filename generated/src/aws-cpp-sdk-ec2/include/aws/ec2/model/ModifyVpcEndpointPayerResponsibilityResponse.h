/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/PayerResponsibilityEntry.h>
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
class ModifyVpcEndpointPayerResponsibilityResponse {
 public:
  AWS_EC2_API ModifyVpcEndpointPayerResponsibilityResponse() = default;
  AWS_EC2_API ModifyVpcEndpointPayerResponsibilityResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyVpcEndpointPayerResponsibilityResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the VPC endpoint.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  ModifyVpcEndpointPayerResponsibilityResponse& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payer responsibility settings for the VPC endpoint.</p>
   */
  inline const Aws::Vector<PayerResponsibilityEntry>& GetPayerResponsibilities() const { return m_payerResponsibilities; }
  template <typename PayerResponsibilitiesT = Aws::Vector<PayerResponsibilityEntry>>
  void SetPayerResponsibilities(PayerResponsibilitiesT&& value) {
    m_payerResponsibilitiesHasBeenSet = true;
    m_payerResponsibilities = std::forward<PayerResponsibilitiesT>(value);
  }
  template <typename PayerResponsibilitiesT = Aws::Vector<PayerResponsibilityEntry>>
  ModifyVpcEndpointPayerResponsibilityResponse& WithPayerResponsibilities(PayerResponsibilitiesT&& value) {
    SetPayerResponsibilities(std::forward<PayerResponsibilitiesT>(value));
    return *this;
  }
  template <typename PayerResponsibilitiesT = PayerResponsibilityEntry>
  ModifyVpcEndpointPayerResponsibilityResponse& AddPayerResponsibilities(PayerResponsibilitiesT&& value) {
    m_payerResponsibilitiesHasBeenSet = true;
    m_payerResponsibilities.emplace_back(std::forward<PayerResponsibilitiesT>(value));
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
  ModifyVpcEndpointPayerResponsibilityResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_vpcEndpointId;

  Aws::Vector<PayerResponsibilityEntry> m_payerResponsibilities;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_payerResponsibilitiesHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

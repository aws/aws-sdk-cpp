/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationOperationFailure.h>
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
class DisassociateNetworkingFlexCostAllocationPolicyResponse {
 public:
  AWS_EC2_API DisassociateNetworkingFlexCostAllocationPolicyResponse() = default;
  AWS_EC2_API DisassociateNetworkingFlexCostAllocationPolicyResponse(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DisassociateNetworkingFlexCostAllocationPolicyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The IDs of the policy associations that were removed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFcaPolicyDisassociations() const { return m_fcaPolicyDisassociations; }
  template <typename FcaPolicyDisassociationsT = Aws::Vector<Aws::String>>
  void SetFcaPolicyDisassociations(FcaPolicyDisassociationsT&& value) {
    m_fcaPolicyDisassociationsHasBeenSet = true;
    m_fcaPolicyDisassociations = std::forward<FcaPolicyDisassociationsT>(value);
  }
  template <typename FcaPolicyDisassociationsT = Aws::Vector<Aws::String>>
  DisassociateNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyDisassociations(FcaPolicyDisassociationsT&& value) {
    SetFcaPolicyDisassociations(std::forward<FcaPolicyDisassociationsT>(value));
    return *this;
  }
  template <typename FcaPolicyDisassociationsT = Aws::String>
  DisassociateNetworkingFlexCostAllocationPolicyResponse& AddFcaPolicyDisassociations(FcaPolicyDisassociationsT&& value) {
    m_fcaPolicyDisassociationsHasBeenSet = true;
    m_fcaPolicyDisassociations.emplace_back(std::forward<FcaPolicyDisassociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the policy associations that could not be removed.</p>
   */
  inline const Aws::Vector<FlexCostAllocationOperationFailure>& GetFcaPolicyDisassociationFailures() const {
    return m_fcaPolicyDisassociationFailures;
  }
  template <typename FcaPolicyDisassociationFailuresT = Aws::Vector<FlexCostAllocationOperationFailure>>
  void SetFcaPolicyDisassociationFailures(FcaPolicyDisassociationFailuresT&& value) {
    m_fcaPolicyDisassociationFailuresHasBeenSet = true;
    m_fcaPolicyDisassociationFailures = std::forward<FcaPolicyDisassociationFailuresT>(value);
  }
  template <typename FcaPolicyDisassociationFailuresT = Aws::Vector<FlexCostAllocationOperationFailure>>
  DisassociateNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyDisassociationFailures(FcaPolicyDisassociationFailuresT&& value) {
    SetFcaPolicyDisassociationFailures(std::forward<FcaPolicyDisassociationFailuresT>(value));
    return *this;
  }
  template <typename FcaPolicyDisassociationFailuresT = FlexCostAllocationOperationFailure>
  DisassociateNetworkingFlexCostAllocationPolicyResponse& AddFcaPolicyDisassociationFailures(FcaPolicyDisassociationFailuresT&& value) {
    m_fcaPolicyDisassociationFailuresHasBeenSet = true;
    m_fcaPolicyDisassociationFailures.emplace_back(std::forward<FcaPolicyDisassociationFailuresT>(value));
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
  DisassociateNetworkingFlexCostAllocationPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_fcaPolicyDisassociations;

  Aws::Vector<FlexCostAllocationOperationFailure> m_fcaPolicyDisassociationFailures;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fcaPolicyDisassociationsHasBeenSet = false;
  bool m_fcaPolicyDisassociationFailuresHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

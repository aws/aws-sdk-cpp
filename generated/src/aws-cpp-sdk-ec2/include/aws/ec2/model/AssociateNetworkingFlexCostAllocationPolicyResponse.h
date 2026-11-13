/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationOperationFailure.h>
#include <aws/ec2/model/FlexCostAllocationPolicyAssociationDescription.h>
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
class AssociateNetworkingFlexCostAllocationPolicyResponse {
 public:
  AWS_EC2_API AssociateNetworkingFlexCostAllocationPolicyResponse() = default;
  AWS_EC2_API AssociateNetworkingFlexCostAllocationPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API AssociateNetworkingFlexCostAllocationPolicyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the policy associations that were created.</p>
   */
  inline const Aws::Vector<FlexCostAllocationPolicyAssociationDescription>& GetFcaPolicyAssociations() const {
    return m_fcaPolicyAssociations;
  }
  template <typename FcaPolicyAssociationsT = Aws::Vector<FlexCostAllocationPolicyAssociationDescription>>
  void SetFcaPolicyAssociations(FcaPolicyAssociationsT&& value) {
    m_fcaPolicyAssociationsHasBeenSet = true;
    m_fcaPolicyAssociations = std::forward<FcaPolicyAssociationsT>(value);
  }
  template <typename FcaPolicyAssociationsT = Aws::Vector<FlexCostAllocationPolicyAssociationDescription>>
  AssociateNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyAssociations(FcaPolicyAssociationsT&& value) {
    SetFcaPolicyAssociations(std::forward<FcaPolicyAssociationsT>(value));
    return *this;
  }
  template <typename FcaPolicyAssociationsT = FlexCostAllocationPolicyAssociationDescription>
  AssociateNetworkingFlexCostAllocationPolicyResponse& AddFcaPolicyAssociations(FcaPolicyAssociationsT&& value) {
    m_fcaPolicyAssociationsHasBeenSet = true;
    m_fcaPolicyAssociations.emplace_back(std::forward<FcaPolicyAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the network resources that could not be associated with the
   * policy.</p>
   */
  inline const Aws::Vector<FlexCostAllocationOperationFailure>& GetFcaPolicyAssociationFailures() const {
    return m_fcaPolicyAssociationFailures;
  }
  template <typename FcaPolicyAssociationFailuresT = Aws::Vector<FlexCostAllocationOperationFailure>>
  void SetFcaPolicyAssociationFailures(FcaPolicyAssociationFailuresT&& value) {
    m_fcaPolicyAssociationFailuresHasBeenSet = true;
    m_fcaPolicyAssociationFailures = std::forward<FcaPolicyAssociationFailuresT>(value);
  }
  template <typename FcaPolicyAssociationFailuresT = Aws::Vector<FlexCostAllocationOperationFailure>>
  AssociateNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyAssociationFailures(FcaPolicyAssociationFailuresT&& value) {
    SetFcaPolicyAssociationFailures(std::forward<FcaPolicyAssociationFailuresT>(value));
    return *this;
  }
  template <typename FcaPolicyAssociationFailuresT = FlexCostAllocationOperationFailure>
  AssociateNetworkingFlexCostAllocationPolicyResponse& AddFcaPolicyAssociationFailures(FcaPolicyAssociationFailuresT&& value) {
    m_fcaPolicyAssociationFailuresHasBeenSet = true;
    m_fcaPolicyAssociationFailures.emplace_back(std::forward<FcaPolicyAssociationFailuresT>(value));
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
  AssociateNetworkingFlexCostAllocationPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FlexCostAllocationPolicyAssociationDescription> m_fcaPolicyAssociations;

  Aws::Vector<FlexCostAllocationOperationFailure> m_fcaPolicyAssociationFailures;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fcaPolicyAssociationsHasBeenSet = false;
  bool m_fcaPolicyAssociationFailuresHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

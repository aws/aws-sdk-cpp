/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationPolicyVersion.h>
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
class GetNetworkingFlexCostAllocationPolicyVersionsResponse {
 public:
  AWS_EC2_API GetNetworkingFlexCostAllocationPolicyVersionsResponse() = default;
  AWS_EC2_API GetNetworkingFlexCostAllocationPolicyVersionsResponse(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetNetworkingFlexCostAllocationPolicyVersionsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the policy versions.</p>
   */
  inline const Aws::Vector<FlexCostAllocationPolicyVersion>& GetFcaPolicyVersions() const { return m_fcaPolicyVersions; }
  template <typename FcaPolicyVersionsT = Aws::Vector<FlexCostAllocationPolicyVersion>>
  void SetFcaPolicyVersions(FcaPolicyVersionsT&& value) {
    m_fcaPolicyVersionsHasBeenSet = true;
    m_fcaPolicyVersions = std::forward<FcaPolicyVersionsT>(value);
  }
  template <typename FcaPolicyVersionsT = Aws::Vector<FlexCostAllocationPolicyVersion>>
  GetNetworkingFlexCostAllocationPolicyVersionsResponse& WithFcaPolicyVersions(FcaPolicyVersionsT&& value) {
    SetFcaPolicyVersions(std::forward<FcaPolicyVersionsT>(value));
    return *this;
  }
  template <typename FcaPolicyVersionsT = FlexCostAllocationPolicyVersion>
  GetNetworkingFlexCostAllocationPolicyVersionsResponse& AddFcaPolicyVersions(FcaPolicyVersionsT&& value) {
    m_fcaPolicyVersionsHasBeenSet = true;
    m_fcaPolicyVersions.emplace_back(std::forward<FcaPolicyVersionsT>(value));
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
  GetNetworkingFlexCostAllocationPolicyVersionsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FlexCostAllocationPolicyVersion> m_fcaPolicyVersions;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fcaPolicyVersionsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

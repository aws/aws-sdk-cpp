/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FlexCostAllocationPolicyDescription.h>
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
class DescribeNetworkingFlexCostAllocationPoliciesResponse {
 public:
  AWS_EC2_API DescribeNetworkingFlexCostAllocationPoliciesResponse() = default;
  AWS_EC2_API DescribeNetworkingFlexCostAllocationPoliciesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeNetworkingFlexCostAllocationPoliciesResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the flex cost allocation policies.</p>
   */
  inline const Aws::Vector<FlexCostAllocationPolicyDescription>& GetFlexCostAllocationPolicies() const {
    return m_flexCostAllocationPolicies;
  }
  template <typename FlexCostAllocationPoliciesT = Aws::Vector<FlexCostAllocationPolicyDescription>>
  void SetFlexCostAllocationPolicies(FlexCostAllocationPoliciesT&& value) {
    m_flexCostAllocationPoliciesHasBeenSet = true;
    m_flexCostAllocationPolicies = std::forward<FlexCostAllocationPoliciesT>(value);
  }
  template <typename FlexCostAllocationPoliciesT = Aws::Vector<FlexCostAllocationPolicyDescription>>
  DescribeNetworkingFlexCostAllocationPoliciesResponse& WithFlexCostAllocationPolicies(FlexCostAllocationPoliciesT&& value) {
    SetFlexCostAllocationPolicies(std::forward<FlexCostAllocationPoliciesT>(value));
    return *this;
  }
  template <typename FlexCostAllocationPoliciesT = FlexCostAllocationPolicyDescription>
  DescribeNetworkingFlexCostAllocationPoliciesResponse& AddFlexCostAllocationPolicies(FlexCostAllocationPoliciesT&& value) {
    m_flexCostAllocationPoliciesHasBeenSet = true;
    m_flexCostAllocationPolicies.emplace_back(std::forward<FlexCostAllocationPoliciesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeNetworkingFlexCostAllocationPoliciesResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeNetworkingFlexCostAllocationPoliciesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FlexCostAllocationPolicyDescription> m_flexCostAllocationPolicies;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_flexCostAllocationPoliciesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

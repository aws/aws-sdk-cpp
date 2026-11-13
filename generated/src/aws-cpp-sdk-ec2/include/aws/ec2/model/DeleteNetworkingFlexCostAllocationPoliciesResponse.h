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
class DeleteNetworkingFlexCostAllocationPoliciesResponse {
 public:
  AWS_EC2_API DeleteNetworkingFlexCostAllocationPoliciesResponse() = default;
  AWS_EC2_API DeleteNetworkingFlexCostAllocationPoliciesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteNetworkingFlexCostAllocationPoliciesResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The IDs of the policies that were successfully deleted.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  DeleteNetworkingFlexCostAllocationPoliciesResponse& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = Aws::String>
  DeleteNetworkingFlexCostAllocationPoliciesResponse& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the policies that could not be deleted.</p>
   */
  inline const Aws::Vector<FlexCostAllocationOperationFailure>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<FlexCostAllocationOperationFailure>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<FlexCostAllocationOperationFailure>>
  DeleteNetworkingFlexCostAllocationPoliciesResponse& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = FlexCostAllocationOperationFailure>
  DeleteNetworkingFlexCostAllocationPoliciesResponse& AddFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed.emplace_back(std::forward<FailedT>(value));
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
  DeleteNetworkingFlexCostAllocationPoliciesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_successful;

  Aws::Vector<FlexCostAllocationOperationFailure> m_failed;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

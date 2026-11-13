/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
class CreateNetworkingFlexCostAllocationPolicyResponse {
 public:
  AWS_EC2_API CreateNetworkingFlexCostAllocationPolicyResponse() = default;
  AWS_EC2_API CreateNetworkingFlexCostAllocationPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateNetworkingFlexCostAllocationPolicyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the flex cost allocation policy.</p>
   */
  inline const Aws::String& GetFcaPolicyId() const { return m_fcaPolicyId; }
  template <typename FcaPolicyIdT = Aws::String>
  void SetFcaPolicyId(FcaPolicyIdT&& value) {
    m_fcaPolicyIdHasBeenSet = true;
    m_fcaPolicyId = std::forward<FcaPolicyIdT>(value);
  }
  template <typename FcaPolicyIdT = Aws::String>
  CreateNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flex cost allocation policy.</p>
   */
  inline const Aws::String& GetFcaPolicyArn() const { return m_fcaPolicyArn; }
  template <typename FcaPolicyArnT = Aws::String>
  void SetFcaPolicyArn(FcaPolicyArnT&& value) {
    m_fcaPolicyArnHasBeenSet = true;
    m_fcaPolicyArn = std::forward<FcaPolicyArnT>(value);
  }
  template <typename FcaPolicyArnT = Aws::String>
  CreateNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyArn(FcaPolicyArnT&& value) {
    SetFcaPolicyArn(std::forward<FcaPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the policy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateNetworkingFlexCostAllocationPolicyResponse& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the policy is expected to apply to network
   * traffic.</p>
   */
  inline const Aws::Utils::DateTime& GetExpectedEffectiveAt() const { return m_expectedEffectiveAt; }
  template <typename ExpectedEffectiveAtT = Aws::Utils::DateTime>
  void SetExpectedEffectiveAt(ExpectedEffectiveAtT&& value) {
    m_expectedEffectiveAtHasBeenSet = true;
    m_expectedEffectiveAt = std::forward<ExpectedEffectiveAtT>(value);
  }
  template <typename ExpectedEffectiveAtT = Aws::Utils::DateTime>
  CreateNetworkingFlexCostAllocationPolicyResponse& WithExpectedEffectiveAt(ExpectedEffectiveAtT&& value) {
    SetExpectedEffectiveAt(std::forward<ExpectedEffectiveAtT>(value));
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
  CreateNetworkingFlexCostAllocationPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_fcaPolicyId;

  Aws::String m_fcaPolicyArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_expectedEffectiveAt{};

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_fcaPolicyArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expectedEffectiveAtHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

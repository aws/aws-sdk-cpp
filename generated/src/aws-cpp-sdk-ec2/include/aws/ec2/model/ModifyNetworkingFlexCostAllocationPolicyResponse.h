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
class ModifyNetworkingFlexCostAllocationPolicyResponse {
 public:
  AWS_EC2_API ModifyNetworkingFlexCostAllocationPolicyResponse() = default;
  AWS_EC2_API ModifyNetworkingFlexCostAllocationPolicyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API ModifyNetworkingFlexCostAllocationPolicyResponse& operator=(
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
  ModifyNetworkingFlexCostAllocationPolicyResponse& WithFcaPolicyId(FcaPolicyIdT&& value) {
    SetFcaPolicyId(std::forward<FcaPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the policy was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ModifyNetworkingFlexCostAllocationPolicyResponse& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the policy that this modification created.</p>
   */
  inline int GetVersion() const { return m_version; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline ModifyNetworkingFlexCostAllocationPolicyResponse& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the new version of the policy is expected to apply to
   * network traffic.</p>
   */
  inline const Aws::Utils::DateTime& GetVersionExpectedEffectiveAt() const { return m_versionExpectedEffectiveAt; }
  template <typename VersionExpectedEffectiveAtT = Aws::Utils::DateTime>
  void SetVersionExpectedEffectiveAt(VersionExpectedEffectiveAtT&& value) {
    m_versionExpectedEffectiveAtHasBeenSet = true;
    m_versionExpectedEffectiveAt = std::forward<VersionExpectedEffectiveAtT>(value);
  }
  template <typename VersionExpectedEffectiveAtT = Aws::Utils::DateTime>
  ModifyNetworkingFlexCostAllocationPolicyResponse& WithVersionExpectedEffectiveAt(VersionExpectedEffectiveAtT&& value) {
    SetVersionExpectedEffectiveAt(std::forward<VersionExpectedEffectiveAtT>(value));
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
  ModifyNetworkingFlexCostAllocationPolicyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_fcaPolicyId;

  Aws::Utils::DateTime m_updatedAt{};

  int m_version{0};

  Aws::Utils::DateTime m_versionExpectedEffectiveAt{};

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fcaPolicyIdHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_versionExpectedEffectiveAtHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

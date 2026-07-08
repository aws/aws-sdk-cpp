/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactRequest.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Artifact {
namespace Model {

/**
 */
class GetComplianceInquiryMetadataRequest : public ArtifactRequest {
 public:
  AWS_ARTIFACT_API GetComplianceInquiryMetadataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetComplianceInquiryMetadata"; }

  AWS_ARTIFACT_API Aws::String SerializePayload() const override;

  AWS_ARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Unique resource ID for the compliance inquiry.</p>
   */
  inline const Aws::String& GetComplianceInquiryId() const { return m_complianceInquiryId; }
  inline bool ComplianceInquiryIdHasBeenSet() const { return m_complianceInquiryIdHasBeenSet; }
  template <typename ComplianceInquiryIdT = Aws::String>
  void SetComplianceInquiryId(ComplianceInquiryIdT&& value) {
    m_complianceInquiryIdHasBeenSet = true;
    m_complianceInquiryId = std::forward<ComplianceInquiryIdT>(value);
  }
  template <typename ComplianceInquiryIdT = Aws::String>
  GetComplianceInquiryMetadataRequest& WithComplianceInquiryId(ComplianceInquiryIdT&& value) {
    SetComplianceInquiryId(std::forward<ComplianceInquiryIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_complianceInquiryId;
  bool m_complianceInquiryIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws

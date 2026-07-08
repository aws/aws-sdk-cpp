/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactRequest.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Artifact {
namespace Model {

/**
 */
class ExportComplianceInquiryRequest : public ArtifactRequest {
 public:
  AWS_ARTIFACT_API ExportComplianceInquiryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ExportComplianceInquiry"; }

  AWS_ARTIFACT_API Aws::String SerializePayload() const override;

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
  ExportComplianceInquiryRequest& WithComplianceInquiryId(ComplianceInquiryIdT&& value) {
    SetComplianceInquiryId(std::forward<ComplianceInquiryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of query identifiers to include in the export.</p>
   */
  inline const Aws::Vector<int>& GetQueryIdentifiers() const { return m_queryIdentifiers; }
  inline bool QueryIdentifiersHasBeenSet() const { return m_queryIdentifiersHasBeenSet; }
  template <typename QueryIdentifiersT = Aws::Vector<int>>
  void SetQueryIdentifiers(QueryIdentifiersT&& value) {
    m_queryIdentifiersHasBeenSet = true;
    m_queryIdentifiers = std::forward<QueryIdentifiersT>(value);
  }
  template <typename QueryIdentifiersT = Aws::Vector<int>>
  ExportComplianceInquiryRequest& WithQueryIdentifiers(QueryIdentifiersT&& value) {
    SetQueryIdentifiers(std::forward<QueryIdentifiersT>(value));
    return *this;
  }
  inline ExportComplianceInquiryRequest& AddQueryIdentifiers(int value) {
    m_queryIdentifiersHasBeenSet = true;
    m_queryIdentifiers.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When true, include citations in the exported document.</p>
   */
  inline bool GetIncludeCitations() const { return m_includeCitations; }
  inline bool IncludeCitationsHasBeenSet() const { return m_includeCitationsHasBeenSet; }
  inline void SetIncludeCitations(bool value) {
    m_includeCitationsHasBeenSet = true;
    m_includeCitations = value;
  }
  inline ExportComplianceInquiryRequest& WithIncludeCitations(bool value) {
    SetIncludeCitations(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_complianceInquiryId;

  Aws::Vector<int> m_queryIdentifiers;

  bool m_includeCitations{false};
  bool m_complianceInquiryIdHasBeenSet = false;
  bool m_queryIdentifiersHasBeenSet = false;
  bool m_includeCitationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws

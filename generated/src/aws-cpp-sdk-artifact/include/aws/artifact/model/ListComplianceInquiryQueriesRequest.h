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
class ListComplianceInquiryQueriesRequest : public ArtifactRequest {
 public:
  AWS_ARTIFACT_API ListComplianceInquiryQueriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListComplianceInquiryQueries"; }

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
  ListComplianceInquiryQueriesRequest& WithComplianceInquiryId(ComplianceInquiryIdT&& value) {
    SetComplianceInquiryId(std::forward<ComplianceInquiryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of resources to return in the paginated response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListComplianceInquiryQueriesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token to request the next page of resources.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListComplianceInquiryQueriesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_complianceInquiryId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_complianceInquiryIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
